#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f530d0);

PROC_DECLARE(0x6f530d0, internal_6f530d0, public_6f530d0);
extern "C" NAKED register_t __cdecl internal_6f530d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax+8]
        sub esi, edx
        add esi, 2
        push 0
        push esi
        call public_6f52eb0
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        lea ecx, ds:[eax+esi-2]
        push ecx
        push edx
        push edi
        call public_6f52dd0
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f530d0)
    }
}
