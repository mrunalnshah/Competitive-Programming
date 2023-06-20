/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <math.h>

 // Hash map implementation
typedef struct hashitem {
    int data;
    int key;
} *HashItem;

typedef struct hashmap {
    HashItem *map;
    int size;
} *HashMap;

HashMap init(int size){
    if (size < 1){
        printf("Invalid hashmap size\n");
        return NULL;
    }

    HashItem *map = (HashItem *) malloc(sizeof(struct hashitem) * size);
    for (int i = 0; i < size; i++){
        map[i] = NULL;
    }
    HashMap hashmap = (HashMap) malloc(sizeof(struct hashmap));
    hashmap->map = map;
    hashmap->size = size;
    
    return hashmap;
}

void destroy(HashMap hashmap){
    int size = hashmap->size;
    HashItem *map = hashmap->map;
    for(int i = 0; i < size; i++){
        HashItem item = map[i];
        if (item != NULL){
            free(item);
        }
    }
    free(map);
    free(hashmap);
}

int hashFunc(int size, int key){
    return abs(key) % size;
}

// 0 for failure, 1 for success
int insert(HashMap hashmap, int key, int data){
    HashItem *map = hashmap->map;
    int size = hashmap->size;
    int mapPos = hashFunc(size, key);
    HashItem itemAtPos = map[mapPos];
    int numWrap = 0;
    while (itemAtPos != NULL){
        mapPos++;
        mapPos %= size;
        
        if (mapPos == 0){
            numWrap++;
            if (numWrap > 1){
                printf("No space left in hashmap!");
                return 0;
            }
        }

        itemAtPos = map[mapPos];
    }

    HashItem newItem = malloc(sizeof(HashItem));
    newItem->data = data;
    newItem->key = key;
    map[mapPos] = newItem;
    
    return 1;
}

// 0 on failure, 1 on success
int get(HashMap hashmap, int key, int *data){
    HashItem *map = hashmap->map;
    int size = hashmap->size;
    int mapPos = hashFunc(size, key);
    if (key == 1){
        printf("%d\n", key);
    }
    HashItem itemAtPos = map[mapPos];
    int numWrap = 0;
    while(itemAtPos != NULL){
        if (key == 1){
            printf("%d\n", itemAtPos->data);
        }
        if (itemAtPos->key == key){
            *data = itemAtPos->data;
            return 1;
        } 

        mapPos++;
        mapPos %= size;

        if (mapPos == 0){
            numWrap++;
            if (numWrap > 1){
                return 0;
            } 
        }

        itemAtPos = map[mapPos];
    }
    
    return 0;
}

 // Solution
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // Basic solution
    // *returnSize = 2;
    // for(int i = 0; i < numsSize; i++){
    //     for(int j = i + 1; j < numsSize; j++){
    //         if (nums[i] + nums[j] == target){
    //             int *retArr = (int *) malloc(2*sizeof(int));
    //             retArr[0] = i;
    //             retArr[1] = j;
    //             return retArr;
    //         }
    //     }
    // }

    // return NULL;

    // More complicated solution
    int *retArr = (int *) malloc(2*sizeof(int));
    *returnSize = 2;
    HashMap map = init(2 * numsSize);
    int data;
    for(int i = 0; i < numsSize; i++){
        if (get(map, nums[i], &data)){
            retArr[0] = data;
            retArr[1] = i;
        }else{
            insert(map, target - nums[i], i);
        }
    }

    destroy(map);
    return retArr;
}