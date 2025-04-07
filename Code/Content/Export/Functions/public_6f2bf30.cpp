#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f2bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d940);
CLANG_FORWARD_PROC_SYMBOL(public_6f2db50);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ea90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ee60);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae79a);

#define public_6f2bfb2 _public_6f2bfb2
#define public_6f2bfe0 _public_6f2bfe0
#define public_6f2c05b _public_6f2c05b
#define public_6f2c06d _public_6f2c06d
#define public_6f2c07f _public_6f2c07f
#define public_6f2c0d0 _public_6f2c0d0
#define public_6f2c100 _public_6f2c100
#define public_6f2c150 _public_6f2c150
#define public_6f2c182 _public_6f2c182
#define public_6f2c1a9 _public_6f2c1a9
#define public_6f2c1cc _public_6f2c1cc
#define public_6f2c1d6 _public_6f2c1d6
#define public_6f2c207 _public_6f2c207
#define public_6f2c230 _public_6f2c230
#define public_6f2c280 _public_6f2c280
#define public_6f2c2b2 _public_6f2c2b2
#define public_6f2c2d9 _public_6f2c2d9
#define public_6f2c2fc _public_6f2c2fc
#define public_6f2c306 _public_6f2c306
#define public_6f2c337 _public_6f2c337
#define public_6f2c360 _public_6f2c360
#define public_6f2c3b0 _public_6f2c3b0
#define public_6f2c3d6 _public_6f2c3d6
#define public_6f2c3de _public_6f2c3de
#define public_6f2c3fc _public_6f2c3fc
#define public_6f2c423 _public_6f2c423
#define public_6f2c446 _public_6f2c446
#define public_6f2c450 _public_6f2c450
#define public_6f2c4b5 _public_6f2c4b5
#define public_6f2c4c6 _public_6f2c4c6
#define public_6f2c4db _public_6f2c4db
#define public_6f2c500 _public_6f2c500
#define public_6f2c568 _public_6f2c568
#define public_6f2c579 _public_6f2c579
#define public_6f2c58e _public_6f2c58e
#define public_6f2c5ad _public_6f2c5ad
#define public_6f2c5cf _public_6f2c5cf
#define public_6f2c5d8 _public_6f2c5d8
#define public_6f2c635 _public_6f2c635
#define public_6f2c640 _public_6f2c640
#define public_6f2c662 _public_6f2c662
#define public_6f2c666 _public_6f2c666

PROC_DECLARE(0x6f2bf30, internal_6f2bf30, public_6f2bf30);
extern "C" NAKED register_t __cdecl internal_6f2bf30()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6fae79a @0x6f2bf38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae79a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15CC
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x36]
        push eax
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x3F]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f2d8d0
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x15E4], edi
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x74]
        push edx
/*FIXUP push offset public_6fb93ac @0x6f2bf7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93ac
        mov byte ptr ss : [esp+0x15EC], 1
        call public_6f24280
        add esp, 8
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f2c07f
        mov ebx, dword ptr ds : [public_6fb3628]
        mov ebp, dword ptr ds : [public_6fb3048]
/*FIXUP public_6f2bfb2 : nop
        push offset public_6fb93a4 @0x6f2bfb2*/
  FIXUP public_6f2bfb2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93a4
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f2c06d
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f2c06d
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f2bfe0 : nop
        push offset public_6fb445c @0x6f2bfe0*/
  FIXUP public_6f2bfe0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f2c05b
        push edi
        lea ecx, ss:[esp+0x78]
        call ebp
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], edi
        mov byte ptr ss : [esp+0x50], 0
        call public_6f2db50
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call ebx
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        mov dword ptr ss : [esp+0x5C], edx
        mov ecx, 5
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0x60]
        rep movsd
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f2d940
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6fa6e80
        xor edi, edi
        public_6f2c05b : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f2bfe0
        public_6f2c06d : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f2bfb2
        public_6f2c07f : nop
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3008]
/*FIXUP push offset public_6fb93a0 @0x6f2c089*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93a0
/*FIXUP push offset public_6fb9374 @0x6f2c08e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9374
        call dword ptr ds : [public_6fb3340]
        mov esi, dword ptr ds : [public_6fb3380]
        mov ebp, eax
        add esp, 8
        cmp ebp, edi
        je public_6f2c1d6
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd07c4
        call public_6f1df30
        mov eax, dword ptr ds : [public_6fd07c8]
        cmp dword ptr ss : [esp+0x10], eax
        je public_6f2c1cc
        lea ebx, ds:[ebx]
/*FIXUP public_6f2c0d0 : nop
        push offset public_6fb935c @0x6f2c0d0*/
  FIXUP public_6f2c0d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb935c
        push ebp
        call esi
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        lea eax, ss:[esp+0x14]
        lea ecx, ds:[edx+0x10]
        push eax
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp dword ptr ss : [esp+0x14], ecx
        je public_6f2c1a9
        lea ecx, ds:[ecx]
        public_6f2c100 : nop
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edx+0xC]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, 0x14
        push ecx
        add edx, 0x14
        push edx
