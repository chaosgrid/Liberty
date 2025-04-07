#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46f15);

PROC_DECLARE(0x6d46f15, internal_6d46f15, public_6d46f15);
extern "C" NAKED register_t __cdecl internal_6d46f15()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push 1
        push esi
        call dword ptr ds : [eax+0x24]
        mov al, byte ptr ds : [esi+0xC]
        neg al
        pop ecx
        pop ecx
        sbb eax, eax
        and eax, 0x64
        add eax, 0x64
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d46f15)
    }
}
