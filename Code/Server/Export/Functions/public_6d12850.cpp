#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12850);

PROC_DECLARE(0x6d12850, internal_6d12850, public_6d12850);
extern "C" NAKED register_t __cdecl internal_6d12850()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        jmp dword ptr ds : [public_6d64770]
        UNREACHABLE_TRAP(0x6d12850)
    }
}