/*FIXUP push offset public_6fb934c @0x6f2c138*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb934c
        push ebp
        call esi
        mov eax, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax]
        add esp, 0x10
        cmp edi, eax
        je public_6f2c182
        public_6f2c150 : nop
        lea eax, ds:[edi+8]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov edx, dword ptr ss : [esp+0x40]
        add edx, 0x14
        push edx
/*FIXUP push offset public_6fb9344 @0x6f2c16a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9344
        push ebp
        call esi
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 0xC
        cmp edi, ecx
        jne public_6f2c150
/*FIXUP public_6f2c182 : nop
        push offset public_6fb7758 @0x6f2c182*/
  FIXUP public_6f2c182 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebp
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x14]
        call public_6f69d00
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp dword ptr ss : [esp+0x14], ecx
        jne public_6f2c100
        xor edi, edi
/*FIXUP public_6f2c1a9 : nop
        push offset public_6fb7758 @0x6f2c1a9*/
  FIXUP public_6f2c1a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebp
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x10]
        call public_6f46640
        mov eax, dword ptr ds : [public_6fd07c8]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_6f2c0d0
        public_6f2c1cc : nop
        push ebp
        call dword ptr ds : [public_6fb333c]
        add esp, 4
/*FIXUP public_6f2c1d6 : nop
        push offset public_6fb93a0 @0x6f2c1d6*/
  FIXUP public_6f2c1d6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93a0
/*FIXUP push offset public_6fb9318 @0x6f2c1db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9318
        call dword ptr ds : [public_6fb3340]
        mov ebx, eax
        add esp, 8
        cmp ebx, edi
        je public_6f2c306
        mov ecx, dword ptr ds : [public_6fd07b0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f2c2fc
/*FIXUP public_6f2c207 : nop
        push offset public_6fb935c @0x6f2c207*/
  FIXUP public_6f2c207 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb935c
        push ebx
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+0x14]
        add esp, 8
        cmp ecx, edx
        je public_6f2c2d9
        lea ebx, ds:[ebx]
        public_6f2c230 : nop
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, 0x14
        push ecx
        add edx, 0x14
        push edx
/*FIXUP push offset public_6fb934c @0x6f2c268*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb934c
        push ebx
        call esi
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax]
        add esp, 0x10
        cmp edi, eax
        je public_6f2c2b2
        public_6f2c280 : nop
        lea eax, ds:[edi+8]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov edx, dword ptr ss : [esp+0x1C]
        add edx, 0x14
        push edx
/*FIXUP push offset public_6fb9344 @0x6f2c29a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9344
        push ebp
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 0xC
        cmp edi, ecx
        jne public_6f2c280
/*FIXUP public_6f2c2b2 : nop
        push offset public_6fb7758 @0x6f2c2b2*/
  FIXUP public_6f2c2b2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebx
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x10]
        call public_6f69d00
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp dword ptr ss : [esp+0x10], ecx
        jne public_6f2c230
        xor edi, edi
