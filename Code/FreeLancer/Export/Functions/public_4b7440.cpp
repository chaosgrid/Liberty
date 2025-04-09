#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_43bbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_483df0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4b93f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4c55f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6e90);
CLANG_FORWARD_PROC_SYMBOL(public_4c6f70);
CLANG_FORWARD_PROC_SYMBOL(public_53e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_576360);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a1020);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd2bb);

#define public_4b74f0 _public_4b74f0
#define public_4b75f8 _public_4b75f8
#define public_4b7622 _public_4b7622
#define public_4b7687 _public_4b7687
#define public_4b768e _public_4b768e
#define public_4b76c9 _public_4b76c9
#define public_4b76d0 _public_4b76d0
#define public_4b7716 _public_4b7716
#define public_4b7726 _public_4b7726
#define public_4b7819 _public_4b7819
#define public_4b7add _public_4b7add
#define public_4b7f7a _public_4b7f7a
#define public_4b8081 _public_4b8081
#define public_4b8087 _public_4b8087
#define public_4b8153 _public_4b8153
#define public_4b821b _public_4b821b
#define public_4b8301 _public_4b8301
#define public_4b833e _public_4b833e
#define public_4b8364 _public_4b8364
#define public_4b83cf _public_4b83cf
#define public_4b8443 _public_4b8443
#define public_4b8514 _public_4b8514
#define public_4b8550 _public_4b8550
#define public_4b857d _public_4b857d
#define public_4b858a _public_4b858a
#define public_4b8596 _public_4b8596
#define public_4b85c3 _public_4b85c3
#define public_4b85ce _public_4b85ce

PROC_DECLARE(0x4b7440, internal_4b7440, public_4b7440);
extern "C" NAKED register_t __cdecl internal_4b7440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd2bb @0x4b7442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd2bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x730
        mov eax, dword ptr ds : [public_66873c]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov edi, eax
        mov al, byte ptr ss : [esp+0x6B]
        push 0xC
        mov dword ptr ss : [esp+0x74], edi
        mov byte ptr ss : [esp+0x4C], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ebx
        mov ebp, 3
        push ebp
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x750], ebx
        call public_437f70
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3CC], eax
        jne public_4b74f0
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x754], 0xFFFFFFFF
        call public_4a2f80
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        call public_5b7e1d
        add esp, 4
        xor al, al
        jmp public_4b85ce
        public_4b74f0 : nop
        mov edx, dword ptr ds : [esi]
        or eax, 0xFFFFFFFF
        push ebx
