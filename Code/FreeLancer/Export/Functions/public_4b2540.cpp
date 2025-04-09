#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4abfb0);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);
CLANG_FORWARD_PROC_SYMBOL(public_4b1c00);
CLANG_FORWARD_PROC_SYMBOL(public_4b2540);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);

#define public_4b2588 _public_4b2588
#define public_4b25e1 _public_4b25e1
#define public_4b25ed _public_4b25ed
#define public_4b2693 _public_4b2693
#define public_4b26eb _public_4b26eb

PROC_DECLARE(0x4b2540, internal_4b2540, public_4b2540);
extern "C" NAKED register_t __cdecl internal_4b2540()
{
    __asm
    {
        sub esp, 0x180
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x849]
        test al, al
        jne public_4b26eb
        mov al, byte ptr ss : [esp+0x188]
        test al, al
        mov byte ptr ds : [esi+0x84A], al
        je public_4b2693
        mov eax, dword ptr ds : [esi+0x330]
        cmp dword ptr ds : [esi+0x8B8], eax
        jne public_4b2588
        mov cl, byte ptr ds : [esi+0x8BC]
        cmp cl, byte ptr ds : [esi+0x334]
        je public_4b25ed
        public_4b2588 : nop
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x334]
        mov ecx, esi
        push edx
        push eax
        call public_4b1c00
        test al, al
        je public_4b25e1
        push 0x40
        lea eax, ss:[esp+0x88]
        push eax
        mov byte ptr ds : [esi+0x84D], 1
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x779
        push ecx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x4EC]
        add esp, 0x10
        lea edx, ss:[esp+0x84]
        push edx
        call public_58a530
        mov eax, dword ptr ds : [esi+0x7F0]
        and byte ptr ds : [eax+0x6C], 0xFC
        jmp public_4b25ed
        public_4b25e1 : nop
        push 0x536
        mov ecx, esi
        call public_4b0920
        public_4b25ed : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0x108]
        push eax
        push 0x778
        push ecx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x4E8]
        add esp, 0x10
        lea edx, ss:[esp+0x104]
        push edx
        call public_58a530
        mov ecx, esi
        call public_4abfb0
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+8]
        push eax
        push 0x4DC
        push ecx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x4FC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+8]
        push ecx
        push 0x4DD
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x500]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+8]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        pop esi
        add esp, 0x180
        ret 4
        public_4b2693 : nop
        mov ecx, dword ptr ds : [esi+0x4E8]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x4EC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4F0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4FC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x500]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4F4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4F8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x4E4]
        and byte ptr ds : [ecx+0x6C], al
        push 0
        mov ecx, esi
        call public_4abdf0
        public_4b26eb : nop
        pop esi
        add esp, 0x180
        ret 4
        UNREACHABLE_TRAP(0x4b2540)
    }
}

#undef public_4b2588
#undef public_4b25e1
#undef public_4b25ed
#undef public_4b2693
#undef public_4b26eb