/*FIXUP public_6f2c2d9 : nop
        push offset public_6fb7758 @0x6f2c2d9*/
  FIXUP public_6f2c2d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebx
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x14]
        call public_6f46640
        mov eax, dword ptr ds : [public_6fd07b0]
        cmp dword ptr ss : [esp+0x14], eax
        jne public_6f2c207
        public_6f2c2fc : nop
        push ebx
        call dword ptr ds : [public_6fb333c]
        add esp, 4
/*FIXUP public_6f2c306 : nop
        push offset public_6fb93a0 @0x6f2c306*/
  FIXUP public_6f2c306 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93a0
/*FIXUP push offset public_6fb92ec @0x6f2c30b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb92ec
        call dword ptr ds : [public_6fb3340]
        mov ebp, eax
        add esp, 8
        cmp ebp, edi
        je public_6f2c450
        mov ecx, dword ptr ds : [public_6fd0798]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f2c446
/*FIXUP public_6f2c337 : nop
        push offset public_6fb935c @0x6f2c337*/
  FIXUP public_6f2c337 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb935c
        push ebp
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+0x14]
        add esp, 8
        cmp ecx, edx
        je public_6f2c423
        lea ebx, ds:[ebx]
        public_6f2c360 : nop
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, 0x14
        push ecx
        add edx, 0x14
        push edx
/*FIXUP push offset public_6fb934c @0x6f2c398*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb934c
        push ebp
        call esi
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax]
        add esp, 0x10
        cmp edi, eax
        je public_6f2c3fc
        public_6f2c3b0 : nop
        lea ebx, ds:[edi+8]
        push ebx
        lea ecx, ss:[esp+0x24]
        call public_6fa7200
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f2c3d6
        mov edx, dword ptr ds : [ebx]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f2c3d6
        lea eax, ss:[esp+0x1C]
        jmp public_6f2c3de
        public_6f2c3d6 : nop
        mov dword ptr ss : [esp+0x38], ecx
        lea eax, ss:[esp+0x38]
        public_6f2c3de : nop
        mov eax, dword ptr ds : [eax]
        add eax, 0x14
        push eax
/*FIXUP push offset public_6fb9344 @0x6f2c3e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9344
        push ebp
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x14]
        add esp, 0xC
        cmp edi, ecx
        jne public_6f2c3b0
/*FIXUP public_6f2c3fc : nop
        push offset public_6fb7758 @0x6f2c3fc*/
  FIXUP public_6f2c3fc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebp
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x10]
        call public_6f69d00
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp dword ptr ss : [esp+0x10], ecx
        jne public_6f2c360
        xor edi, edi
