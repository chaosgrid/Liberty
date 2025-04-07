#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63217c0);

#define public_62b1be0 _public_62b1be0

PROC_DECLARE(0x62b1b70, internal_62b1b70, public_62b1b70);
extern "C" NAKED register_t __cdecl internal_62b1b70()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b1be0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b1be0
        mov edx, dword ptr ds : [esi+0x104]
        mov eax, dword ptr ds : [eax+0x104]
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+8], eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_63217c0
        add esp, 0xC
        test eax, eax
        jne public_62b1be0
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b1be0
        mov al, 1
        pop esi
        add esp, 8
        ret 4
        public_62b1be0 : nop
        xor al, al
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62b1b70)
    }
}

#undef public_62b1be0
