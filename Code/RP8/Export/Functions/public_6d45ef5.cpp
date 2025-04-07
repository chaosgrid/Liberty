#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45ef5);

PROC_DECLARE(0x6d45ef5, internal_6d45ef5, public_6d45ef5);
extern "C" NAKED register_t __cdecl internal_6d45ef5()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+ecx-1]
        cdq 
        idiv ecx
        ret 
        UNREACHABLE_TRAP(0x6d45ef5)
    }
}
