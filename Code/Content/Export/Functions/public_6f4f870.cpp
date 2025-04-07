#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ecff00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31390);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f060);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f870);
CLANG_FORWARD_PROC_SYMBOL(public_6f50140);
CLANG_FORWARD_PROC_SYMBOL(public_6f50ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51160);
CLANG_FORWARD_PROC_SYMBOL(public_6f52230);
CLANG_FORWARD_PROC_SYMBOL(public_6f52a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f52c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f52e90);
CLANG_FORWARD_PROC_SYMBOL(public_6f53110);
CLANG_FORWARD_PROC_SYMBOL(public_6f53350);
CLANG_FORWARD_PROC_SYMBOL(public_6f537a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf2ab);

#define public_6f4f8a8 _public_6f4f8a8
#define public_6f4f8f1 _public_6f4f8f1
#define public_6f4f92d _public_6f4f92d
#define public_6f4f94d _public_6f4f94d
#define public_6f4f9d2 _public_6f4f9d2
#define public_6f4f9f2 _public_6f4f9f2
#define public_6f4fa33 _public_6f4fa33
#define public_6f4fa90 _public_6f4fa90
#define public_6f4fa9a _public_6f4fa9a
#define public_6f4fa9e _public_6f4fa9e
#define public_6f4fab0 _public_6f4fab0
#define public_6f4face _public_6f4face
#define public_6f4fad0 _public_6f4fad0
#define public_6f4fb1f _public_6f4fb1f
#define public_6f4fb3e _public_6f4fb3e
#define public_6f4fb7e _public_6f4fb7e
#define public_6f4fbe0 _public_6f4fbe0
#define public_6f4fc24 _public_6f4fc24
#define public_6f4fc75 _public_6f4fc75
#define public_6f4fc8f _public_6f4fc8f
#define public_6f4fcbb _public_6f4fcbb
#define public_6f4fce6 _public_6f4fce6
#define public_6f4fd28 _public_6f4fd28
#define public_6f4fd60 _public_6f4fd60
#define public_6f4fd81 _public_6f4fd81
#define public_6f4fdb6 _public_6f4fdb6
#define public_6f4fdd1 _public_6f4fdd1
#define public_6f4fde1 _public_6f4fde1
#define public_6f4fdf5 _public_6f4fdf5
#define public_6f4fdfa _public_6f4fdfa
#define public_6f4fe1a _public_6f4fe1a
#define public_6f500f5 _public_6f500f5
#define public_6f50108 _public_6f50108

PROC_DECLARE(0x6f4f870, internal_6f4f870, public_6f4f870);
extern "C" NAKED register_t __cdecl internal_6f4f870()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf2ab @0x6f4f878*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf2ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x454
        push ebp
        mov ebp, dword ptr ss : [esp+0x468]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f50108
        push ebx
        push esi
        push edi
        xor ebx, ebx
/*FIXUP public_6f4f8a8 : nop
        push offset public_6fbb870 @0x6f4f8a8*/
  FIXUP public_6f4f8a8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb870
        mov ecx, ebp
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f500f5
        lea ecx, ss:[esp+0x48]
        call public_6f4f060
        lea ecx, ss:[esp+0x270]
        mov dword ptr ss : [esp+0x46C], ebx
        call public_6f50ff0
        mov ecx, ebp
        mov byte ptr ss : [esp+0x46C], 1
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f4fde1
        public_6f4f8f1 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb93e0 @0x6f4f8f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93e0
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4f92d
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        push ebp
        lea ecx, ss:[esp+0x274]
        call public_6f52230
        jmp public_6f4fdd1
/*FIXUP public_6f4f92d : nop
        push offset public_6fbb860 @0x6f4f92d*/
  FIXUP public_6f4f92d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb860
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4f94d
        push ebx
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [esp+0xB8], al
        jmp public_6f4fdd1
/*FIXUP public_6f4f94d : nop
        push offset public_6fb79a8 @0x6f4f94d*/
  FIXUP public_6f4f94d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79a8
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4f9d2
        mov esi, dword ptr ds : [public_6fb3048]
        push ebx
        call esi
        mov edi, dword ptr ds : [public_6fb3000]
        push eax
        call edi
        add esp, 4
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call esi
        push eax
        call edi
        mov esi, dword ptr ss : [esp+0xEC]
        add esp, 4
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0xEC]
        mov edi, eax
        call public_6f7b0f0
        cmp dword ptr ss : [esp+0x30], esi
        jne public_6f4fdd1
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x18C]
        push edx
        lea ecx, ss:[esp+0xEC]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], edi
        call public_6f003e0
        jmp public_6f4fdd1
