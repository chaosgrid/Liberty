#include "ImeUi-PCH.h"

PROC_DECLARE(0x6712540, internal_6712540, public_6712540);
extern "C" NAKED register_t __cdecl internal_6712540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x50], eax
        mov dword ptr ds : [ecx+0x54], edx
        ret 8
        UNREACHABLE_TRAP(0x6712540)
    }
}
