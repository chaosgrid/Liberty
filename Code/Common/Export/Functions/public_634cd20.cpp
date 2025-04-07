#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634cd00);
CLANG_FORWARD_PROC_SYMBOL(public_634cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634cd32 _public_634cd32
#define public_634cd45 _public_634cd45
#define public_634cd5b _public_634cd5b
#define public_634cd6c _public_634cd6c

PROC_DECLARE(0x634cd20, internal_634cd20, public_634cd20);
extern "C" NAKED register_t __cdecl internal_634cd20()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+0x13C]
        xor ebx, ebx
        cmp esi, ebx
        je public_634cd6c
        push edi
        public_634cd32 : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_634cd45
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x28], ebx
        public_634cd45 : nop
        cmp esi, ebx
        mov edi, dword ptr ds : [esi]
        je public_634cd5b
        mov ecx, esi
        call public_634cd00
        push esi
        call public_6391d5a
        add esp, 4
        public_634cd5b : nop
        cmp edi, ebx
        mov esi, edi
        jne public_634cd32
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x13C], ebx
        pop ebp
        pop ebx
        ret 
        public_634cd6c : nop
        pop esi
        mov dword ptr ss : [ebp+0x13C], ebx
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x634cd20)
    }
}

#undef public_634cd32
#undef public_634cd45
#undef public_634cd5b
#undef public_634cd6c
