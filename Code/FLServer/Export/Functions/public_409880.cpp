#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409880);

PROC_DECLARE(0x409880, internal_409880, public_409880);
extern "C" NAKED register_t __cdecl internal_409880()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0xE
        push esi
        call edi
        push eax
        push eax
        push 0xB1
        push esi
        call edi
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x461
        push esi
        mov dword ptr ss : [esp+0x18], 2
        mov dword ptr ss : [esp+0x1C], 0x4B0
        call edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x409880)
    }
}