/*FIXUP public_6f2c423 : nop
        push offset public_6fb7758 @0x6f2c423*/
  FIXUP public_6f2c423 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebp
        call esi
        add esp, 8
        lea ecx, ss:[esp+0x14]
        call public_6f46640
        mov eax, dword ptr ds : [public_6fd0798]
        cmp dword ptr ss : [esp+0x14], eax
        jne public_6f2c337
        public_6f2c446 : nop
        push ebp
        call dword ptr ds : [public_6fb333c]
        add esp, 4
        public_6f2c450 : nop
        lea ecx, ss:[esp+0x149C]
        mov dword ptr ss : [esp+0x38], ecx
        mov edx, dword ptr ds : [public_6fb3304]
        mov eax, dword ptr ds : [edx]
        push eax
        push edi
        lea ecx, ss:[esp+0x14A4]
        mov byte ptr ss : [esp+0x15EC], 3
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x14AC], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6fb32ac]
        mov esi, dword ptr ds : [public_6fb32a8]
        je public_6f2c4db
        cmp dword ptr ss : [esp+0x14B0], edi
        je public_6f2c4c6
        mov eax, dword ptr ss : [esp+0x14B4]
        cmp eax, edi
        je public_6f2c4b5
        push eax
        call ebp
        mov dword ptr ss : [esp+0x14B4], edi
        mov dword ptr ss : [esp+0x14B8], edi
        public_6f2c4b5 : nop
        mov ecx, dword ptr ss : [esp+0x14B0]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x14B0], edi
        public_6f2c4c6 : nop
        mov edx, dword ptr ss : [esp+0x14AC]
        push edx
        call esi
        mov dword ptr ss : [esp+0x14AC], 0xFFFFFFFF
        public_6f2c4db : nop
        mov eax, dword ptr ss : [esp+0x14B4]
        cmp eax, edi
        mov ebx, dword ptr ds : [public_6fb3390]
        je public_6f2c500
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x14B4], edi
        mov dword ptr ss : [esp+0x14B8], edi
        public_6f2c500 : nop
        push 1
        lea ecx, ss:[esp+0x14A0]
        mov dword ptr ss : [esp+0x14C0], edi
        mov byte ptr ss : [esp+0x15E8], 2
        call dword ptr ds : [public_6fb32f8]
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x15EC], 4
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x84], 0xFFFFFFFF
        je public_6f2c58e
        cmp dword ptr ss : [esp+0x88], edi
        je public_6f2c579
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, edi
        je public_6f2c568
        push eax
        call ebp
        mov dword ptr ss : [esp+0x8C], edi
        mov dword ptr ss : [esp+0x90], edi
        public_6f2c568 : nop
        mov edx, dword ptr ss : [esp+0x88]
        push edx
        call esi
        mov dword ptr ss : [esp+0x88], edi
        public_6f2c579 : nop
        mov eax, dword ptr ss : [esp+0x84]
        push eax
        call esi
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        public_6f2c58e : nop
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, edi
        je public_6f2c5ad
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x8C], edi
        mov dword ptr ss : [esp+0x90], edi
        public_6f2c5ad : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, edi
        mov dword ptr ss : [esp+0x94], edi
        je public_6f2c5d8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f2c5cf
        cmp cl, 0xFF
        je public_6f2c5cf
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f2c5d8
        public_6f2c5cf : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f2c5d8 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x78], edi
        mov dword ptr ss : [esp+0x7C], edi
        mov dword ptr ss : [esp+0x80], edi
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x15E4], 0xFFFFFFFF
        mov ebx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f2c635
        mov edx, eax
        cmp eax, edx
        jne public_6f2c635
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6f2ee60
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f2c662
        public_6f2c635 : nop
        cmp eax, ecx
        je public_6f2c666
        lea esp, ss:[esp]
        public_6f2c640 : nop
        lea ecx, ss:[esp+0x10]
        mov esi, eax
        call public_6f46640
        push esi
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f2ea90
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        jne public_6f2c640
        public_6f2c662 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        public_6f2c666 : nop
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x38], edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x15E4]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15D8
        ret 
        UNREACHABLE_TRAP(0x6f2bf30)
    }
}

#undef public_6f2bfb2
#undef public_6f2bfe0
#undef public_6f2c05b
#undef public_6f2c06d
#undef public_6f2c07f
#undef public_6f2c0d0
#undef public_6f2c100
#undef public_6f2c150
#undef public_6f2c182
#undef public_6f2c1a9
#undef public_6f2c1cc
#undef public_6f2c1d6
#undef public_6f2c207
#undef public_6f2c230
#undef public_6f2c280
#undef public_6f2c2b2
#undef public_6f2c2d9
#undef public_6f2c2fc
#undef public_6f2c306
#undef public_6f2c337
#undef public_6f2c360
#undef public_6f2c3b0
#undef public_6f2c3d6
#undef public_6f2c3de
#undef public_6f2c3fc
#undef public_6f2c423
#undef public_6f2c446
#undef public_6f2c450
#undef public_6f2c4b5
#undef public_6f2c4c6
#undef public_6f2c4db
#undef public_6f2c500
#undef public_6f2c568
#undef public_6f2c579
#undef public_6f2c58e
#undef public_6f2c5ad
#undef public_6f2c5cf
#undef public_6f2c5d8
#undef public_6f2c635
#undef public_6f2c640
#undef public_6f2c662
#undef public_6f2c666
