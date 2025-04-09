#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_5803d0);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5815f0 _public_5815f0
#define public_58162f _public_58162f
#define public_581665 _public_581665
#define public_581674 _public_581674
#define public_58171c _public_58171c
#define public_581788 _public_581788
#define public_5817e9 _public_5817e9
#define public_58181e _public_58181e
#define public_58182b _public_58182b
#define public_581868 _public_581868
#define public_58189d _public_58189d
#define public_5818ac _public_5818ac
#define public_581954 _public_581954
#define public_5819c0 _public_5819c0
#define public_581a21 _public_581a21
#define public_581a56 _public_581a56
#define public_581a63 _public_581a63
#define public_581a9a _public_581a9a
#define public_581ad0 _public_581ad0
#define public_581ae1 _public_581ae1
#define public_581b89 _public_581b89
#define public_581c0e _public_581c0e
#define public_581c6f _public_581c6f
#define public_581ca4 _public_581ca4
#define public_581cb1 _public_581cb1
#define public_581ce8 _public_581ce8
#define public_581d1e _public_581d1e
#define public_581d2f _public_581d2f
#define public_581dab _public_581dab
#define public_581dd7 _public_581dd7
#define public_581e54 _public_581e54
#define public_581ed9 _public_581ed9
#define public_581f5e _public_581f5e
#define public_581fcb _public_581fcb
#define public_582000 _public_582000
#define public_58200d _public_58200d
#define public_582035 _public_582035
#define public_58205d _public_58205d
#define public_582082 _public_582082
#define public_5820b4 _public_5820b4
#define public_5820be _public_5820be
#define public_5820ea _public_5820ea
#define public_5820ec _public_5820ec
#define public_5820f2 _public_5820f2
#define public_582103 _public_582103
#define public_582115 _public_582115

PROC_DECLARE(0x5815a0, internal_5815a0, public_5815a0);
extern "C" NAKED register_t __cdecl internal_5815a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x78
        push ebx
        push esi
        push edi
        mov edi, ecx
        push eax
        push edi
        call public_59dd00
        push edi
        call public_59dbf0
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ss : [esp+0x98]
        and cl, 0xFB
        or cl, 3
        xor ebx, ebx
        add esp, 0xC
        cmp esi, ebx
        mov byte ptr ds : [edi+0x6C], cl
        je public_582103
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_582103
        push ebp
        lea ebx, ds:[ebx]
/*FIXUP public_5815f0 : nop
        push offset public_5e4ba0 @0x5815f0*/
  FIXUP public_5815f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ba0
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581674
        lea ebp, ds:[edi+0x32C]
        call dword ptr ds : [public_5c6698]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        call public_59eee0
        mov edx, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [edx], 0
        je public_58162f
        push ebx
        push ebx
        mov eax, edx
        push eax
        mov ecx, ebp
        call public_59ec80
        public_58162f : nop
        cmp dword ptr ss : [ebp+4], 0xFFFFFFFF
        je public_581665
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x360]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_581665 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x8C]
        jmp public_5820f2
/*FIXUP public_581674 : nop
        push offset public_5e4b94 @0x581674*/
  FIXUP public_581674 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b94
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_58171c
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+0x354]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        call public_5803d0
        mov eax, dword ptr ds : [edi+0x330]
        cmp eax, 0xFFFFFFFF
        je public_5820f2
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ds:[edi+0x384]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+0x330]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_5820f2
/*FIXUP public_58171c : nop
        push offset public_5e4b8c @0x58171c*/
  FIXUP public_58171c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b8c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_581788
        lea ebp, ds:[edi+0x3A0]
        mov ecx, ebp
        call public_4215b0
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x90]
        jmp public_5820f2
/*FIXUP public_581788 : nop
        push offset public_5e4b80 @0x581788*/
  FIXUP public_581788 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b80
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_5817e9
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x28]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ds:[edi+0x390]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_5820f2
/*FIXUP public_5817e9 : nop
        push offset public_5e4b6c @0x5817e9*/
  FIXUP public_5817e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b6c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_58182b
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_58181e
        mov eax, 1
        mov byte ptr ds : [edi+0x39C], al
        jmp public_5820f2
        public_58181e : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x39C], al
        jmp public_5820f2
/*FIXUP public_58182b : nop
        push offset public_5e4b60 @0x58182b*/
  FIXUP public_58182b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b60
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_5818ac
        lea ebp, ds:[edi+0x3D0]
        call dword ptr ds : [public_5c6698]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        call public_59eee0
        mov ecx, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [ecx], 0
        je public_581868
        push ebx
        mov edx, ecx
        push ebx
        push edx
        mov ecx, ebp
        call public_59ec80
        public_581868 : nop
        cmp dword ptr ss : [ebp+4], 0xFFFFFFFF
        je public_58189d
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x404]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_58189d : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x8C]
        jmp public_5820f2
