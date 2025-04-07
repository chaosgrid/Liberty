#include "Common-PCH.h"

PROC_DECLARE(0x6344ab0, internal_6344ab0, public_6344ab0);
extern "C" NAKED register_t __cdecl internal_6344ab0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        xor eax, eax
        cmp ecx, edx
        sete al
        ret 8
        UNREACHABLE_TRAP(0x6344ab0)
    }
}
