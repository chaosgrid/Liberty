#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f55010);
CLANG_FORWARD_PROC_SYMBOL(public_6f551f0);

#define public_6f55220 _public_6f55220

PROC_DECLARE(0x6f551f0, internal_6f551f0, public_6f551f0);
extern "C" NAKED register_t __cdecl internal_6f551f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x108
        test eax, eax
        je public_6f55220
        mov ecx, dword ptr ss : [esp+0x10C]
        push 8
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call public_6f55010
        fld qword ptr ss : [esp+0xC]
        add esp, 0xC
        add esp, 0x108
        ret 
        public_6f55220 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x110]
        push edi
        push esi
        call public_6f54f50
        mov edi, eax
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        call public_6f55010
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov byte ptr ss : [esp+edi+0x28], 0
        call public_6f54dd0
        add esp, 0x18
        pop edi
        pop esi
        add esp, 0x108
        ret 
        UNREACHABLE_TRAP(0x6f551f0)
    }
}

#undef public_6f55220
