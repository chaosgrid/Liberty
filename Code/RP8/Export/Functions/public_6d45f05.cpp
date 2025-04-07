#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f05);

PROC_DECLARE(0x6d45f05, internal_6d45f05, public_6d45f05);
extern "C" NAKED register_t __cdecl internal_6d45f05()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        lea ecx, ds:[eax+esi-1]
        mov eax, ecx
        cdq 
        idiv esi
        mov eax, ecx
        pop esi
        sub eax, edx
        ret 
        UNREACHABLE_TRAP(0x6d45f05)
    }
}
