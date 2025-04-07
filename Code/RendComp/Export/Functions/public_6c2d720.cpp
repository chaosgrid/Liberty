#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d720);

#define public_6c2d737 _public_6c2d737

PROC_DECLARE(0x6c2d720, internal_6c2d720, public_6c2d720);
extern "C" NAKED register_t __cdecl internal_6c2d720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6c2d737
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6c2d737
        xor eax, eax
        ret 4
        public_6c2d737 : nop
        mov eax, 0xFFFFFFFE
        ret 4
        UNREACHABLE_TRAP(0x6c2d720)
    }
}

#undef public_6c2d737
