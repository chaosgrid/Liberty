#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57150);

PROC_DECLARE(0x6f57150, internal_6f57150, public_6f57150);
extern "C" NAKED register_t __cdecl internal_6f57150()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        add ecx, 0x138
        push ecx
        call dword ptr ds : [public_6fb3514]
        mov eax, dword ptr ss : [esp+8]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f57150)
    }
}
