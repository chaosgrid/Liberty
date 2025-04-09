#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_4252d0);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);
CLANG_FORWARD_PROC_SYMBOL(public_52e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_543380);
CLANG_FORWARD_PROC_SYMBOL(public_547550);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0bf5);

#define public_53b27a _public_53b27a
#define public_53b280 _public_53b280
#define public_53b2c5 _public_53b2c5
#define public_53b2d0 _public_53b2d0
#define public_53b2ec _public_53b2ec
#define public_53b369 _public_53b369
#define public_53b389 _public_53b389
#define public_53b3d5 _public_53b3d5
#define public_53b3d9 _public_53b3d9
#define public_53b4a7 _public_53b4a7
#define public_53b580 _public_53b580
#define public_53b594 _public_53b594
#define public_53b5d0 _public_53b5d0
#define public_53b5e8 _public_53b5e8
#define public_53b610 _public_53b610
#define public_53b63b _public_53b63b
#define public_53b6b5 _public_53b6b5
#define public_53b6d4 _public_53b6d4
#define public_53b6d6 _public_53b6d6
#define public_53b819 _public_53b819
#define public_53b83b _public_53b83b
#define public_53b840 _public_53b840
#define public_53b848 _public_53b848

PROC_DECLARE(0x53b220, internal_53b220, public_53b220);
extern "C" NAKED register_t __cdecl internal_53b220()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0bf5 @0x53b228*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0bf5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x188
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_5c6a28]
        test al, al
        je public_53b848
        push 0x190
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1A0], ebx
        je public_53b27a
        mov ecx, eax
        call public_543380
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jmp public_53b280
        public_53b27a : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, ebx
        public_53b280 : nop
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ebp, dword ptr ss : [esp+0x1AC]
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1A0], 1
        je public_53b2c5
        push eax
        call dword ptr ds : [public_5c6200]
        add esp, 4
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6a24]
        public_53b2c5 : nop
        mov esi, dword ptr ss : [ebp+0x74]
        cmp esi, dword ptr ss : [ebp+0x78]
        je public_53b2ec
        lea ecx, ds:[ecx]
        public_53b2d0 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push esi
        push 1
        push ecx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6a20]
        mov eax, dword ptr ss : [ebp+0x78]
        add esi, 0x20
        cmp esi, eax
        jne public_53b2d0
        public_53b2ec : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_53b389
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[ebp+4]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x16C]
        test al, al
        jne public_53b369
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0xFF
/*FIXUP push offset public_5dec60 @0x53b31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100002
/*FIXUP push offset public_5dec90 @0x53b326*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec90
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0xC]
        add esp, 0x14
        lea ecx, ds:[edi+0xC]
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1A8], 0xFFFFFFFF
        call dword ptr ds : [public_5c6a1c]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        jmp public_53b840
        public_53b369 : nop
        cmp byte ptr ss : [ebp+0xA8], bl
        je public_53b6b5
        mov eax, dword ptr ds : [public_673344]
        push 1
        push eax
        mov ecx, edi
        call public_547550
        jmp public_53b6b5
        public_53b389 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [public_5c61fc]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x168]
        mov ecx, esi
        call dword ptr ds : [public_5c65c8]
        lea eax, ds:[edi+0xC]
        cmp eax, ebx
        je public_53b3d5
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_53b3d5
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        mov dword ptr ss : [esp+0x1C], eax
        je public_53b3d9
        public_53b3d5 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        public_53b3d9 : nop
        lea ecx, ss:[esp+0x70]
        call public_52e0a0
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0xCC], ebx
        mov dword ptr ss : [esp+0xD0], 0xFFFFFFFF
        call public_4cdc10
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x108], ebx
        call dword ptr ds : [public_5c6a38]
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x1A4], 2
        call dword ptr ds : [public_5c6a34]
        mov dword ptr ss : [esp+0x158], ebx
        mov dword ptr ss : [esp+0x15C], ebx
        mov dword ptr ss : [esp+0x160], ebx
        mov byte ptr ss : [esp+0x164], bl
        fild dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [public_613ed0]
        mov edx, dword ptr ss : [ebp+0xAC]
        fstp dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x70], eax
        lea eax, ss:[ebp+0x4C]
        mov dword ptr ss : [esp+0x74], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [public_6789f8]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1A0], 3
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0x84], edx
        jne public_53b4a7
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53b4a7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x58]
        push ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        lea eax, ss:[ebp+0xB8]
        mov edx, dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0x8C]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xB0], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xB4], ecx
        mov dword ptr ss : [esp+0xB8], edx
        lea eax, ss:[ebp+0xC4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xBC], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0xC4], eax
        mov eax, dword ptr ss : [ebp+0x48]
        mov dword ptr ss : [esp+0xC0], edx
        mov edx, dword ptr ss : [ebp+0xB4]
        mov dword ptr ss : [esp+0xD0], ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x108], eax
        lea eax, ss:[ebp+0x14]
        mov dword ptr ss : [esp+0x160], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xD4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xD8], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0xDC], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0xE0], edx
        xor edx, edx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x104], ecx
        jle public_53b594
        lea esi, ss:[esp+0xD4]
        lea ecx, ss:[esp+0xE4]
        sub eax, esi
        lea ebx, ds:[ebx]
        public_53b580 : nop
        mov esi, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ss : [esp+0x104]
        inc edx
        add ecx, 4
        cmp edx, esi
        jl public_53b580
        public_53b594 : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x110]
        call dword ptr ds : [public_5c6a24]
        lea edx, ss:[ebp+0x80]
        lea ecx, ss:[esp+0x11C]
        cmp ecx, edx
        je public_53b610
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [edx]
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_53b5e8
        nop 
        public_53b5d0 : nop
        cmp esi, edx
        je public_53b5e8
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_53b5d0
        public_53b5e8 : nop
        push edi
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c65c0]
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push esi
        push edi
        lea ecx, ss:[esp+0x128]
        call dword ptr ds : [public_5c63b0]
        public_53b610 : nop
        cmp byte ptr ss : [ebp+0xA8], bl
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x15C], ecx
        mov dword ptr ss : [esp+0xCC], edx
        je public_53b63b
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0xC8], eax
        public_53b63b : nop
        mov cl, byte ptr ss : [ebp+0xDC]
        mov esi, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x164], cl
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10C]
        mov ecx, dword ptr ss : [ebp+0xD8]
        lea eax, ss:[ebp+0xC4]
        push eax
        lea eax, ss:[ebp+0x58]
        push eax
        lea eax, ss:[ebp+0xB8]
        push eax
        lea eax, ss:[ebp+0x4C]
        push eax
        push esi
        mov dword ptr ds : [esi+0x1B4], ecx
        call dword ptr ds : [public_5c6a30]
        add esp, 0x14
        lea ecx, ss:[esp+0x11C]
        mov byte ptr ss : [esp+0x1A0], 4
        call dword ptr ds : [public_5c63a8]
        lea ecx, ss:[esp+0x10C]
        mov byte ptr ss : [esp+0x1A0], 1
        call dword ptr ds : [public_5c6a2c]
        mov edi, dword ptr ss : [esp+0x14]
        public_53b6b5 : nop
        lea eax, ds:[edi+0xC]
        cmp eax, ebx
        je public_53b6d4
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ebx
        je public_53b6d4
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_53b6d6
        public_53b6d4 : nop
        xor esi, esi
        public_53b6d6 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6590]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        lea eax, ss:[esp+0x20]
        push 1
        push eax
        call public_4252d0
        mov esi, dword ptr ds : [esi+4]
        push esi
        call public_425480
        mov edx, dword ptr ds : [edi]
        add esp, 0xC
        mov ecx, edi
        call dword ptr ds : [edx+0x170]
        movzx eax, byte ptr ss : [ebp+0xA8]
        mov ecx, dword ptr ds : [public_673344]
        push eax
        push ecx
        mov ecx, edi
        call public_547550
        push ebx
        push edi
        call public_540c30
        add esp, 8
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53b83b
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], bl
        mov byte ptr ss : [esp+0x51], bl
        mov byte ptr ss : [esp+0x52], bl
        mov byte ptr ss : [esp+0x53], bl
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x55], bl
        mov byte ptr ss : [esp+0x56], bl
        mov byte ptr ss : [esp+0x57], bl
        mov byte ptr ss : [esp+0x58], bl
        mov byte ptr ss : [esp+0x59], bl
        mov byte ptr ss : [esp+0x5A], bl
        mov byte ptr ss : [esp+0x5B], bl
        mov byte ptr ss : [esp+0x5C], bl
        mov byte ptr ss : [esp+0x5D], bl
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        lea esi, ss:[ebp+0x10]
        push esi
        mov byte ptr ss : [esp+0x1B0], 6
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_5c60a0]
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0x10
        cmp eax, ebx
        je public_53b819
        push 0x18
        lea edx, ss:[esp+0x16C]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_41c970
        lea eax, ss:[esp+0x168]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        push esi
        call dword ptr ds : [public_5c609c]
        add esp, 0x10
        public_53b819 : nop
        mov esi, dword ptr ds : [public_5c6098]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x1A0], 5
        call esi
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x1A0], 1
        call esi
        public_53b83b : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        public_53b840 : nop
        call public_5b7e1d
        add esp, 4
        public_53b848 : nop
        mov ecx, dword ptr ss : [esp+0x198]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x194
        ret 8
        UNREACHABLE_TRAP(0x53b220)
    }
}

#undef public_53b27a
#undef public_53b280
#undef public_53b2c5
#undef public_53b2d0
#undef public_53b2ec
#undef public_53b369
#undef public_53b389
#undef public_53b3d5
#undef public_53b3d9
#undef public_53b4a7
#undef public_53b580
#undef public_53b594
#undef public_53b5d0
#undef public_53b5e8
#undef public_53b610
#undef public_53b63b
#undef public_53b6b5
#undef public_53b6d4
#undef public_53b6d6
#undef public_53b819
#undef public_53b83b
#undef public_53b840
#undef public_53b848
