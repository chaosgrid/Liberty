#include "Server-PCH.h"

PROC_DECLARE(0x6d21e40, internal_6d21e40, public_6d21e40);
extern "C" NAKED register_t __cdecl internal_6d21e40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        cmp edx, ecx
        sete al
        ret 8
        UNREACHABLE_TRAP(0x6d21e40)
    }
}