/*FIXUP public_5818ac : nop
        push offset public_5e4b50 @0x5818ac*/
  FIXUP public_5818ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b50
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581954
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x34]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ds:[edi+0x3F8]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        call public_5803d0
        mov eax, dword ptr ds : [edi+0x3D4]
        cmp eax, 0xFFFFFFFF
        je public_5820f2
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ds:[edi+0x428]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+0x3D4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_5820f2
/*FIXUP public_581954 : nop
        push offset public_5e4b44 @0x581954*/
  FIXUP public_581954 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b44
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5819c0
        lea ebp, ds:[edi+0x444]
        mov ecx, ebp
        call public_4215b0
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x90]
        jmp public_5820f2
/*FIXUP public_5819c0 : nop
        push offset public_5e4b38 @0x5819c0*/
  FIXUP public_5819c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b38
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581a21
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x40]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x48]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        lea edx, ds:[edi+0x434]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_5820f2
/*FIXUP public_581a21 : nop
        push offset public_5e4b20 @0x581a21*/
  FIXUP public_581a21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b20
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581a63
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_581a56
        mov eax, 1
        mov byte ptr ds : [edi+0x440], al
        jmp public_5820f2
        public_581a56 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x440], al
        jmp public_5820f2
/*FIXUP public_581a63 : nop
        push offset public_5e4b14 @0x581a63*/
  FIXUP public_581a63 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b14
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581ae1
        lea ebp, ds:[edi+0x474]
        call dword ptr ds : [public_5c6698]
        mov ecx, ebp
        mov ebx, eax
        call public_59eee0
        cmp byte ptr ds : [ebx], 0
        je public_581a9a
        push 0
        push 0
        push ebx
        mov ecx, ebp
        call public_59ec80
        public_581a9a : nop
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, 0xFFFFFFFF
        je public_581ad0
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ebx, ds:[edi+0x4A8]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_581ad0 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x8C]
        xor ebx, ebx
        jmp public_5820f2
/*FIXUP public_581ae1 : nop
        push offset public_5e4b04 @0x581ae1*/
  FIXUP public_581ae1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4b04
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581b89
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x4C]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x54]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        lea ecx, ds:[edi+0x49C]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        call public_5803d0
        mov eax, dword ptr ds : [edi+0x478]
        cmp eax, 0xFFFFFFFF
        je public_5820f2
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ds:[edi+0x4CC]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+0x478]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_5820f2
/*FIXUP public_581b89 : nop
        push offset public_5e4af8 @0x581b89*/
  FIXUP public_581b89 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4af8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_581c0e
        lea ebp, ds:[edi+0x4E8]
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x20], eax
        mov dword ptr ss : [ebp+0x10], eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x14], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x90]
        jmp public_5820f2
/*FIXUP public_581c0e : nop
        push offset public_5e4aec @0x581c0e*/
  FIXUP public_581c0e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4aec
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581c6f
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x58]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x60]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        lea edx, ds:[edi+0x4D8]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_5820f2
/*FIXUP public_581c6f : nop
        push offset public_5e4ad4 @0x581c6f*/
  FIXUP public_581c6f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ad4
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581cb1
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_581ca4
        mov eax, 1
        mov byte ptr ds : [edi+0x4E4], al
        jmp public_5820f2
        public_581ca4 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x4E4], al
        jmp public_5820f2
/*FIXUP public_581cb1 : nop
        push offset public_5e4ac8 @0x581cb1*/
  FIXUP public_581cb1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ac8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581d2f
        lea ebp, ds:[edi+0x518]
        call dword ptr ds : [public_5c6698]
        mov ecx, ebp
        mov ebx, eax
        call public_59eee0
        cmp byte ptr ds : [ebx], 0
        je public_581ce8
        push 0
        push 0
        push ebx
        mov ecx, ebp
        call public_59ec80
        public_581ce8 : nop
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, 0xFFFFFFFF
        je public_581d1e
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ebx, ds:[edi+0x5B8]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_581d1e : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x8C]
        xor ebx, ebx
        jmp public_5820f2
/*FIXUP public_581d2f : nop
        push offset public_5e4ab8 @0x581d2f*/
  FIXUP public_581d2f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ab8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581dd7
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x64]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x68]
        lea ecx, ds:[edi+0x5A0]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        call public_5803d0
        mov eax, dword ptr ds : [edi+0x51C]
        cmp eax, 0xFFFFFFFF
        je public_5820f2
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        public_581dab : nop
        mov edx, dword ptr ds : [ecx]
        lea ebp, ds:[edi+0x5DC]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+0x51C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        jmp public_5820f2
