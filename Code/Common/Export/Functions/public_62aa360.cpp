#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_629c950);
CLANG_FORWARD_PROC_SYMBOL(public_629cb50);
CLANG_FORWARD_PROC_SYMBOL(public_62ad4f0);

#define public_62aa3a4 _public_62aa3a4
#define public_62aa3c4 _public_62aa3c4

PROC_DECLARE(0x62aa360, internal_62aa360, public_62aa360);
extern "C" NAKED register_t __cdecl internal_62aa360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, esi
        call public_62ad4f0
        push 0x100
        lea ecx, ss:[esp+8]
        call public_629b990
        lea edx, ss:[esp+4]
        add esi, 0xE4
        push edx
        mov ecx, esi
        call public_629b440
        push eax
        call public_629cb50
        add esp, 4
        test eax, eax
        je public_62aa3c4
        public_62aa3a4 : nop
        mov ecx, eax
        call public_629c950
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call public_629b440
        push eax
        call public_629cb50
        add esp, 4
        test eax, eax
        jne public_62aa3a4
        public_62aa3c4 : nop
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62aa360)
    }
}

#undef public_62aa3a4
#undef public_62aa3c4
