#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_6388ab0);
CLANG_FORWARD_PROC_SYMBOL(public_638b140);
CLANG_FORWARD_PROC_SYMBOL(public_638b7f0);
CLANG_FORWARD_PROC_SYMBOL(public_638baa0);

#define public_6378857 _public_6378857
#define public_6378883 _public_6378883
#define public_63788c4 _public_63788c4
#define public_63788e3 _public_63788e3
#define public_63788ea _public_63788ea
#define public_63788f8 _public_63788f8
#define public_637891b _public_637891b
#define public_6378956 _public_6378956
#define public_6378977 _public_6378977

PROC_DECLARE(0x6378820, internal_6378820, public_6378820);
extern "C" NAKED register_t __cdecl internal_6378820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b7fc]
        test eax, eax
        push ebx
        push esi
        push edi
        je public_6378977
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        je public_6378857
        push ebp
/*FIXUP push offset public_63f34a8 @0x637883e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f34a8
        call public_6356960
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
        push eax
        call public_6388ab0
        add esp, 0x10
        public_6378857 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        test ebx, ebx
        je public_6378883
        mov eax, dword ptr ds : [public_658b7fc]
        test eax, eax
        je public_6378883
        push ebp
/*FIXUP push offset public_63f3494 @0x6378869*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3494
        call public_6356960
        mov ecx, dword ptr ds : [public_658b7fc]
        push ebx
        push ecx
        call public_6388ab0
        add esp, 0x10
        public_6378883 : nop
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_63788f8
        push ebp
/*FIXUP push offset public_63f3488 @0x637888c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3488
        call public_6356960
        mov edx, dword ptr ds : [public_658b7fc]
        push esi
        push edx
        call public_638b7f0
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x10
        test eax, eax
        je public_63788c4
        cmp eax, edi
        je public_63788c4
        cmp eax, ebx
        je public_63788c4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push eax
        call public_6388ab0
        add esp, 8
        public_63788c4 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_63788e3
        cmp eax, edi
        je public_63788e3
        cmp eax, ebx
        je public_63788e3
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
        call public_6388ab0
        add esp, 8
        public_63788e3 : nop
        test edi, edi
        jne public_63788ea
        mov edi, dword ptr ds : [esi+4]
        public_63788ea : nop
        test ebx, ebx
        jne public_63788f8
        mov ebx, dword ptr ds : [esi+4]
        cmp ebx, edi
        jne public_63788f8
        mov ebx, dword ptr ds : [esi+8]
        public_63788f8 : nop
        mov esi, dword ptr ss : [esp+0x24]
        test esi, esi
        je public_637891b
        push ebp
/*FIXUP push offset public_63f347c @0x6378901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f347c
        call public_6356960
        mov edx, dword ptr ds : [public_658b7fc]
        push esi
        push edx
        call public_638baa0
        add esp, 0x10
        public_637891b : nop
        mov eax, dword ptr ds : [public_658b7f8]
        test eax, eax
        pop ebp
        je public_6378977
        mov eax, dword ptr ds : [public_658b05c]
        test eax, eax
        je public_6378977
        test edi, edi
        je public_6378977
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        jne public_6378977
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        jne public_6378977
/*FIXUP push offset public_63f3450 @0x6378944*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3450
        call public_6356960
        add esp, 4
        mov esi, offset public_658b118
        public_6378956 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [public_658b7f8]
        push 0
        push ebx
        push edi
        push eax
        push ecx
        call public_638b140
        add esi, 4
        add esp, 0x14
        cmp esi, offset public_658b188
        jl public_6378956
        public_6378977 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6378820)
    }
}

#undef public_6378857
#undef public_6378883
#undef public_63788c4
#undef public_63788e3
#undef public_63788ea
#undef public_63788f8
#undef public_637891b
#undef public_6378956
#undef public_6378977
