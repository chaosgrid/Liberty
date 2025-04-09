#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad350);
CLANG_FORWARD_PROC_SYMBOL(public_5ad990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5784);

#define public_5ad46e _public_5ad46e
#define public_5ad492 _public_5ad492

PROC_DECLARE(0x5ad350, internal_5ad350, public_5ad350);
extern "C" NAKED register_t __cdecl internal_5ad350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5784 @0x5ad352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5784
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        mov al, byte ptr ss : [esp+0x64]
        push esi
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x10], al
        call dword ptr ds : [public_5c6fb8]
        mov cl, byte ptr ss : [esp+0x68]
        mov byte ptr ss : [esp+0x1C], cl
        push 0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x64], 0
        call dword ptr ds : [public_5c6fb8]
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x34]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x68], ecx
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x64], 1
        mov dword ptr ss : [esp+0x34], eax
        call dword ptr ds : [public_5c7048]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x64], 2
        call dword ptr ds : [public_5c7048]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x54], ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x68], 3
        call public_5ad990
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x68], ecx
        push 1
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x64], 4
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x64], 1
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x64], 5
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        pop esi
        je public_5ad492
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5ad46e
        cmp cl, 0xFF
        je public_5ad46e
        mov edx, dword ptr ss : [esp]
        dec cl
        mov byte ptr ds : [eax-1], cl
        lea eax, ds:[edx+0x10]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        public_5ad46e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+4]
        add esp, 4
        add eax, 0x10
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        public_5ad492 : nop
        mov ecx, dword ptr ss : [esp]
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x5ad350)
    }
}

#undef public_5ad46e
#undef public_5ad492
