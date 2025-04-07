#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

PROC_DECLARE(0x417fe0, internal_417fe0, public_417fe0);
extern "C" NAKED register_t __cdecl internal_417fe0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        lea eax, ds:[esi+0x60]
        push eax
        push 0x417
        push edi
        call public_418ab0
        add esi, 0xA0
        push esi
        push 0x418
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x417fe0)
    }
}
