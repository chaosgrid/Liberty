#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_629c980);
CLANG_FORWARD_PROC_SYMBOL(public_629cb50);
CLANG_FORWARD_PROC_SYMBOL(public_62b5f60);

#define public_62aa324 _public_62aa324
#define public_62aa344 _public_62aa344

PROC_DECLARE(0x62aa2f0, internal_62aa2f0, public_62aa2f0);
extern "C" NAKED register_t __cdecl internal_62aa2f0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        push 0x100
        lea ecx, ss:[esp+0xC]
        call public_629b990
        lea eax, ss:[esp+8]
        lea esi, ds:[edi+0xE4]
        push eax
        mov ecx, esi
        call public_629b440
        push eax
        call public_629cb50
        add esp, 4
        test eax, eax
        je public_62aa344
        public_62aa324 : nop
        mov ecx, eax
        call public_629c980
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call public_629b440
        push eax
        call public_629cb50
        add esp, 4
        test eax, eax
        jne public_62aa324
        public_62aa344 : nop
        mov ecx, edi
        call public_62b5f60
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62aa2f0)
    }
}

#undef public_62aa324
#undef public_62aa344
