#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58cbb0);

#define public_58cbd3 _public_58cbd3

PROC_DECLARE(0x58cbb0, internal_58cbb0, public_58cbb0);
extern "C" NAKED register_t __cdecl internal_58cbb0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        je public_58cbd3
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        cmp edx, eax
        jae public_58cbd3
        mov dword ptr ds : [ecx+0x558], edx
        public_58cbd3 : nop
        ret 4
        UNREACHABLE_TRAP(0x58cbb0)
    }
}

#undef public_58cbd3
