#include "Common-PCH.h"

PROC_DECLARE(0x6329810, internal_6329810, public_6329810);
extern "C" NAKED register_t __cdecl internal_6329810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0
        xor al, al
        ret 0x14
        UNREACHABLE_TRAP(0x6329810)
    }
}
