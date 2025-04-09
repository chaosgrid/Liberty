#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_59a51d _public_59a51d

PROC_DECLARE(0x59a490, internal_59a490, public_59a490);
extern "C" NAKED register_t __cdecl internal_59a490()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x8AC], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        push esi
        mov dword ptr ds : [esi+0x8A4], 0
        mov dword ptr ds : [esi+0x8A8], 0x10
        mov dword ptr ds : [esi+0x88C], 0
        mov byte ptr ds : [esi+0x8A0], 1
        mov byte ptr ds : [esi+0x8A1], 0
        mov byte ptr ds : [esi+0x8A2], 1
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        mov eax, dword ptr ss : [esp+0x18]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test eax, eax
        mov byte ptr ds : [esi+0x6C], cl
        je public_59a51d
        fld dword ptr ds : [eax]
        fst dword ptr ds : [esi+0x8B0]
        fstp dword ptr ds : [esi+0x898]
        fld dword ptr ds : [eax+4]
        fst dword ptr ds : [esi+0x8B4]
        fstp dword ptr ds : [esi+0x89C]
        public_59a51d : nop
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x59a490)
    }
}

#undef public_59a51d
