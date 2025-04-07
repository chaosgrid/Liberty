#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22500);

PROC_DECLARE(0x6f347a0, internal_6f347a0, public_6f347a0);
extern "C" NAKED register_t __cdecl internal_6f347a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push eax
        call public_6f22500
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f347a0)
    }
}
