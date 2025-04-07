#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ebae10);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a630);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c430);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f488b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a800);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a820);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf60);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa61b);

#define public_6ebae60 _public_6ebae60
#define public_6ebae93 _public_6ebae93
#define public_6ebaeb9 _public_6ebaeb9
#define public_6ebaf0a _public_6ebaf0a
#define public_6ebaf27 _public_6ebaf27
#define public_6ebaf61 _public_6ebaf61
#define public_6ebafba _public_6ebafba
#define public_6ebafd7 _public_6ebafd7
#define public_6ebb057 _public_6ebb057
#define public_6ebb085 _public_6ebb085
#define public_6ebb099 _public_6ebb099
#define public_6ebb0d6 _public_6ebb0d6
#define public_6ebb14c _public_6ebb14c
#define public_6ebb16b _public_6ebb16b
#define public_6ebb18e _public_6ebb18e
#define public_6ebb1ad _public_6ebb1ad
#define public_6ebb1d0 _public_6ebb1d0
#define public_6ebb1f3 _public_6ebb1f3
#define public_6ebb216 _public_6ebb216
#define public_6ebb232 _public_6ebb232
#define public_6ebb261 _public_6ebb261
#define public_6ebb27f _public_6ebb27f
#define public_6ebb29e _public_6ebb29e
#define public_6ebb2b3 _public_6ebb2b3
#define public_6ebb2d2 _public_6ebb2d2
#define public_6ebb300 _public_6ebb300
#define public_6ebb319 _public_6ebb319
#define public_6ebb34d _public_6ebb34d
#define public_6ebb387 _public_6ebb387
#define public_6ebb39d _public_6ebb39d
#define public_6ebb3a0 _public_6ebb3a0
#define public_6ebb3a8 _public_6ebb3a8
#define public_6ebb3d2 _public_6ebb3d2
#define public_6ebb412 _public_6ebb412
#define public_6ebb41f _public_6ebb41f
#define public_6ebb44c _public_6ebb44c
#define public_6ebb456 _public_6ebb456
#define public_6ebb45f _public_6ebb45f
#define public_6ebb480 _public_6ebb480
#define public_6ebb490 _public_6ebb490
#define public_6ebb4a5 _public_6ebb4a5
#define public_6ebb4aa _public_6ebb4aa
#define public_6ebb4bc _public_6ebb4bc
#define public_6ebb4e3 _public_6ebb4e3
#define public_6ebb4fa _public_6ebb4fa
#define public_6ebb507 _public_6ebb507
#define public_6ebb517 _public_6ebb517

PROC_DECLARE(0x6ebae10, internal_6ebae10, public_6ebae10);
extern "C" NAKED register_t __cdecl internal_6ebae10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa61b @0x6ebae12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa61b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1B0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1CC]
        mov ebx, ecx
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x10], 0
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x13], 0
        mov byte ptr ss : [esp+0x11], 0
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6ebb517
        lea esp, ss:[esp]
        public_6ebae60 : nop
        mov edi, dword ptr ds : [public_6fb301c]
