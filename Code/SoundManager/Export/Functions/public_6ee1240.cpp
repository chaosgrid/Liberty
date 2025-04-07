#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1240);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8960);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee1292 _public_6ee1292

PROC_DECLARE(0x6ee1240, internal_6ee1240, public_6ee1240);
extern "C" NAKED register_t __cdecl internal_6ee1240()
{
    __asm
    {
        mov eax, 0x2090
        call public_6ee8da0
        mov eax, dword ptr ss : [esp+0x2098]
        push esi
        mov esi, dword ptr ss : [esp+0x2098]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ss : [esp+0x20A0]
        push edx
        push esi
        mov dword ptr ss : [esp+0xC], offset public_6ee9210
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        call public_6ee8960
        add esp, 8
        test al, al
        je public_6ee1292
        xor eax, eax
        pop esi
        add esp, 0x2090
        ret 0xC
        public_6ee1292 : nop
        mov eax, dword ptr ds : [esi]
        push 0x80
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call dword ptr ds : [eax+0x84]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x98]
/*FIXUP push offset public_6eea0b8 @0x6ee12b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea0b8
        push eax
        call public_6ee71c0
        push eax
        push 0x17D
/*FIXUP push offset public_6eea070 @0x6ee12c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee12cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x20
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x2090
        ret 0xC
        UNREACHABLE_TRAP(0x6ee1240)
    }
}

#undef public_6ee1292