/*FIXUP public_6f4f9d2 : nop
        push offset public_6fbb854 @0x6f4f9d2*/
  FIXUP public_6f4f9d2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb854
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4f9f2
        push ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0xB4]
        jmp public_6f4fdd1
/*FIXUP public_6f4f9f2 : nop
        push offset public_6fbb848 @0x6f4f9f2*/
  FIXUP public_6f4f9f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb848
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4fa33
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x9C]
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0x34]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x9C]
        call public_6f937c0
        jmp public_6f4fdd1
/*FIXUP public_6f4fa33 : nop
        push offset public_6fbb838 @0x6f4fa33*/
  FIXUP public_6f4fa33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb838
        call esi
        test al, al
        je public_6f4fb3e
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [public_6fb3694]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call dword ptr ds : [public_6fb3540]
        add esp, 0x10
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3020]
        sub eax, ebx
        je public_6f4fa9a
        dec eax
        je public_6f4fa90
        dec eax
        jne public_6f4fa9e
        mov dword ptr ss : [esp+0x18], 2
        jmp public_6f4fa9e
        public_6f4fa90 : nop
        mov dword ptr ss : [esp+0x18], 1
        jmp public_6f4fa9e
        public_6f4fa9a : nop
        mov dword ptr ss : [esp+0x18], ebx
        public_6f4fa9e : nop
        mov esi, dword ptr ss : [esp+0xA8]
        mov eax, dword ptr ss : [esp+0xAC]
        cmp esi, eax
        je public_6f4face
        public_6f4fab0 : nop
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6f50140
        test al, al
        mov eax, dword ptr ss : [esp+0xAC]
        jne public_6f4fad0
        add esi, 8
        cmp esi, eax
        jne public_6f4fab0
        public_6f4face : nop
        mov esi, eax
        public_6f4fad0 : nop
        cmp esi, eax
        mov dword ptr ss : [esp+0x38], esi
        jne public_6f4fb1f
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea ecx, ss:[esp+0xAC]
        call public_6f537a0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x17], 1
        call public_6f52e90
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x124]
        call public_6fa6e80
        jmp public_6f4fdd1
        public_6f4fb1f : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x1B], bl
        call public_6fa6e80
        jmp public_6f4fdd1
        public_6f4fb3e : nop
        push ebp
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_6fb3058]
        test al, al
        jne public_6f4fdd1
/*FIXUP push offset public_6fbb82c @0x6f4fb51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb82c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4fb7e
        push ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        call dword ptr ds : [public_6fb3508]
        add esp, 8
        jmp public_6f4fdd1
/*FIXUP public_6f4fb7e : nop
        push offset public_6fb93fc @0x6f4fb7e*/
  FIXUP public_6f4fb7e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93fc
        call esi
        test al, al
        je public_6f4fbe0
        lea edx, ss:[esp+0x14C]
        push ebp
        push edx
        mov dword ptr ss : [esp+0x154], ebx
        mov dword ptr ss : [esp+0x158], ebx
        mov dword ptr ss : [esp+0x15C], ebx
        mov dword ptr ss : [esp+0x160], ebx
        mov dword ptr ss : [esp+0x184], ebx
        call public_6f31390
        mov ecx, dword ptr ss : [esp+0x108]
        add esp, 8
        lea eax, ss:[esp+0x14C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x104]
        call public_6ed23d0
        jmp public_6f4fdd1
/*FIXUP public_6f4fbe0 : nop
        push offset public_6fb8018 @0x6f4fbe0*/
  FIXUP public_6f4fbe0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8018
        mov ecx, ebp
        call esi
        test al, al
        je public_6f4fc24
        mov ecx, ebp
        call dword ptr ds : [public_6fb3054]
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        call dword ptr ds : [public_6fb33b4]
        mov ecx, dword ptr ss : [esp+0x118]
        add esp, 8
        lea eax, ss:[esp+0x2C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x114]
        call public_6f937c0
        jmp public_6f4fdd1
        public_6f4fc24 : nop
        push ebp
        lea ecx, ss:[esp+0x274]
        call public_6f52230
        test al, al
        jne public_6f4fdd1
