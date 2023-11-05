typedef struct s_list
{
    void *content; // 노드에 담기는 데이터
    struct s_list *next; // 노드가 가리키는 다음 노드
}   t_list;