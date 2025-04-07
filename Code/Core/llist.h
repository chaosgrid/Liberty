#pragma once

//****************************************************************************
//
// LList
//
// Template used to represent doubly-linked list
//
// Use LList when:
//
//    - You want to maintain a linked list of arbitrary size
//
//    - You don't mind incurring heap-function overhead when allocating
//      and deleting entries         
//
//    - Fast random-access searchability is not important
//
//    - You want linear, not circular, list traversal (traversal stops when
//      end of list reached)
//
//****************************************************************************

template <class T> class LList
{
protected:
	T* first_entry;
	T* last_entry;
	S32 cnt;

public:

	//
	// Constructor initializes empty list
	//

	LList()
	{
		reset();
	}

	//
	// Reset list to empty state by abandoning contents
	//

	void reset(void)
	{
		first_entry = NULL;
		last_entry = NULL;
		cnt = 0;
	}

	//
	// Return entry count
	//

	S32 count(void) const
	{
		return cnt;
	}

	//
	// Return first list entry (NULL if list empty)
	//

	T* first(void) const
	{
		return first_entry;
	}

	//
	// Return last list entry (NULL if list empty)
	//

	T* last(void) const
	{
		return last_entry;
	}

	//
	// Return next list entry (NULL if end of list reached)
	//
	// Return first list entry if current==NULL
	//

	T* next(T* current) const
	{
		if (current == NULL)
		{
			return first();
		}

		return current->next;
	}

	//
	// Return previous list entry (NULL if beginning of list reached)
	//
	// Return last list entry if current==NULL
	//

	T* prev(T* current) const
	{
		if (current == NULL)
		{
			return last();
		}

		return current->prev;
	}

	//
	// Link new item into list before specified entry
	// If specified entry==NULL, insert at end of list
	//

	T* link(T* entry, T* next = NULL)
	{
		T* prev;

		if (next == NULL)
		{
			prev = last_entry;
			last_entry = entry;
		}
		else
		{
			prev = next->prev;
			next->prev = entry;
		}

		if (prev == NULL)
		{
			first_entry = entry;
		}
		else
		{
			prev->next = entry;
		}

		entry->next = next;
		entry->prev = prev;

		++cnt;

		return entry;
	}

	//
	// Unlink item from list (without destroying it)
	//

	void unlink(T* entry)
	{
		if (entry->prev == NULL)
		{
			first_entry = entry->next;
		}
		else
		{
			entry->prev->next = entry->next;
		}

		if (entry->next == NULL)
		{
			last_entry = entry->prev;
		}
		else
		{
			entry->next->prev = entry->prev;
		}

		--cnt;
	}

	//
	// Allocate entry and insert before specified entry
	// If specified entry==NULL, insert at end of list
	//

	T* alloc(T* next = NULL)
	{
		T* entry;

		entry = new T;

		if (entry == NULL)
		{
			return NULL;
		}

		return link(entry, next);
	}

	//
	// Unlink item from list and destroy it
	//

	void free(T* entry)
	{
		unlink(entry);
		delete entry;
	}

	//
	// Unlink and destroy all list items
	//

	void free(void)
	{
		T* t;
		T* next;

		t = first_entry;

		while (cnt)
		{
			next = t->next;
			free(t);
			t = next;
		}
	}
};