/*FIXUP public_581dd7 : nop
        push offset public_5e4aa8 @0x581dd7*/
  FIXUP public_581dd7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4aa8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581e54
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x70]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x78]
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        lea eax, ds:[edi+0x5AC]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, edi
        call public_5803d0
        mov eax, dword ptr ds : [edi+0x51C]
        cmp eax, 0xFFFFFFFF
        je public_5820f2
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [edx]
        jmp public_581dab
/*FIXUP public_581e54 : nop
        push offset public_5e4a9c @0x581e54*/
  FIXUP public_581e54 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a9c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_581ed9
        lea ebp, ds:[edi+0x5F8]
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x20], eax
        mov dword ptr ss : [ebp+0x10], eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x14], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_5820f2
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x90]
        jmp public_5820f2
/*FIXUP public_581ed9 : nop
        push offset public_5e4a90 @0x581ed9*/
  FIXUP public_581ed9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a90
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_581f5e
        lea ebp, ds:[edi+0x628]
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x20], eax
        mov dword ptr ss : [ebp+0x10], eax
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ss : [esp+0x8C]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x14], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        je public_5820f2
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_5820f2
        mov eax, dword ptr ds : [eax]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x90]
        jmp public_5820f2
/*FIXUP public_581f5e : nop
        push offset public_5e4a84 @0x581f5e*/
  FIXUP public_581f5e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a84
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_581fcb
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x14]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x7C]
        fld qword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x84]
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x80]
        lea ecx, ds:[edi+0x5E8]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_5820f2
/*FIXUP public_581fcb : nop
        push offset public_5e4a6c @0x581fcb*/
  FIXUP public_581fcb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a6c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_58200d
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_582000
        mov eax, 1
        mov byte ptr ds : [edi+0x5F4], al
        jmp public_5820f2
        public_582000 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x5F4], al
        jmp public_5820f2
/*FIXUP public_58200d : nop
        push offset public_5e4a60 @0x58200d*/
  FIXUP public_58200d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a60
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_582035
        push ebx
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x658], eax
        jmp public_5820f2
/*FIXUP public_582035 : nop
        push offset public_5e4a54 @0x582035*/
  FIXUP public_582035 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a54
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_58205d
        push ebx
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x65C], eax
        jmp public_5820f2
/*FIXUP public_58205d : nop
        push offset public_5e4a48 @0x58205d*/
  FIXUP public_58205d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a48
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_582082
        push ebx
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x660], eax
        jmp public_5820f2
/*FIXUP public_582082 : nop
        push offset public_5e4a38 @0x582082*/
  FIXUP public_582082 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4a38
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_5820be
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_5820b4
        mov eax, 1
        mov byte ptr ds : [edi+0x66C], al
        jmp public_5820f2
        public_5820b4 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x66C], al
        jmp public_5820f2
/*FIXUP public_5820be : nop
        push offset public_5e16c0 @0x5820be*/
  FIXUP public_5820be : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e16c0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5820f2
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_5820ea
        mov eax, 1
        jmp public_5820ec
        public_5820ea : nop
        xor eax, eax
        public_5820ec : nop
        mov byte ptr ds : [edi+0x2D1], al
        public_5820f2 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5815f0
        pop ebp
        public_582103 : nop
        mov edi, dword ptr ds : [edi+4]
        cmp edi, ebx
        je public_582115
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[edi+0x60]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        public_582115 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x78
        ret 8
        UNREACHABLE_TRAP(0x5815a0)
    }
}

#undef public_5815f0
#undef public_58162f
#undef public_581665
#undef public_581674
#undef public_58171c
#undef public_581788
#undef public_5817e9
#undef public_58181e
#undef public_58182b
#undef public_581868
#undef public_58189d
#undef public_5818ac
#undef public_581954
#undef public_5819c0
#undef public_581a21
#undef public_581a56
#undef public_581a63
#undef public_581a9a
#undef public_581ad0
#undef public_581ae1
#undef public_581b89
#undef public_581c0e
#undef public_581c6f
#undef public_581ca4
#undef public_581cb1
#undef public_581ce8
#undef public_581d1e
#undef public_581d2f
#undef public_581dab
#undef public_581dd7
#undef public_581e54
#undef public_581ed9
#undef public_581f5e
#undef public_581fcb
#undef public_582000
#undef public_58200d
#undef public_582035
#undef public_58205d
#undef public_582082
#undef public_5820b4
#undef public_5820be
#undef public_5820ea
#undef public_5820ec
#undef public_5820f2
#undef public_582103
#undef public_582115
