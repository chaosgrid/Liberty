#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2ecc0);

#define public_6c2ecd4 _public_6c2ecd4
#define public_6c2ecdf _public_6c2ecdf
#define public_6c2ece2 _public_6c2ece2
#define public_6c2ece7 _public_6c2ece7

PROC_DECLARE(0x6c2ecc0, internal_6c2ecc0, public_6c2ecc0);
extern "C" NAKED register_t __cdecl internal_6c2ecc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6c2ece7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6c2ecd4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_6c2ecdf
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6c2ece2
        public_6c2ecdf : nop
        mov edx, dword ptr ds : [edx+8]
        public_6c2ece2 : nop
        cmp edx, ecx
        jne public_6c2ecd4
        pop esi
        public_6c2ece7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c2ecc0)
    }
}

#undef public_6c2ecd4
#undef public_6c2ecdf
#undef public_6c2ece2
#undef public_6c2ece7
