#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ba70);

PROC_DECLARE(0x6d1ba70, internal_6d1ba70, public_6d1ba70);
extern "C" NAKED register_t __cdecl internal_6d1ba70()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6d68ab0
        jmp dword ptr ds : [public_6d64afc]
        UNREACHABLE_TRAP(0x6d1ba70)
    }
}
