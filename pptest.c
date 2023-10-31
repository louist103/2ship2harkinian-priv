#define IDENTITY(...) __VA_ARGS__
#define GROUP(...) __VA_ARGS__
#define EVAL4(x) GROUP(x)
#define EVAL3(x) EVAL4(EVAL4(EVAL4(GROUP(x))))
#define EVAL2(x) EVAL3(EVAL3(EVAL3(GROUP(x))))
#define EVAL1(x) EVAL2(EVAL2(EVAL2(GROUP(x))))
#define EVAL(x) EVAL1(EVAL1(EVAL1(GROUP(x))))

#define MAP_OUT
#define MAP_END(a,b,...) b
#define MAP_NULL(...) 
#define END_TEST(com) 0 , com
#define GET_SECOND(a, b, ...) b
#define GET_COMMAND(com, ecom, a, b, ...) GET_SECOND MAP_OUT (END_TEST b (ecom) , com)

#define CHECK_ARR_VAL_R(val, i, ...) ((val==i)?0:(1+VALIDATE_ARR MAP_OUT (val, __VA_ARGS__-1)))
#define VALIDATE_ARR(val, ...) (GET_COMMAND (CHECK_ARR_VAL_R, MAP_END, __VA_ARGS__, )  (val, __VA_ARGS__))
#define CHECK_ARR_VAL(val, ...) CHECK_ARR_VAL_R(val, __VA_ARGS__,-1)

#define INVERT_ARRAY_R(vals, n, b, ...)   CHECK_ARR_VAL(n, IDENTITY vals) , VALIDATE_INVERSE MAP_OUT (vals, n b, __VA_ARGS__) 
#define VALIDATE_INVERSE(vals, n, ...) GET_COMMAND  (INVERT_ARRAY_R, MAP_NULL, __VA_ARGS__, )  (vals, n, __VA_ARGS__)
#define INVERT_ARRAY(count, ...) EVAL(INVERT_ARRAY_R((__VA_ARGS__),0,+1,COUNTER_##count))

#define COUNTER_6 +1,+1,+1,+1,+1,+1
#define COUNTER_20 +1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1,+1
#define COUNTER_30 COUNTER_6,COUNTER_6,COUNTER_6,COUNTER_6,COUNTER_6
#define COUNTER_100 COUNTER_20,COUNTER_20,COUNTER_20,COUNTER_20,COUNTER_20

// EVAL(CHECK_ARR_VAL(3, 1, 2, 3, 4))

INVERT_ARRAY(30, 26, 14, 2, 21, 22, 23, 16, 17, 18, 4, 6, 7, 9, 11, 12)
// EVAL3(INVERT_ARRAY(30, 1, 4))
// EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))
// EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))))
// EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))))
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))))))
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))))))
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))))))))
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))))))))
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))                                                 ))))))))   
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))                                          ))))))))   
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))))                                   ))))))))   
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))))                            ))))))))   
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))))))                     ))))))))   
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))))))              ))))))))       
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4))))))))       ))))))))       
// EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(EVAL3(INVERT_ARRAY(30, 1, 4)))))))))))))))))

int temp[] = {
    ((0 == 1) ? 0 : (1 + (((0 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 == 1) ? 0 : (1 + (((0 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) , ((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 1) ? 0 : (1 + (((0 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 +1 == 4) ? 0 : (1 + (-1 - 1 - 1)))))) ,
};
int main() {
    printf("%d %d %d %d %d %d", temp[0], temp[1], temp[2], temp[3], temp[4], temp[5]);
}