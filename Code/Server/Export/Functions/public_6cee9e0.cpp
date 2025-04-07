#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);

PROC_DECLARE(0x6cee9e0, internal_6cee9e0, public_6cee9e0);
extern "C" NAKED register_t __cdecl internal_6cee9e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x160]
        neg al
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6cee9e0)
    }
}
