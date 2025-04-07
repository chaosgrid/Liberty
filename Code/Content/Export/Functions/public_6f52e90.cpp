#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52e90);

#define public_6f52ea2 _public_6f52ea2
#define public_6f52eae _public_6f52eae
#define public_6f52eb5 _public_6f52eb5
#define public_6f52eb7 _public_6f52eb7

PROC_DECLARE(0x6f52e90, internal_6f52e90, public_6f52e90);
extern "C" NAKED register_t __cdecl internal_6f52e90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push esi
        push edi
        je public_6f52eb5
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        public_6f52ea2 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f52eae
        mov edi, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [edx+4]
        je public_6f52eb7
        public_6f52eae : nop
        add eax, 8
        cmp eax, ecx
        jne public_6f52ea2
        public_6f52eb5 : nop
        mov eax, ecx
        public_6f52eb7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f52e90)
    }
}

#undef public_6f52ea2
#undef public_6f52eae
#undef public_6f52eb5
#undef public_6f52eb7
