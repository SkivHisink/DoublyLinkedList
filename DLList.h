#pragma once

#include <stdbool.h> // bool
#include <stddef.h>  // size_t


static const size_t INVALID = ~((size_t)0);

/*dlist_create -- ������� ����� ������ ���������� ������. ������ �������� -- itemSize ����.*/
void* dlist_create(size_t itemSize);
/*dlist_destroy -- ������� ������������ ���������� ������. 
���� ������� ������� destroy, �� ������� � ��� ������� ���������� ��������.*/
void dlist_destroy(void* dlist, void(*destroy)(void*));

/*dlist_init -- ���������������� ���������� ������. ������ �������� -- itemSize ����.*/
void* dlist_init(void* dlist, size_t itemSize, void(*destroy)(void*));
/*dlist_clear -- ������� ��� �������� �� ����������� ������. 
���� ������� ������� destroy, �� ������� � ��� ������� ���������� ��������. */
void dlist_clear(void* dlist, void(*destroy)(void*));
/*dlist_count -- ���������� ��������� � ������.*/
size_t dlist_count(const void* dlist);
/*dlist_item -- �������� ������� �� ������� � ������.*/
void* dlist_item(void* dlist, size_t i);
/*dlist_append -- �������� ������� � ����� ����������� ������. � ������ ������, ������� ���������� ��������� �� ����������� �������, ����� -- NULL.*/
void* dlist_append(void* dlist);
/*dlist_prepend -- �������� ������� � ������ ����������� ������. � ������ ������, ������� ���������� ��������� �� ����������� �������, ����� -- NULL.*/
void* dlist_prepend(void* dlist);
/*dlist_removeFirst -- ������� ������� �� ������ ����������� ������.���� ������� ������� destroy, �� ������� � ��� ���������� ��������.*/
void dlist_removeFirst(void* dlist, void(*destroy)(void*));
/*dlist_removeLast -- ������� ������� �� ������ ����������� ������. ���� ������� ������� destroy, �� ������� � ��� ���������� ��������.*/
void dlist_removeLast(void* dlist, void(*destroy)(void*));
/*dlist_first -- ������������� ��� ������� �������� �� ����������� ������. ������������� ����� ����� ���������� ��� ����������� ������.*/
size_t dlist_first(const void* dlist);
/*dlist_last -- ������������� ��� ���������� �������� �� ����������� ������. ������������� ����� ����� ���������� ��� ����������� ������.*/
size_t dlist_last(const void* dlist);
/*dlist_next -- �� �������������� �������� �������� �������� ������������� ���������� �������� ������.*/
size_t dlist_next(const void* dlist, size_t item_id);
/*dlist_prev -- �� �������������� �������� �������� �������� ������������� ����������� �������� ������.*/
size_t dlist_prev(const void* dlist, size_t item_id);
/*dlist_stop -- �������������, ���������� ��� ������� ���������� � �������� �� ��������� ������.*/
size_t dlist_stop(const void* dlist);
/*dlist_current -- �������� ��������� �� ������� ������ �� ��� ��������������.*/
void* dlist_current(const void* dlist, size_t item_id);
/*dlist_insertAfter -- ������� ������ �������� ������ ����� ���������� �� ��������������. 
� ������ ������, ������� ���������� ��������� �� ����������� �������, ����� -- NULL.*/
void* dlist_insertAfter(void* dlist, size_t item_id);
/*dlist_insertBefore -- ������� ������ �������� ������ ����� ��������� �� ��������������. 
� ������ ������, ������� ���������� ��������� �� ����������� �������, ����� -- NULL.*/
void* dlist_insertBefore(void* dlist, size_t item_id);
/*dlist_erase -- �������� �������� �� ��� ��������������. ���� ������� ������� destroy, �� ������� � ��� ���������� ��������.
����� �������� �������� �� ������, �������������� ����� ��������� �� ����� ������� ����� ����� ����������.*/
void dlist_erase(void* dlist, size_t item_id, void(*destroy)(void*));