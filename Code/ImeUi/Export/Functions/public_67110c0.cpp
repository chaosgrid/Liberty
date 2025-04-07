#include "ImeUi-PCH.h"

PROC_DECLARE(0x67110c0, internal_67110c0, public_67110c0);
extern "C" NAKED register_t __cdecl internal_67110c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0
        ret 0xC
        UNREACHABLE_TRAP(0x67110c0)
    }
}
