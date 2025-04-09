#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1130);

#define public_583116 _public_583116

PROC_DECLARE(0x5830a0, internal_5830a0, public_5830a0);
extern "C" NAKED register_t __cdecl internal_5830a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        lea eax, ds:[esi+0x404]
        push eax
        lea ecx, ds:[esi+0x434]
        call public_5a1130
        push edi
        lea ecx, ds:[esi+0x4A8]
        push ecx
        lea ecx, ds:[esi+0x4D8]
        mov byte ptr ds : [esi+0x679], al
        call public_5a1130
        mov byte ptr ds : [esi+0x67A], al
        mov al, byte ptr ds : [esi+0x66D]
        test al, al
        mov byte ptr ds : [esi+0x678], 0
        je public_583116
        push edi
        lea edx, ds:[esi+0x5B8]
        push edx
        lea ecx, ds:[esi+0x5E8]
        call public_5a1130
        test al, al
        mov byte ptr ds : [esi+0x678], al
        je public_583116
        mov byte ptr ds : [esi+0x679], 0
        mov byte ptr ds : [esi+0x67A], 0
        public_583116 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5830a0)
    }
}

#undef public_583116
