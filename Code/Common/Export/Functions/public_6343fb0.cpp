#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);

PROC_DECLARE(0x6343fb0, internal_6343fb0, public_6343fb0);
extern "C" NAKED register_t __cdecl internal_6343fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_639932c]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6343fb0)
    }
}
