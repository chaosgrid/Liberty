#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_594590);
CLANG_FORWARD_PROC_SYMBOL(public_59da60);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_591dcb _public_591dcb

PROC_DECLARE(0x591cd0, internal_591cd0, public_591cd0);
extern "C" NAKED register_t __cdecl internal_591cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x48
        push esi
        mov esi, ecx
        push eax
        push esi
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [esi+0x84]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test eax, eax
        mov byte ptr ds : [esi+0x6C], cl
        je public_591dcb
        push edi
        call public_59da60
        push 0
        mov edi, eax
        mov edx, dword ptr ds : [edi]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call dword ptr ds : [edx+0x38]
        fild dword ptr ds : [public_610854]
        mov ecx, dword ptr ds : [edi]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea edx, ss:[esp+0x1C]
        fild dword ptr ds : [public_610850]
        fstp dword ptr ss : [esp]
        push edx
        push edi
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x84]
        push esi
        lea eax, ss:[esp+0x24]
        fst dword ptr ss : [esp+0x24]
        push eax
        fstp dword ptr ss : [esp+0x38]
        push ecx
        fld dword ptr ds : [public_6155ec]
        mov dword ptr ss : [esp+0x38], 0
        fadd dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x48], 0
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        call public_594590
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+0x88], eax
        pop edi
        je public_591dcb
        mov al, 1
        pop esi
        add esp, 0x48
        ret 8
        public_591dcb : nop
        xor al, al
        pop esi
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x591cd0)
    }
}

#undef public_591dcb
