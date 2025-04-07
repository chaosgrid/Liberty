#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0650);

#define public_57d1de _public_57d1de

PROC_DECLARE(0x57d1d0, internal_57d1d0, public_57d1d0);
extern "C" NAKED register_t __cdecl internal_57d1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_57d1de
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0x4C]
        public_57d1de : nop
        jmp public_5a0650
        UNREACHABLE_TRAP(0x57d1d0)
    }
}

#undef public_57d1de
