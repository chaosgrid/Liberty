#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402310);
CLANG_FORWARD_PROC_SYMBOL(public_406dc0);
CLANG_FORWARD_PROC_SYMBOL(public_40d830);
CLANG_FORWARD_PROC_SYMBOL(public_40daa0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b84f0);

#define public_406e19 _public_406e19
#define public_406e68 _public_406e68
#define public_406e6f _public_406e6f
#define public_406ea5 _public_406ea5
#define public_406ede _public_406ede
#define public_406fa6 _public_406fa6
#define public_406fdf _public_406fdf
#define public_406fe1 _public_406fe1
#define public_406ff6 _public_406ff6

PROC_DECLARE(0x406dc0, internal_406dc0, public_406dc0);
extern "C" NAKED register_t __cdecl internal_406dc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b84f0 @0x406dc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b84f0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        mov ebp, ecx
/*FIXUP push offset public_5c77a0 @0x406de2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c77a0
        mov ecx, esi
        mov bl, 1
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_406e6f
        push 2
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_406e19
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6d00]
        mov dword ptr ss : [esp+0x10], eax
        public_406e19 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        mov edi, dword ptr ds : [public_5c69a0]
        lea ecx, ss:[esp+0x54]
        mov esi, eax
        call edi
        push 1
        push esi
        call dword ptr ds : [public_5c6028]
        add esp, 8
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x54], eax
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x54]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        lea ecx, ss:[ebp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_40d830
        public_406e68 : nop
        mov al, bl
        jmp public_406fe1
        public_406e6f : nop
        lea ecx, ss:[ebp+4]
        push ecx
        push esi
        call public_402310
        add esp, 8
        test al, al
        jne public_406e68
/*FIXUP push offset public_5c7790 @0x406e80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7790
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_406ea5
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+8]
        mov al, bl
        jmp public_406fe1
/*FIXUP public_406ea5 : nop
        push offset public_5c7780 @0x406ea5*/
  FIXUP public_406ea5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7780
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_406ede
        call dword ptr ds : [public_5c6698]
        lea ecx, ss:[esp+0x54]
        mov esi, eax
        call dword ptr ds : [public_5c69a0]
        push 1
        push esi
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [ebp+0x10], eax
        add esp, 8
        mov al, bl
        jmp public_406fe1
/*FIXUP public_406ede : nop
        push offset public_5c776c @0x406ede*/
  FIXUP public_406ede : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c776c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_406ff6
        xor edi, edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x54]
        mov dl, byte ptr ss : [esp+0x54]
        mov al, byte ptr ss : [esp+0x54]
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], al
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov eax, dword ptr ss : [ebp+0x48]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[ebp+0x40]
        push 1
        push eax
        mov dword ptr ss : [esp+0x58], edi
        call public_40daa0
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x54], 1
        call public_53aaa0
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_4de730
        mov ebp, dword ptr ss : [ebp+0x48]
        mov eax, dword ptr ss : [esp+0x54]
        mov edi, 1
        sub ebp, 0x24
        push edi
        mov ecx, esi
        mov dword ptr ss : [ebp], eax
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_406fdf
        lea ebx, ss:[ebp+4]
        public_406fa6 : nop
        mov eax, edi
        push eax
        mov ecx, esi
        inc edi
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        mov edx, dword ptr ds : [ebx+8]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_537260
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6cf8]
        test al, al
        je public_406fa6
        public_406fdf : nop
        mov al, 1
        public_406fe1 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        public_406ff6 : nop
        xor al, al
        jmp public_406fe1
        UNREACHABLE_TRAP(0x406dc0)
    }
}

#undef public_406e19
#undef public_406e68
#undef public_406e6f
#undef public_406ea5
#undef public_406ede
#undef public_406fa6
#undef public_406fdf
#undef public_406fe1
#undef public_406ff6