/*FIXUP push offset public_6fbb81c @0x6f4fc39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb81c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4fce6
        push ebx
        call dword ptr ds : [public_6fb3048]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x128], ebx
        mov byte ptr ss : [esp+0x12C], bl
        jne public_6f4fc75
        mov dword ptr ss : [esp+0x128], ebx
        mov byte ptr ss : [esp+0x12C], bl
        jmp public_6f4fc8f
        public_6f4fc75 : nop
        push eax
        lea edx, ss:[esp+0x130]
        push 0x20
        push edx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x128], eax
        public_6f4fc8f : nop
        xor eax, eax
        mov edi, offset public_6fbb810
        lea esi, ss:[esp+0x12C]
        mov ecx, 9
        repe cmpsb
        sete al
        cmp al, bl
        je public_6f4fcbb
        mov dword ptr ss : [esp+0xA0], 1
        jmp public_6f4fdd1
        public_6f4fcbb : nop
        xor edx, edx
        mov edi, offset public_6fbb804
        lea esi, ss:[esp+0x12C]
        mov ecx, 9
        repe cmpsb
        sete al
        neg al
        sbb eax, eax
        and eax, 2
        mov dword ptr ss : [esp+0xA0], eax
        jmp public_6f4fdd1
/*FIXUP public_6f4fce6 : nop
        push offset public_6fbb7f0 @0x6f4fce6*/
  FIXUP public_6f4fce6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7f0
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4fd28
        push ebx
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0xD8]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0xD8]
        call public_6f937c0
        jmp public_6f4fdd1
/*FIXUP public_6f4fd28 : nop
        push offset public_6fbb7e4 @0x6f4fd28*/
  FIXUP public_6f4fd28 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7e4
        call esi
        test al, al
        mov ecx, ebp
        je public_6f4fd81
        mov esi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fbb7dc @0x6f4fd3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7dc
        push ebx
        call esi
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f4fd60
        mov dword ptr ss : [esp+0xDC], 1
        jmp public_6f4fdd1
/*FIXUP public_6f4fd60 : nop
        push offset public_6fbb7d0 @0x6f4fd60*/
  FIXUP public_6f4fd60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7d0
        push ebx
        mov ecx, ebp
        call esi
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f4fdd1
        mov dword ptr ss : [esp+0xDC], 2
        jmp public_6f4fdd1
/*FIXUP public_6f4fd81 : nop
        push offset public_6fbb7bc @0x6f4fd81*/
  FIXUP public_6f4fd81 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7bc
        call esi
        test al, al
        je public_6f4fdd1
        mov esi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fbb7b0 @0x6f4fd92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7b0
        push ebx
        mov ecx, ebp
        call esi
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f4fdb6
        mov byte ptr ss : [esp+0xE0], 1
        jmp public_6f4fdd1
