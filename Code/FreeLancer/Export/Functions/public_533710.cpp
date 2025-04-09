#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539820);

#define public_533733 _public_533733
#define public_533735 _public_533735
#define public_53375a _public_53375a

PROC_DECLARE(0x533710, internal_533710, public_533710);
extern "C" NAKED register_t __cdecl internal_533710()
{
    __asm
    {
        test ecx, ecx
        je public_533733
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_533733
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533733
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_533735
        public_533733 : nop
        xor eax, eax
        public_533735 : nop
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_53375a
        mov eax, dword ptr ss : [esp+4]
        mov word ptr ds : [eax], 1
        mov word ptr ds : [eax+2], 0xFFFF
        ret 0xC
        public_53375a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push edx
        push esi
        call public_539820
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x533710)
    }
}

#undef public_533733
#undef public_533735
#undef public_53375a
