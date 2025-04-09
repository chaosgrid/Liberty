#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_476c40);
CLANG_FORWARD_PROC_SYMBOL(public_477510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbd9f);

#define public_476cd5 _public_476cd5
#define public_476d10 _public_476d10
#define public_476d45 _public_476d45
#define public_476d70 _public_476d70
#define public_476dc1 _public_476dc1
#define public_476dc9 _public_476dc9
#define public_476e17 _public_476e17
#define public_476e29 _public_476e29
#define public_476e2b _public_476e2b
#define public_476e3d _public_476e3d
#define public_476ead _public_476ead
#define public_476ebe _public_476ebe
#define public_476ed3 _public_476ed3
#define public_476ef8 _public_476ef8
#define public_476f55 _public_476f55
#define public_476f60 _public_476f60
#define public_476f6f _public_476f6f
#define public_476f86 _public_476f86
#define public_476fbb _public_476fbb
#define public_476fc4 _public_476fc4

PROC_DECLARE(0x476c40, internal_476c40, public_476c40);
extern "C" NAKED register_t __cdecl internal_476c40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bbd9f @0x476c48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbd9f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16A4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov al, byte ptr ds : [public_66dc59]
        test al, al
        jne public_476fc4
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        lea eax, ss:[esp+0x15B0]
/*FIXUP push offset public_5d0a8c @0x476c79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a8c
        push eax
        mov byte ptr ds : [public_66dc59], 1
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c605c]
        push ebx
        lea ecx, ss:[esp+0x15B0]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x16C0], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_476e3d
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_476e3d
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x24]
/*FIXUP public_476cd5 : nop
        push offset public_5d0a78 @0x476cd5*/
  FIXUP public_476cd5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a78
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_476e2b
        xor bl, bl
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0xF], 0
        mov byte ptr ss : [esp+0xE], bl
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_476e29
        lea esp, ss:[esp]
/*FIXUP public_476d10 : nop
        push offset public_5d0a70 @0x476d10*/
  FIXUP public_476d10 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a70
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_476d45
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0xF], 1
        jmp public_476dc9
/*FIXUP public_476d45 : nop
        push offset public_5c797c @0x476d45*/
  FIXUP public_476d45 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c797c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x44]
        je public_476d70
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0xE], 1
        jmp public_476dc1
/*FIXUP public_476d70 : nop
        push offset public_5c8b2c @0x476d70*/
  FIXUP public_476d70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b2c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_476dc1
        push 0
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        push 1
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 2
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], edx
        mov bl, 1
        public_476dc1 : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_476e17
        public_476dc9 : nop
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        je public_476e17
        test bl, bl
        je public_476e17
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_66dc10]
        push 1
        push eax
        mov ecx, offset public_66dc08
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x4C], edx
        call public_477510
        xor bl, bl
        mov byte ptr ss : [esp+0xF], 0
        mov byte ptr ss : [esp+0xE], bl
        public_476e17 : nop
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_476d10
        public_476e29 : nop
        xor ebx, ebx
        public_476e2b : nop
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_476cd5
        public_476e3d : nop
        push ebp
        lea edx, ss:[esp+0x1470]
        mov dword ptr ss : [esp+0x16BC], 1
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1478]
        mov byte ptr ss : [esp+0x16C4], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1480], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_476ed3
        cmp dword ptr ss : [esp+0x1484], ebx
        je public_476ebe
        mov eax, dword ptr ss : [esp+0x1488]
        cmp eax, ebx
        je public_476ead
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1488], ebx
        mov dword ptr ss : [esp+0x148C], ebx
        public_476ead : nop
        mov edx, dword ptr ss : [esp+0x1484]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1484], ebx
        public_476ebe : nop
        mov eax, dword ptr ss : [esp+0x1480]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1480], 0xFFFFFFFF
        public_476ed3 : nop
        mov eax, dword ptr ss : [esp+0x1488]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_476ef8
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1488], ebx
        mov dword ptr ss : [esp+0x148C], ebx
        public_476ef8 : nop
        push 1
        lea ecx, ss:[esp+0x1474]
        mov dword ptr ss : [esp+0x1494], ebx
        mov byte ptr ss : [esp+0x16C0], 1
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x16C4], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x58], 0xFFFFFFFF
        je public_476f6f
        cmp dword ptr ss : [esp+0x5C], ebx
        je public_476f60
        mov eax, dword ptr ss : [esp+0x60]
        cmp eax, ebx
        je public_476f55
        push eax
        call ebp
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        public_476f55 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x5C], ebx
        public_476f60 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        public_476f6f : nop
        mov eax, dword ptr ss : [esp+0x60]
        cmp eax, ebx
        pop ebp
        je public_476f86
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        public_476f86 : nop
        mov eax, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x5C], ebx
        cmp eax, ebx
        pop ebx
        je public_476fc4
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_476fbb
        cmp cl, 0xFF
        je public_476fbb
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x16A4]
        mov dword ptr fs : [0], ecx
        add esp, 0x16B0
        ret 
        public_476fbb : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_476fc4 : nop
        mov ecx, dword ptr ss : [esp+0x16A4]
        mov dword ptr fs : [0], ecx
        add esp, 0x16B0
        ret 
        UNREACHABLE_TRAP(0x476c40)
    }
}

#undef public_476cd5
#undef public_476d10
#undef public_476d45
#undef public_476d70
#undef public_476dc1
#undef public_476dc9
#undef public_476e17
#undef public_476e29
#undef public_476e2b
#undef public_476e3d
#undef public_476ead
#undef public_476ebe
#undef public_476ed3
#undef public_476ef8
#undef public_476f55
#undef public_476f60
#undef public_476f6f
#undef public_476f86
#undef public_476fbb
#undef public_476fc4