/*FIXUP public_6f4fdb6 : nop
        push offset public_6fbb7a8 @0x6f4fdb6*/
  FIXUP public_6f4fdb6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7a8
        push ebx
        mov ecx, ebp
        call esi
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f4fdd1
        mov byte ptr ss : [esp+0xE0], bl
        public_6f4fdd1 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f4f8f1
        public_6f4fde1 : nop
        mov eax, dword ptr ss : [esp+0xDC]
        dec eax
        je public_6f4fdf5
        dec eax
        jne public_6f4fe1a
        mov eax, 0x4075
        jmp public_6f4fdfa
        public_6f4fdf5 : nop
        mov eax, 0x4074
        public_6f4fdfa : nop
        mov dword ptr ss : [esp+0x308], eax
        mov dword ptr ss : [esp+0x2F8], eax
        mov dword ptr ss : [esp+0x2F4], 0x4076
        mov dword ptr ss : [esp+0x2FC], eax
        public_6f4fe1a : nop
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x270]
        push eax
        lea ecx, ss:[esp+0x370]
        mov dword ptr ss : [esp+0x36C], edx
        call public_6f52c70
        lea ecx, ss:[esp+0x368]
        push ecx
        lea edx, ss:[esp+0x184]
        push edx
        mov ecx, offset public_6fd0ca4
        mov byte ptr ss : [esp+0x474], 2
        call public_6f53350
        lea ecx, ss:[esp+0x36C]
        mov byte ptr ss : [esp+0x46C], 1
        call public_6f51160
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x1A0]
        mov dword ptr ss : [esp+0x19C], eax
        call public_6f52a20
        lea edx, ss:[esp+0x198]
        push edx
        lea eax, ss:[esp+0x194]
        push eax
        mov ecx, offset public_6fd0cb8
        mov byte ptr ss : [esp+0x474], 3
        call public_6f53110
        lea ecx, ss:[esp+0x19C]
        mov dword ptr ss : [esp+0x124], ecx
        mov edx, dword ptr ss : [esp+0x264]
        mov eax, dword ptr ss : [esp+0x260]
        push edx
        push eax
        lea ecx, ss:[esp+0x264]
        mov byte ptr ss : [esp+0x474], 9
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x260]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x258]
        mov eax, dword ptr ss : [esp+0x254]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x254]
        mov dword ptr ss : [esp+0x268], ebx
        mov dword ptr ss : [esp+0x26C], ebx
        mov dword ptr ss : [esp+0x270], ebx
        mov byte ptr ss : [esp+0x474], 8
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x250]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x238]
        mov dword ptr ss : [esp+0x250], ebx
        mov dword ptr ss : [esp+0x254], ebx
        mov dword ptr ss : [esp+0x258], ebx
        mov byte ptr ss : [esp+0x46C], 7
        call public_6ecff00
        lea ecx, ss:[esp+0x220]
        mov byte ptr ss : [esp+0x46C], 6
        call public_6eec8d0
        lea ecx, ss:[esp+0x210]
        mov byte ptr ss : [esp+0x46C], 5
        call public_6eec8d0
        lea ecx, ss:[esp+0x1F8]
        mov byte ptr ss : [esp+0x46C], 4
        call public_6eec8d0
        mov byte ptr ss : [esp+0x46C], 1
        lea ecx, ss:[esp+0x1E4]
        call public_6eec8d0
        lea ecx, ss:[esp+0x270]
        mov byte ptr ss : [esp+0x46C], bl
        call public_6f51160
        mov edx, dword ptr ss : [esp+0x110]
        mov eax, dword ptr ss : [esp+0x10C]
        push edx
        push eax
        lea ecx, ss:[esp+0x110]
        mov dword ptr ss : [esp+0x474], 0xF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x10C]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x104]
        mov eax, dword ptr ss : [esp+0x100]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x100]
        mov dword ptr ss : [esp+0x114], ebx
        mov dword ptr ss : [esp+0x118], ebx
        mov dword ptr ss : [esp+0x11C], ebx
        mov byte ptr ss : [esp+0x474], 0xE
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0xFC]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0xE4]
        mov dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x100], ebx
        mov dword ptr ss : [esp+0x104], ebx
        mov byte ptr ss : [esp+0x46C], 0xD
        call public_6ecff00
        mov edx, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ss : [esp+0xD0]
        push edx
        push eax
        lea ecx, ss:[esp+0xD4]
        mov byte ptr ss : [esp+0x474], 0xC
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0xD0]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xD0], ebx
        mov dword ptr ss : [esp+0xD4], ebx
        mov dword ptr ss : [esp+0xD8], ebx
        mov byte ptr ss : [esp+0x46C], 0xB
        call public_6eec8d0
        lea ecx, ss:[esp+0xA4]
        mov byte ptr ss : [esp+0x46C], 0xA
        call public_6eec8d0
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x46C], 0xFFFFFFFF
        call public_6eec8d0
        public_6f500f5 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f4f8a8
        pop edi
        pop esi
        pop ebx
        public_6f50108 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], offset public_6fbb7a4
        call dword ptr ds : [public_6fb34a0]
        mov ecx, dword ptr ss : [esp+0x45C]
        add esp, 4
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x460
        ret 
        UNREACHABLE_TRAP(0x6f4f870)
    }
}

#undef public_6f4f8a8
#undef public_6f4f8f1
#undef public_6f4f92d
#undef public_6f4f94d
#undef public_6f4f9d2
#undef public_6f4f9f2
#undef public_6f4fa33
#undef public_6f4fa90
#undef public_6f4fa9a
#undef public_6f4fa9e
#undef public_6f4fab0
#undef public_6f4face
#undef public_6f4fad0
#undef public_6f4fb1f
#undef public_6f4fb3e
#undef public_6f4fb7e
#undef public_6f4fbe0
#undef public_6f4fc24
#undef public_6f4fc75
#undef public_6f4fc8f
#undef public_6f4fcbb
#undef public_6f4fce6
#undef public_6f4fd28
#undef public_6f4fd60
#undef public_6f4fd81
#undef public_6f4fdb6
#undef public_6f4fdd1
#undef public_6f4fde1
#undef public_6f4fdf5
#undef public_6f4fdfa
#undef public_6f4fe1a
#undef public_6f500f5
#undef public_6f50108