/*FIXUP push offset public_6fb4ab0 @0x6ebae66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4ab0
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb2b3
        mov byte ptr ds : [ebx+0x2EC], 1
        mov byte ptr ss : [esp+0x11], 1
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ebb507
        public_6ebae93 : nop
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb4aac @0x6ebae99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4aac
        mov ecx, esi
        call edi
        test al, al
        je public_6ebaf61
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_6ebaeb9
        mov ecx, ebx
        call public_6eb8b70
        public_6ebaeb9 : nop
        xor edi, edi
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x134], edi
        mov byte ptr ss : [esp+0x138], 0
        mov dword ptr ss : [esp+0x1B8], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1BC], edi
        mov byte ptr ss : [esp+0x1C0], 0
        mov byte ptr ss : [esp+0x1C1], 0
        call dword ptr ds : [public_6fb3048]
        cmp eax, edi
        jne public_6ebaf0a
        mov dword ptr ss : [esp+0x130], edi
        mov byte ptr ss : [esp+0x134], 0
        jmp public_6ebaf27
        public_6ebaf0a : nop
        push eax
        lea eax, ss:[esp+0x138]
        push 0x80
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x130], eax
        public_6ebaf27 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [esp+0x1BD], al
        mov eax, dword ptr ds : [ebx+0x2F4]
        lea ecx, ds:[ebx+0x2F0]
        lea edx, ss:[esp+0x130]
        push edx
        push eax
        lea eax, ss:[esp+0x68]
        push eax
        call public_6ed0ed0
        mov byte ptr ss : [esp+0x12], 1
        jmp public_6ebb29e
/*FIXUP public_6ebaf61 : nop
        push offset public_6fb4aa0 @0x6ebaf61*/
  FIXUP public_6ebaf61 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4aa0
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb057
        xor ebp, ebp
        push ebp
        mov dword ptr ss : [esp+0xA4], ebp
        mov byte ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x12C], ebp
        mov dword ptr ss : [esp+0x130], ebp
        call dword ptr ds : [public_6fb3048]
        cmp eax, ebp
        jne public_6ebafba
        mov dword ptr ss : [esp+0xA0], ebp
        mov byte ptr ss : [esp+0xA4], 0
        jmp public_6ebafd7
        public_6ebafba : nop
        push eax
        lea ecx, ss:[esp+0xA8]
        push 0x80
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0xA0], eax
        public_6ebafd7 : nop
        mov edi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        call edi
        push 2
        mov ecx, esi
        mov dword ptr ss : [esp+0x12C], eax
        call edi
        mov dword ptr ss : [esp+0x12C], eax
        mov dword ptr ss : [esp+0x50], 1
        mov edx, dword ptr ss : [esp+0x128]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x4C], edx
        lea eax, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [ebx+0x314]
        lea ecx, ds:[ebx+0x310]
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ss : [esp+0x1D4], ebp
        mov byte ptr ss : [esp+0x60], 0
        call public_6ed0ed0
        mov dword ptr ss : [esp+0x1C8], 0xFFFFFFFF
        jmp public_6ebb29e
/*FIXUP public_6ebb057 : nop
        push offset public_6fb4a88 @0x6ebb057*/
  FIXUP public_6ebb057 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a88
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb0d6
        xor edi, edi
        push edi
        call dword ptr ds : [public_6fb3048]
        cmp eax, edi
        mov dword ptr ss : [esp+0x6C], edi
        mov byte ptr ss : [esp+0x70], 0
        jne public_6ebb085
        mov dword ptr ss : [esp+0x6C], edi
        mov byte ptr ss : [esp+0x70], 0
        jmp public_6ebb099
        public_6ebb085 : nop
        push eax
        lea ecx, ss:[esp+0x74]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x6C], eax
        public_6ebb099 : nop
        mov ebp, dword ptr ds : [ebx+0x300]
        mov edx, dword ptr ss : [ebp+4]
        lea edi, ds:[ebx+0x2FC]
        push edx
        push ebp
        mov ecx, edi
        call public_6ed0440
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x6C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ed2d60
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6ebb29e
/*FIXUP public_6ebb0d6 : nop
        push offset public_6fb4a74 @0x6ebb0d6*/
  FIXUP public_6ebb0d6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a74
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb14c
        push 0
        call dword ptr ds : [public_6fb3040]
        cmp al, 1
        jne public_6ebb29e
        lea eax, ds:[ebx+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ebb29e
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6fb3030]
        mov edx, dword ptr ds : [ebx+4]
        push 0
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0
        push edx
        call public_6f488b0
        mov ecx, dword ptr ds : [ebx+0x2A4]
        test ecx, ecx
        je public_6ebb29e
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [ebx+0x2B8]
        push edx
        push 1
        call dword ptr ds : [eax]
        jmp public_6ebb29e
/*FIXUP public_6ebb14c : nop
        push offset public_6fb4a68 @0x6ebb14c*/
  FIXUP public_6ebb14c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a68
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb16b
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [public_6fd1c78], al
        jmp public_6ebb29e
/*FIXUP public_6ebb16b : nop
        push offset public_6fb4a54 @0x6ebb16b*/
  FIXUP public_6ebb16b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a54
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb18e
        push 0
        call dword ptr ds : [public_6fb3040]
        push eax
        call public_6f5a820
        add esp, 4
        jmp public_6ebb29e