/*FIXUP push offset public_5d1580 @0x4b74f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1580
        mov ecx, esi
        mov dword ptr ds : [esi+0x3D4], eax
        mov dword ptr ds : [esi+0x3D0], eax
        mov byte ptr ds : [esi+0x3E4], 1
        call dword ptr ds : [edx+0x98]
        push ebx
        push ebx
        push 0x2148
        push ebx
        mov dword ptr ss : [esp+0x44], 0x3F28F5C3
        mov ecx, dword ptr ss : [esp+0x44]
        push ebx
        mov dword ptr ss : [esp+0x4C], 0x3F23D70A
        mov edx, dword ptr ss : [esp+0x4C]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x50], 0
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+8], ecx
        push ebx
        mov dword ptr ss : [esp+0x4C], 0x3F23D70A
        mov eax, dword ptr ss : [esp+0x4C]
        push ebx
        mov dword ptr ss : [esp+0x54], 0xBE8A3D71
        mov ecx, dword ptr ss : [esp+0x54]
        lea edx, ds:[esi+0xC0]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ss : [esp+0x58], 0
        mov eax, dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x50]
        push ecx
        push ebx
        mov dword ptr ds : [edx+8], eax
        lea edx, ss:[esp+0x98]
        push edx
        push ebx
/*FIXUP push offset public_5ced30 @0x4b7594*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5cf1f4 @0x4b759a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf1f4
/*FIXUP push offset public_5d5904 @0x4b759f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5904
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3CA3D70A
        mov dword ptr ss : [esp+0x74], 0x3CA3D70A
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0xB0], 0x3FA00000
        mov dword ptr ss : [esp+0xB4], 0xBD23D70A
        mov dword ptr ss : [esp+0xB8], 0
        call public_5a0c90
        mov dword ptr ds : [esi+0x330], eax
        cmp dword ptr ds : [esi+0x3CC], ebp
        jle public_4b75f8
        mov dword ptr ds : [esi+0x3CC], ebp
        public_4b75f8 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x3CC]
        xor ebp, ebp
        cmp eax, ebx
        mov dword ptr ss : [esp+0x64], ecx
        mov dword ptr ss : [esp+0x6C], ebp
        jle public_4b7add
        mov ebx, dword ptr ds : [public_5c71ec]
        lea edi, ds:[esi+0x3B4]
        public_4b7622 : nop
        mov edx, dword ptr ss : [esp+0x64]
        xor eax, eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [edi+0xC], eax
        call dword ptr ds : [public_5c6088]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x38], 0
        je public_4b7819
        mov eax, dword ptr ds : [eax+0x90]
        push eax
        call dword ptr ds : [public_5c6088]
        mov ecx, dword ptr ds : [eax+0x54]
        push ecx
        mov dword ptr ss : [esp+0x4C], eax
        call dword ptr ds : [public_5c61fc]
        mov ecx, dword ptr ds : [eax+0xF8]
        add esp, 8
        test ecx, ecx
        mov dword ptr ds : [edi+0x38], ecx
        jl public_4b7687
        cmp ecx, 4
        jl public_4b768e
        public_4b7687 : nop
        mov dword ptr ds : [edi+0x38], 0
        public_4b768e : nop
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ss : [esp+0x70]
        push eax
        mov dword ptr ss : [esp+0x28], edx
        call public_438060
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x98]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_4b7726
        jmp public_4b76d0
        public_4b76c9 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[ecx]
        public_4b76d0 : nop
        mov eax, dword ptr ds : [eax+0xC]
        push eax
        call dword ptr ds : [public_5c632c]
        add esp, 4
        test eax, 0x3FFFFFFF
        je public_4b7716
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x8C], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        push eax
        call public_438060
        fmul dword ptr ss : [esp+0x8C]
        call public_5b7ec0
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+0x1C]
        imul ecx, eax
        add dword ptr ss : [esp+0x20], ecx
        public_4b7716 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4b76c9
        public_4b7726 : nop
        call dword ptr ds : [public_5c6158]
        test eax, eax
        je public_4b7819
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx+0x54]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6418]
        test eax, eax
        mov dword ptr ss : [esp+0x44], eax
        je public_4b7819
        push ebp
        lea eax, ss:[esp+0xC4]
/*FIXUP push offset public_5d58ec @0x4b7758*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d58ec
        push eax
        call ebx
        fild dword ptr ss : [esp+0x78]
        add esp, 0xC
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [ecx+0x78]
        fmul dword ptr ds : [public_5d4958]
        lea edx, ss:[esp+0x74]
        push edx
        push 0
        fsubr dword ptr ds : [public_5d0434]
        push 0
        push 0x50
        push 1
        fstp dword ptr ss : [esp+0xB4]
        push 1
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        lea edx, ss:[esp+0xD0]
        push edx
        push eax
        lea eax, ss:[esp+0xFC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0xB8], 0
        mov dword ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0x74], 0x3D1374BC
        mov dword ptr ss : [esp+0x78], 0x3D27EF9E
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0xDC], 0x3E8DD2F2
        mov dword ptr ss : [esp+0xE4], 0xBFA4DD2F
        call public_5a0db0
        mov dword ptr ds : [edi-0x68], eax
        and byte ptr ds : [eax+0x6C], 0xF7
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [edi+0x70], edx
        public_4b7819 : nop
        push ebp
        lea eax, ss:[esp+0xC4]
/*FIXUP push offset public_5d58cc @0x4b7821*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d58cc
        push eax
        call ebx
        fild dword ptr ss : [esp+0x78]
        add esp, 0xC
        push 0
        fmul dword ptr ds : [public_5d4958]
        push 0
        push 0
        push 0
        push 0
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [public_5d58c8]
        lea ecx, ss:[esp+0xA4]
        fsub dword ptr ss : [esp+0x30]
        push ecx
        lea edx, ss:[esp+0xC0]
        push edx
/*FIXUP push offset public_5ced30 @0x4b785e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        fst dword ptr ss : [esp+0x60]
        lea eax, ss:[esp+0xE0]
        fstp dword ptr ss : [esp+0xCC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xB4], 0x3D0F5C29
        mov dword ptr ss : [esp+0xB8], 0x3D09374C
        mov dword ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0xCC], 0x3F6A7EFA
        mov dword ptr ss : [esp+0xD4], 0
        call public_5a0d00
        push ebp
        lea ecx, ss:[esp+0xC4]
/*FIXUP push offset public_5d58ac @0x4b78bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d58ac
        push ecx
        mov dword ptr ds : [edi-0x74], eax
        call ebx
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0xC8]
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        mov dword ptr ss : [esp+0xA0], edx
/*FIXUP push offset public_5ced30 @0x4b78ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea edx, ss:[esp+0xE0]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0xD8], 0x3E0D4FDF
        mov dword ptr ss : [esp+0xDC], 0x3D0B4396
        mov dword ptr ss : [esp+0xE0], 0
        mov dword ptr ss : [esp+0xA4], 0x3F8C8B44
        mov dword ptr ss : [esp+0xAC], 0
        call public_5a0d00
        push ebp
        mov dword ptr ds : [edi-0x80], eax
        lea eax, ss:[esp+0xC4]
/*FIXUP push offset public_5d5894 @0x4b7945*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5894
        push eax
        call ebx
        fld dword ptr ds : [public_5d5890]
        mov ecx, dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x28]
        add esp, 0xC
        push 1
        push 0
        fstp dword ptr ss : [esp+0x60]
        push 0
        push ecx
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E872B02
        mov dword ptr ss : [esp+0x70], 0x3F7851EC
        mov dword ptr ss : [esp+0x78], 0
        push 0
        lea edx, ss:[esp+0x74]
        push edx
/*FIXUP push offset public_5d010c @0x4b798f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0xE8]
        push eax
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x24]
        push ebp
        lea edx, ss:[esp+0xC4]
/*FIXUP push offset public_5d5878 @0x4b79af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5878
        push edx
        mov dword ptr ds : [edi-0x5C], eax
        mov dword ptr ds : [edi+0x7C], ecx
        call ebx
        fld dword ptr ds : [public_5d5874]
        mov eax, dword ptr ds : [edi+0x38]
        fsub dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax*4+public_611f78]
        add esp, 0xC
        push 1
        fst dword ptr ss : [esp+0x44]
        push 0
        fstp dword ptr ss : [esp+0x34]
        push 0
        push ecx
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E19999A
        push 0
        lea edx, ss:[esp+0x48]
        push edx
/*FIXUP push offset public_5d010c @0x4b79f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0xE8]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3F7851EC
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0e30
        push ebp
        lea ecx, ss:[esp+0xC4]
/*FIXUP push offset public_5d585c @0x4b7a25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d585c
        push ecx
        mov dword ptr ds : [edi+0x88], eax
        call ebx
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 0xC
        push 1
        push 0
        push 2
        push eax
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E1CAC08
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x38], edx
/*FIXUP push offset public_5d010c @0x4b7a5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0xE8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F89FBE7
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [edi-0x50], eax
        mov eax, dword ptr ss : [esp+0x20]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x348]
        push ecx
        call public_4779a0
        mov ecx, dword ptr ds : [edi-0x50]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea eax, ss:[esp+0x344]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [edi-0xC], ecx
        mov eax, dword ptr ds : [edx]
        inc ebp
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+0x3CC]
        add edi, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x6C], ebp
        jl public_4b7622
        xor ebx, ebx
        public_4b7add : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        lea eax, ss:[esp+0xA0]
        push eax
/*FIXUP push offset public_5d5848 @0x4b7b01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5848
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 0xFF
        mov byte ptr ss : [esp+0x4D], 0xFF
        mov byte ptr ss : [esp+0x4E], 0xFF
        mov byte ptr ss : [esp+0x4F], 0xFF
        mov byte ptr ss : [esp+0x48], 0xC
        mov byte ptr ss : [esp+0x49], 0xDC
        mov byte ptr ss : [esp+0x4A], 0xFF
        mov byte ptr ss : [esp+0x4B], 0xFF
        mov dword ptr ss : [esp+0x38], 0x3E3851EC
        mov dword ptr ss : [esp+0x3C], 0xBE25E354
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x7C], 0x3BA3D70A
        mov dword ptr ss : [esp+0x80], 0x3D9FBE77
        mov dword ptr ss : [esp+0x84], 0xBFA4DD2F
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xAC], 0
        mov dword ptr ss : [esp+0xB0], 0
        call public_5a1020
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3EBBE76D
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ce91c @0x4b7bbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d5834 @0x4b7bc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5834
        mov ecx, esi
        mov dword ptr ds : [esi+0x370], eax
        mov dword ptr ss : [esp+0x3C], 0x3F25A1CB
        mov dword ptr ss : [esp+0x40], 0xBCFDF3B6
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3EBBE76D
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d01a8 @0x4b7c07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d5820 @0x4b7c0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5820
        mov ecx, esi
        mov dword ptr ds : [esi+0x384], eax
        mov dword ptr ss : [esp+0x3C], 0x3F25A1CB
        mov dword ptr ss : [esp+0x40], 0xBD8F5C29
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x388], eax
        mov dword ptr ss : [esp+0x10], 0x3E19999A
        mov dword ptr ss : [esp+0x14], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x28], 0x3F245A1D
        mov dword ptr ss : [esp+0x2C], 0xBEF1A9FC
        mov dword ptr ss : [esp+0x30], 0
        push ebx
        push ebx
        push 0x325
        push ebx
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
/*FIXUP push offset public_5ced30 @0x4b7c7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5d580c @0x4b7c84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d580c
        mov ecx, esi
        call public_5a0d00
        push ebx
        push ebx
        push 1
        push 0x39A
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E4AC083
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x4b7cae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d57f8 @0x4b7cb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d57f8
        mov ecx, esi
        mov dword ptr ds : [esi+0x380], eax
        mov dword ptr ss : [esp+0x3C], 0x3F23D70A
        mov dword ptr ss : [esp+0x40], 0xBEEE147B
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 1
        mov dword ptr ds : [esi+0x38C], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 0x3E4CCCCD
        push 0x3ECCCCCD
/*FIXUP push offset public_5d57e4 @0x4b7cf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d57e4
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xBED70A3D
        mov dword ptr ss : [esp+0x28], 0xBE27EF9E
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        call public_5a10e0
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x3E4CCCCD
        push 0x3E75C28F
/*FIXUP push offset public_5d57d0 @0x4b7d29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d57d0
        mov ecx, esi
        mov dword ptr ds : [esi+0x374], eax
        mov dword ptr ss : [esp+0x24], 0x3C23D70A
        mov dword ptr ss : [esp+0x28], 0xBE27EF9E
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        call public_5a10e0
        push 1
        lea edx, ss:[esp+0x14]
        push edx
        push 0x3E4CCCCD
        push 0x3E0F5C29
/*FIXUP push offset public_5d57bc @0x4b7d64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d57bc
        mov ecx, esi
        mov dword ptr ds : [esi+0x378], eax
        mov dword ptr ss : [esp+0x24], 0x3E8A3D71
        mov dword ptr ss : [esp+0x28], 0xBE27EF9E
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        call public_5a10e0
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3ED374BC
        mov dword ptr ds : [esi+0x37C], eax
        push ebx
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], 0x3E6B851F
        mov dword ptr ss : [esp+0x34], 0xBE0C49BA
        mov dword ptr ss : [esp+0x38], 0
        push eax
/*FIXUP push offset public_5d0608 @0x4b7dc6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1558 @0x4b7dcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1558
        mov ecx, esi
        call public_5a0e30
        push 0x476
        mov dword ptr ds : [esi+0x390], eax
        call public_4c4ce0
        push eax
        lea ecx, ss:[esp+0x548]
        push ecx
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x390]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push ebx
        lea eax, ss:[esp+0x544]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push ebx
        push ebx
        push 1
        push 0x460
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3ED81062
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5ce91c @0x4b7e2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d57ac @0x4b7e34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d57ac
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F88F5C3
        mov dword ptr ss : [esp+0x40], 0xBDAE147B
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x3D8], ebx
        mov dword ptr ds : [esi+0x3DC], ebx
        call public_4c3e10
        mov edi, eax
        cmp edi, ebx
        je public_4b8153
        push ebx
        push ebx
        push 1
        push 0x62E
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3ED1EB85
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5ce91c @0x4b7e91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d5790 @0x4b7e96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5790
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E70A3D7
        mov dword ptr ss : [esp+0x40], 0xBDAE147B
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        call dword ptr ds : [public_5c61fc]
        mov ebp, eax
        add esp, 4
        cmp ebp, ebx
        je public_4b8153
        call dword ptr ds : [public_5c6158]
        cmp eax, ebx
        je public_4b7f7a
        push edi
        mov ecx, eax
        call dword ptr ds : [public_5c6418]
        cmp eax, ebx
        je public_4b7f7a
        mov eax, dword ptr ds : [eax+0x78]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        push ebx
        push 0x50
        push 1
        push 1
        push 1
        push 1
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x54]
        push edx
        push ebx
        lea ecx, ss:[esp+0x88]
        push ecx
        push eax
/*FIXUP push offset public_5d5774 @0x4b7f13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5774
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x68], 0x3D0F5C29
        mov dword ptr ss : [esp+0x6C], 0x3D27EF9E
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x94], 0xBF0E978D
        mov dword ptr ss : [esp+0x98], 0x3E051EB8
        mov dword ptr ss : [esp+0x9C], 0xBFA4DD2F
        call public_5a0db0
        mov dword ptr ds : [esi+0x3E0], eax
        and byte ptr ds : [eax+0x6C], 0xF7
        public_4b7f7a : nop
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
/*FIXUP push offset public_5d1528 @0x4b7f89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
/*FIXUP push offset public_5d575c @0x4b7f8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d575c
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x3D0F5C29
        mov dword ptr ss : [esp+0x38], 0x3D09374C
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x4C], 0x3DA7EF9E
        mov dword ptr ss : [esp+0x50], 0xBE4CCCCD
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0d00
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
/*FIXUP push offset public_5d1528 @0x4b7fd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
/*FIXUP push offset public_5d5740 @0x4b7fde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5740
        mov ecx, esi
        mov dword ptr ds : [esi+0x3D8], eax
        mov dword ptr ss : [esp+0x34], 0x3E0D4FDF
        mov dword ptr ss : [esp+0x38], 0x3D0B4396
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x4C], 0x3E872B02
        mov dword ptr ss : [esp+0x50], 0xBE4CCCCD
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0d00
        push 1
        push ebx
        push ebx
        mov dword ptr ds : [esi+0x3DC], eax
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E851EB8
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x4b8043*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d5724 @0x4b8048*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5724
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E0A3D71
        mov dword ptr ss : [esp+0x40], 0xBE2B020C
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov eax, dword ptr ss : [ebp+0xF8]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3E8], eax
        jl public_4b8081
        cmp eax, 4
        jl public_4b8087
        public_4b8081 : nop
        mov dword ptr ds : [esi+0x3E8], ebx
        public_4b8087 : nop
        mov edx, dword ptr ds : [esi+0x3E8]
        mov eax, dword ptr ds : [edx*4+public_611f78]
        push 1
        push ebx
        push ebx
        push eax
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E158106
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x4b80ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d5708 @0x4b80b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5708
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3E0A3D71
        mov dword ptr ss : [esp+0x40], 0xBE4AC083
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 1
        push edi
        call public_4c6e90
        add esp, 8
        push 1
        push ebx
        push 2
        push 1
        push 0x3FCCCCCD
        push 0x3CF5C28F
        push 0x3E0F5C29
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d010c @0x4b80fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d56ec @0x4b8103*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d56ec
        mov ecx, esi
        mov ebp, eax
        mov dword ptr ss : [esp+0x3C], 0x3E841893
        mov dword ptr ss : [esp+0x40], 0xBE4AC083
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push 0xFFFFFFFF
        mov edi, eax
        lea eax, ss:[esp+0x344]
        push ebp
        push eax
        call public_4779a0
        mov edx, dword ptr ds : [edi]
        add esp, 0xC
        push ebx
        lea eax, ss:[esp+0x344]
        push eax
        push 0x1D
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        public_4b8153 : nop
        mov ecx, dword ptr ds : [esi+0x370]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x38C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x384]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x388]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x370]
        push 1
        call public_53e4a0
        push ebx
        push ebx
        push 1
        push ebx
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EBD70A4
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x4b81d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d1cb0 @0x4b81de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1cb0
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F251EB8
        mov dword ptr ss : [esp+0x40], 0xBD79DB23
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x394], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4b821b
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], ebx
        public_4b821b : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x54]
        push edx
        push ebx
        lea eax, ss:[esp+0x88]
        push eax
/*FIXUP push offset public_5d1c78 @0x4b823a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c78
/*FIXUP push offset public_5d1c6c @0x4b823f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c6c
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0x3E22D0E5
        mov dword ptr ss : [esp+0x9C], 0xBFA4DD2F
        call public_5a0db0
        push ebx
        push ebx
        push ebx
        push 0x485
        push 0x3FB33333
        push 0x3D75C28F
        push 0x3EB33333
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x4b82b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1c60 @0x4b82be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c60
        mov ecx, esi
        mov dword ptr ds : [esi+0x398], eax
        mov dword ptr ss : [esp+0x3C], 0x3F283127
        mov dword ptr ss : [esp+0x40], 0xBE5E353F
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x39C], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4b8301
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], ebx
        public_4b8301 : nop
        mov ecx, offset public_668708
        call public_43bbe0
        mov edi, eax
        cmp edi, ebx
        je public_4b83cf
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea edx, ss:[esp+0x244]
        push edx
        push 0x48D
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4b833e
        mov word ptr ss : [esp+0x240], bx
        public_4b833e : nop
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x1C4]
        push ecx
        push edi
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4b8364
        mov word ptr ss : [esp+0x1C0], bx
        public_4b8364 : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x3F
        lea eax, ss:[esp+0x2C4]
        push eax
        push 0x477
        push ecx
        call public_4347e0
        lea edx, ss:[esp+0x250]
        push edx
        lea eax, ss:[esp+0x1D4]
        push eax
        lea ecx, ss:[esp+0x2D8]
        push ecx
        lea edx, ss:[esp+0x35C]
        push edx
        call dword ptr ds : [public_5c70ec]
        add esp, 0x20
        lea eax, ss:[esp+0x340]
        push eax
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [esi+0x394]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x344]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_4b83cf : nop
        push ebx
        push ebx
        push ebx
        push 0x49A
        push 0x3FB33333
        push 0x3D75C28F
        push 0x3EBD70A4
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x4b83ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1a88 @0x4b83f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a88
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F283127
        mov dword ptr ss : [esp+0x40], 0xBEE04189
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push ebx
        push 1
        mov dword ptr ds : [esi+0x3A0], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x3A0]
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4b8443
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], ebx
        public_4b8443 : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        push 1
        lea eax, ss:[esp+0x64]
        push eax
        mov byte ptr ss : [esp+0x68], 0xFF
        mov byte ptr ss : [esp+0x69], 0xFF
        mov byte ptr ss : [esp+0x6A], 0xFF
        mov byte ptr ss : [esp+0x6B], 0xFF
        mov edx, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [edx+0xA8]
        call public_4c4ce0
        push ebx
        push ebx
        mov dword ptr ds : [esi+0x3A4], eax
        call public_4c4060
        push eax
        call public_4c6f70
        mov ecx, dword ptr ds : [esi+0x3A4]
        add esp, 0xC
        add ecx, eax
        push 1
        mov dword ptr ds : [esi+0x3A4], ecx
        call public_4c3e10
        push eax
        call public_4c6e90
        mov ecx, dword ptr ds : [esi+0x3A4]
        mov edx, dword ptr ds : [esi]
        add ecx, eax
        push ecx
        mov dword ptr ds : [esi+0x3A4], ecx
        mov dword ptr ss : [esp+0x40], 0xBF23D70A
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x44], 0x3EA8F5C3
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x48], 0xBFA4DD2F
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x70], 0x64
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        call public_483df0
        fstp dword ptr ds : [esi+0x3F8]
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4b8514
        call public_4c55f0
        public_4b8514 : nop
        mov ecx, esi
        call public_4b93f0
        push ebx
        lea ecx, ds:[esi+0x32C]
        call public_576360
        mov ecx, dword ptr ss : [esp+0x754]
        mov edx, dword ptr ss : [esp+0x750]
        push ecx
        push edx
        mov ecx, esi
        call public_4b5060
        test al, al
        jne public_4b858a
        mov edi, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4b857d
        lea esp, ss:[esp]
        public_4b8550 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x54]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x50], ecx
        jne public_4b8550
        mov edi, dword ptr ss : [esp+0x4C]
        public_4b857d : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor al, al
        jmp public_4b85ce
        public_4b858a : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_4b85c3
        public_4b8596 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x54]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x50], ecx
        jne public_4b8596
        mov eax, dword ptr ss : [esp+0x4C]
        public_4b85c3 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        mov al, 1
        public_4b85ce : nop
        mov ecx, dword ptr ss : [esp+0x740]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x73C
        ret 8
        UNREACHABLE_TRAP(0x4b7440)
    }
}

#undef public_4b74f0
#undef public_4b75f8
#undef public_4b7622
#undef public_4b7687
#undef public_4b768e
#undef public_4b76c9
#undef public_4b76d0
#undef public_4b7716
#undef public_4b7726
#undef public_4b7819
#undef public_4b7add
#undef public_4b7f7a
#undef public_4b8081
#undef public_4b8087
#undef public_4b8153
#undef public_4b821b
#undef public_4b8301
#undef public_4b833e
#undef public_4b8364
#undef public_4b83cf
#undef public_4b8443
#undef public_4b8514
#undef public_4b8550
#undef public_4b857d
#undef public_4b858a
#undef public_4b8596
#undef public_4b85c3
#undef public_4b85ce
