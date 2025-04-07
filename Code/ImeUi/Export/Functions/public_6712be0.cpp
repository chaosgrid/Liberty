#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712be0);

PROC_DECLARE(0x6712be0, internal_6712be0, public_6712be0);
extern "C" NAKED register_t __cdecl internal_6712be0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x28]
        UNREACHABLE_TRAP(0x6712be0)
    }
}