/*FIXUP public_6ebb18e : nop
        push offset public_6fb4a48 @0x6ebb18e*/
  FIXUP public_6ebb18e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a48
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb1ad
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [public_6fd1c79], al
        jmp public_6ebb29e
/*FIXUP public_6ebb1ad : nop
        push offset public_6fb4a3c @0x6ebb1ad*/
  FIXUP public_6ebb1ad : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a3c
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb1d0
        push 0
        call dword ptr ds : [public_6fb3040]
        push eax
        call public_6f5cf60
        add esp, 4
        jmp public_6ebb29e
/*FIXUP public_6ebb1d0 : nop
        push offset public_6fb4a30 @0x6ebb1d0*/
  FIXUP public_6ebb1d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a30
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb1f3
        push 0
        call dword ptr ds : [public_6fb3040]
        push eax
        call public_6f5a800
        add esp, 4
        jmp public_6ebb29e
/*FIXUP public_6ebb1f3 : nop
        push offset public_6fb4a20 @0x6ebb1f3*/
  FIXUP public_6ebb1f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a20
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb216
        push 0
        call dword ptr ds : [public_6fb3040]
        push eax
        call public_6f5a7b0
        add esp, 4
        jmp public_6ebb29e
/*FIXUP public_6ebb216 : nop
        push offset public_6fb4a14 @0x6ebb216*/
  FIXUP public_6ebb216 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a14
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb261
        push 0
        call dword ptr ds : [public_6fb3020]
        test eax, eax
        je public_6ebb29e
        lea ebp, ds:[ebx+0x68]
        public_6ebb232 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb303c]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        jmp public_6ebb29e
/*FIXUP public_6ebb261 : nop
        push offset public_6fb4a08 @0x6ebb261*/
  FIXUP public_6ebb261 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a08
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb27f
        push 0
        call dword ptr ds : [public_6fb3020]
        test eax, eax
        je public_6ebb29e
        lea ebp, ds:[ebx+0x50]
        jmp public_6ebb232
/*FIXUP public_6ebb27f : nop
        push offset public_6fb4a00 @0x6ebb27f*/
  FIXUP public_6ebb27f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4a00
        call edi
        test al, al
        je public_6ebb29e
        mov ecx, ebx
        call public_6f1b480
        push ebx
        push esi
        lea ecx, ds:[ebx+0x21C]
        call public_6f1c430
        public_6ebb29e : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ebae93
        jmp public_6ebb507
/*FIXUP public_6ebb2b3 : nop
        push offset public_6fb49f4 @0x6ebb2b3*/
  FIXUP public_6ebb2b3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb49f4
        call edi
        test al, al
        mov ecx, esi
        je public_6ebb4bc
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ebb507
/*FIXUP public_6ebb2d2 : nop
        push offset public_6fb49ec @0x6ebb2d2*/
  FIXUP public_6ebb2d2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb49ec
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ebb4aa
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        jne public_6ebb34d
        mov ebp, dword ptr ds : [ebx+0x1C8]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ebb319
        lea esp, ss:[esp]
        public_6ebb300 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ds:[ebx+0x1C4]
        call public_6ecfe80
        cmp edi, ebp
        jne public_6ebb300
        public_6ebb319 : nop
        mov eax, dword ptr ds : [ebx+0x1E8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x1E4]
        push eax
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_6ed0e20
        mov eax, dword ptr ds : [ebx+0x1D4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x1D0]
        push eax
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_6ed0e20
        public_6ebb34d : nop
        mov ebp, dword ptr ds : [public_6fb3020]
        push 0
        mov ecx, esi
        call ebp
        push 0
        mov ecx, esi
        mov edi, eax
        call ebp
        mov ecx, dword ptr ds : [ebx+0x1E8]
        lea ebp, ds:[ebx+0x1E4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dl, 1
        je public_6ebb3a8
        public_6ebb387 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [edi+0xC]
        setb dl
        test dl, dl
        mov dword ptr ss : [esp+0x14], edi
        je public_6ebb39d
        mov edi, dword ptr ds : [edi]
        jmp public_6ebb3a0
        public_6ebb39d : nop
        mov edi, dword ptr ds : [edi+8]
        public_6ebb3a0 : nop
        cmp edi, ecx
        jne public_6ebb387
        mov eax, dword ptr ss : [esp+0x14]
        public_6ebb3a8 : nop
        mov cl, byte ptr ss : [ebp+0xC]
        test cl, cl
        je public_6ebb3d2
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        push edi
        lea edx, ss:[esp+0x74]
        push edx
        mov ecx, ebp
        call public_6f7c9e0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x2C], 1
        jmp public_6ebb45f
        public_6ebb3d2 : nop
        test dl, dl
        mov dword ptr ss : [esp+0x18], eax
        je public_6ebb41f
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, ebp
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax]
        jne public_6ebb412
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        push edi
        lea eax, ss:[esp+0x74]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 1
        call public_6f7c9e0
        push eax
        jmp public_6ebb456
        public_6ebb412 : nop
        lea ecx, ss:[esp+0x18]
        call public_6f00610
        mov eax, dword ptr ss : [esp+0x14]
        public_6ebb41f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [edx+0xC], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        jae public_6ebb44c
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push edi
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 1
        call public_6f7c9e0
        push eax
        jmp public_6ebb456
        public_6ebb44c : nop
        lea edx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x14], 0
        push edx
        public_6ebb456 : nop
        lea ecx, ss:[esp+0x30]
        call public_6fa6e80
        public_6ebb45f : nop
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov ecx, dword ptr ds : [ebx+0x1B4]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        je public_6ebb4a5
        nop 
        lea esp, ss:[esp]
        public_6ebb480 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jne public_6ebb490
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x18]
        public_6ebb490 : nop
        lea ecx, ss:[esp+0x24]
        call public_6ed1c80
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [ebx+0x1B4]
        jne public_6ebb480
        public_6ebb4a5 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_6ebb4aa : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ebb2d2
        jmp public_6ebb507
