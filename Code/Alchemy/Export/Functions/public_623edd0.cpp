#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623edd0);
CLANG_FORWARD_PROC_SYMBOL(public_623edf0);
CLANG_FORWARD_PROC_SYMBOL(public_623ee10);

PROC_DECLARE(0x623edd0, internal_623edd0, public_623edd0);
extern "C" NAKED register_t __cdecl internal_623edd0()
{
    __asm
    {
        push ecx
        push esi
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+8], esp
        push eax
        mov esi, ecx
        call public_623edf0
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call public_623ee10
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x623edd0)
    }
}
