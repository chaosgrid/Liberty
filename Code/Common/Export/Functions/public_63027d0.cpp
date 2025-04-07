#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63027d0);
CLANG_FORWARD_PROC_SYMBOL(public_63027f0);

PROC_DECLARE(0x63027d0, internal_63027d0, public_63027d0);
extern "C" NAKED register_t __cdecl internal_63027d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_63027f0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63027d0)
    }
}