/*FIXUP public_6ebb4bc : nop
        push offset public_6fb49e0 @0x6ebb4bc*/
  FIXUP public_6ebb4bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb49e0
        call edi
        test al, al
        je public_6ebb4fa
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_6ebb4fa
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6ebb4e3
        mov ecx, ebx
        call public_6f1b3d0
        mov byte ptr ss : [esp+0x13], 1
        public_6ebb4e3 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x18]
        add eax, 8
        push eax
        push ebx
        push esi
        call public_6f1a630
        add esp, 0xC
        jmp public_6ebb507
/*FIXUP public_6ebb4fa : nop
        push offset public_6fb49cc @0x6ebb4fa*/
  FIXUP public_6ebb4fa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb49cc
        mov ecx, esi
        call edi
        test al, al
        jne public_6ebb517
        public_6ebb507 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ebae60
        public_6ebb517 : nop
        mov ecx, dword ptr ss : [esp+0x1C0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1BC
        ret 4
        UNREACHABLE_TRAP(0x6ebae10)
    }
}

#undef public_6ebae60
#undef public_6ebae93
#undef public_6ebaeb9
#undef public_6ebaf0a
#undef public_6ebaf27
#undef public_6ebaf61
#undef public_6ebafba
#undef public_6ebafd7
#undef public_6ebb057
#undef public_6ebb085
#undef public_6ebb099
#undef public_6ebb0d6
#undef public_6ebb14c
#undef public_6ebb16b
#undef public_6ebb18e
#undef public_6ebb1ad
#undef public_6ebb1d0
#undef public_6ebb1f3
#undef public_6ebb216
#undef public_6ebb232
#undef public_6ebb261
#undef public_6ebb27f
#undef public_6ebb29e
#undef public_6ebb2b3
#undef public_6ebb2d2
#undef public_6ebb300
#undef public_6ebb319
#undef public_6ebb34d
#undef public_6ebb387
#undef public_6ebb39d
#undef public_6ebb3a0
#undef public_6ebb3a8
#undef public_6ebb3d2
#undef public_6ebb412
#undef public_6ebb41f
#undef public_6ebb44c
#undef public_6ebb456
#undef public_6ebb45f
#undef public_6ebb480
#undef public_6ebb490
#undef public_6ebb4a5
#undef public_6ebb4aa
#undef public_6ebb4bc
#undef public_6ebb4e3
#undef public_6ebb4fa
#undef public_6ebb507
#undef public_6ebb517
