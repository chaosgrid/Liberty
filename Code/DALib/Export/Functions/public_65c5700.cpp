#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5700);

#define public_65c5710 _public_65c5710

PROC_DECLARE(0x65c5700, internal_65c5700, public_65c5700);
extern "C" NAKED register_t __cdecl internal_65c5700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_65c5710
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_65c5710 : nop
        ret 
        UNREACHABLE_TRAP(0x65c5700)
    }
}

#undef public_65c5710
