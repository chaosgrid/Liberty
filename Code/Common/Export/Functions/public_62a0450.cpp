#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285630);
CLANG_FORWARD_PROC_SYMBOL(public_628a050);
CLANG_FORWARD_PROC_SYMBOL(public_628a410);
CLANG_FORWARD_PROC_SYMBOL(public_62a0450);
CLANG_FORWARD_PROC_SYMBOL(public_62a0c10);
CLANG_FORWARD_PROC_SYMBOL(public_62aa680);

#define public_62a057d _public_62a057d
#define public_62a0613 _public_62a0613
#define public_62a062f _public_62a062f
#define public_62a064f _public_62a064f
#define public_62a065e _public_62a065e
#define public_62a0677 _public_62a0677
#define public_62a067e _public_62a067e

PROC_DECLARE(0x62a0450, internal_62a0450, public_62a0450);
extern "C" NAKED register_t __cdecl internal_62a0450()
{
    __asm
    {
        sub esp, 0x5C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        je public_62a067e
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_62a067e
        add eax, 0x40
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call public_62a0c10
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xD4]
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, 2
        jne public_62a064f
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        call public_62aa680
        mov eax, dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [public_63eb360]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_63fc0e8]
        fmul st, st(1)
        add esp, 0x10
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        fld dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_63fc0ec]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x3C], ecx
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x40], edx
        fmul st, st(1)
        mov byte ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x5C], 0
        fld dword ptr ss : [esp+0xC]
        mov byte ptr ss : [esp+0x44], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x4C], ecx
        mov cl, byte ptr ds : [eax+0x24]
        fstp st(0)
        test cl, cl
        je public_62a057d
        add eax, 0x28
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x54], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x58], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x5C], edx
        mov byte ptr ss : [esp+0x50], 1
        public_62a057d : nop
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        push 0x18
        lea eax, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [ecx+0xB0]
        push eax
        push edx
        call dword ptr ds : [public_639927c]
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        call public_628a050
        add esp, 0x14
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_62a0677
        mov edx, dword ptr ds : [esi+4]
        add edx, 0x4C
        push edx
        push eax
        mov ecx, esi
        call public_62a0c10
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62a0613
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call public_6285630
        add esp, 0xC
        public_62a0613 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        je public_62a062f
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call public_6285630
        add esp, 0xC
        public_62a062f : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push esi
        push 7
        call dword ptr ds : [eax+0xC8]
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], 3
        pop esi
        add esp, 0x5C
        ret 
        public_62a064f : nop
        cmp eax, 3
        je public_62a065e
        cmp eax, 4
        je public_62a065e
        cmp eax, 5
        jne public_62a0677
        public_62a065e : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push esi
        push 8
        call dword ptr ds : [edx+0xC8]
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_628a410
        add esp, 4
        public_62a0677 : nop
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        public_62a067e : nop
        mov dword ptr ds : [esi+0x14], 3
        pop esi
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x62a0450)
    }
}

#undef public_62a057d
#undef public_62a0613
#undef public_62a062f
#undef public_62a064f
#undef public_62a065e
#undef public_62a0677
#undef public_62a067e
