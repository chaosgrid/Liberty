#include "THORN-PCH.h"

PROC_DECLARE(0x6f2f810, internal_6f2f810, public_6f2f810);
extern "C" NAKED register_t __cdecl internal_6f2f810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cdq 
        idiv dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ecx]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        fidiv dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [esi+0xC]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f2f810)
    }
}
