#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62ecc60);

#define public_62ecc7d _public_62ecc7d
#define public_62ecc7f _public_62ecc7f
#define public_62ecccc _public_62ecccc

PROC_DECLARE(0x62ecc60, internal_62ecc60, public_62ecc60);
extern "C" NAKED register_t __cdecl internal_62ecc60()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ecc7d
        lea ecx, ds:[eax-8]
        jmp public_62ecc7f
        public_62ecc7d : nop
        xor ecx, ecx
        public_62ecc7f : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62ecccc
        push 0
        push 1
        push eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        call public_62d4520
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62ecccc
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push 2
        push edx
        call public_62d4520
        public_62ecccc : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ecc60)
    }
}

#undef public_62ecc7d
#undef public_62ecc7f
#undef public_62ecccc
