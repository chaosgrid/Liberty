#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315f90);
CLANG_FORWARD_PROC_SYMBOL(public_6318900);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63967d5);

#define public_63160c9 _public_63160c9
#define public_63160ea _public_63160ea

PROC_DECLARE(0x6315f90, internal_6315f90, public_6315f90);
extern "C" NAKED register_t __cdecl internal_6315f90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63967d5 @0x6315f92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63967d5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        call public_6333e40
        mov al, byte ptr ss : [esp+0x80]
        push 0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call dword ptr ds : [public_63991b8]
        mov cl, byte ptr ss : [esp+0x80]
        mov byte ptr ss : [esp+0x28], cl
        push 0
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x7C], 0
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x48], ecx
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x7C], 1
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [public_6399154]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x7C], 2
        call dword ptr ds : [public_6399154]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x6C], ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x80], 3
        call public_6318900
        push 1
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x7C], 1
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        pop esi
        je public_63160ea
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_63160c9
        cmp cl, 0xFF
        je public_63160c9
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp]
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 4
        public_63160c9 : nop
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+4]
        add esp, 4
        lea eax, ds:[edx+0x10]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 4
        public_63160ea : nop
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+0x6C]
        add eax, 0x10
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x6315f90)
    }
}

#undef public_63160c9
#undef public_63160ea
