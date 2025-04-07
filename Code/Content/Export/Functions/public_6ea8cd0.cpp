#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cd0);

#define public_6ea8ce8 _public_6ea8ce8
#define public_6ea8cf9 _public_6ea8cf9
#define public_6ea8d29 _public_6ea8d29
#define public_6ea8d36 _public_6ea8d36

PROC_DECLARE(0x6ea8cd0, internal_6ea8cd0, public_6ea8cd0);
extern "C" NAKED register_t __cdecl internal_6ea8cd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp eax, 2
        jne public_6ea8ce8
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6ea8ce8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        jmp public_6ea8cf9
        public_6ea8ce8 : nop
        cmp eax, 1
        jne public_6ea8cf9
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6ea8cf9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6ea8cf9 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, 2
        mov dword ptr ds : [esi+4], ecx
        jne public_6ea8d29
        test ecx, ecx
        je public_6ea8d29
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov eax, esi
        pop esi
        ret 4
        public_6ea8d29 : nop
        cmp eax, 1
        jne public_6ea8d36
        test ecx, ecx
        je public_6ea8d36
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6ea8d36 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea8cd0)
    }
}

#undef public_6ea8ce8
#undef public_6ea8cf9
#undef public_6ea8d29
#undef public_6ea8d36
