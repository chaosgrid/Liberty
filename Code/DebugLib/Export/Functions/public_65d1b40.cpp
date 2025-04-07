#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2170);

#define public_65d1b51 _public_65d1b51

PROC_DECLARE(0x65d1b40, internal_65d1b40, public_65d1b40);
extern "C" NAKED register_t __cdecl internal_65d1b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_65d1b51
        or eax, 0xFFFFFFFF
        ret 8
        public_65d1b51 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_65d2170
        neg al
        sbb eax, eax
        neg eax
        dec eax
        ret 8
        UNREACHABLE_TRAP(0x65d1b40)
    }
}

#undef public_65d1b51
