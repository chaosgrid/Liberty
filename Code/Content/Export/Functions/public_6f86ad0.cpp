#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86ad0);

PROC_DECLARE(0x6f86ad0, internal_6f86ad0, public_6f86ad0);
extern "C" NAKED register_t __cdecl internal_6f86ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        add ecx, 0x20
        jmp dword ptr ds : [eax+8]
        UNREACHABLE_TRAP(0x6f86ad0)
    }
}
