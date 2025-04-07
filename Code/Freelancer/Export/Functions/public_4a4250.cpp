#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c850);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_4285c0);
CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_4a4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4a5270);
CLANG_FORWARD_PROC_SYMBOL(public_4a5580);
CLANG_FORWARD_PROC_SYMBOL(public_4a5890);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_576360);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4a46f0 _public_4a46f0
#define public_4a4966 _public_4a4966
#define public_4a4cfb _public_4a4cfb

PROC_DECLARE(0x4a4250, internal_4a4250, public_4a4250);
extern "C" NAKED register_t __cdecl internal_4a4250()
{
    __asm
    {
        sub esp, 0x180
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], 0x3EDC28F6
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3E99999A
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3D072B02
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0xC0]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        push edi
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        lea edi, ds:[esi+0x330]
        mov dword ptr ss : [esp+0x14], 0xBDCCCCCD
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x18], 0xBFBFBE77
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ss:[esp+0x20]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_423b30
        add esp, 0xC
        lea edx, ss:[esp+0x34]
        push edx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x54]
        push eax
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5cb6d8 @0x4a4374*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
/*FIXUP push offset public_5d42fc @0x4a4379*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d42fc
        mov ecx, esi
        call public_5a0db0
        mov dword ptr ds : [esi+0x670], eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x28], 0xBE5C28F6
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x20]
        push edi
        push eax
        mov dword ptr ss : [esp+0x38], 0x3E5E353F
        mov dword ptr ss : [esp+0x3C], 0
        call public_423b30
        add esp, 0xC
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea eax, ss:[esp+0x50]
        push eax
/*FIXUP push offset public_5d2c30 @0x4a440b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2c30
/*FIXUP push offset public_5d42e8 @0x4a4410*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d42e8
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        fsub dword ptr ds : [public_5d2c10]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x34], 0
        fsub dword ptr ds : [public_5d2c0c]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_422b80
        lea edx, ss:[esp+0x28]
        push edx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x60]
        push eax
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5d2bd8 @0x4a4499*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2bd8
/*FIXUP push offset public_5d42d8 @0x4a449e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d42d8
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d42d4]
        push edx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x34], 0
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        fadd dword ptr ds : [public_5d129c]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea eax, ss:[esp+0x28]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d2b88 @0x4a4527*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b88
/*FIXUP push offset public_5d42c4 @0x4a452c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d42c4
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d42c0]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d3e90]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 1
        push 0x4AB
        push 0x40000000
        push 0x3CF5C28F
        push 0x3F9C28F6
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5ce91c @0x4a4581*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d42b4 @0x4a4586*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d42b4
        mov ecx, esi
        call public_5a0e30
/*FIXUP push offset public_5d2b3c @0x4a4592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b3c
        call public_41c850
        mov dword ptr ds : [esi+0x55C], eax
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d42d4]
        add esp, 4
        push edx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x34], 0
        fadd dword ptr ds : [public_5d129c]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_422b80
        lea eax, ss:[esp+0x28]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d2b3c @0x4a4622*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b3c
/*FIXUP push offset public_5d42a4 @0x4a4627*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d42a4
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d42a0]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x34], 0x3CA3D70A
        fadd dword ptr ds : [public_5d429c]
        mov dword ptr ss : [esp+0x38], 0x3CA3D70A
        mov dword ptr ss : [esp+0x3C], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0x42A
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x44]
        push ecx
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4a4692*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d01d0 @0x4a4699*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d428c @0x4a469e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d428c
        mov ecx, esi
        call public_5a0c90
        mov dword ptr ds : [esi+0x5B4], eax
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d2ac0]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x78]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d2abc]
        fstp dword ptr ss : [esp]
        call public_422b80
        xor ebp, ebp
        lea ecx, ds:[esi+0x60C]
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x40], ecx
        lea ebx, ds:[esi+0x5D0]
        mov edi, edi
        public_4a46f0 : nop
        fild dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x6C]
        push edx
        fmul dword ptr ds : [public_5d2ab8]
        push ecx
        fld dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+0x18]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        push eax
        fstp st(0)
        call public_422b80
        push ebp
        lea ecx, ss:[esp+0x94]
/*FIXUP push offset public_5d4278 @0x4a4721*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4278
        push ecx
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d2a98]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x84]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_422b80
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x60]
        push edx
        push 0
        lea eax, ss:[esp+0xAC]
        push eax
/*FIXUP push offset public_5d2a64 @0x4a47ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a64
        lea ecx, ss:[esp+0xCC]
        push ecx
        mov ecx, esi
        call public_5a0db0
        push ebp
        lea edx, ss:[esp+0x94]
/*FIXUP push offset public_5d4260 @0x4a47c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4260
        push edx
        mov dword ptr ds : [ebx-0x14], eax
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d2a98]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push ecx
        lea ecx, ss:[esp+0x90]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x54], 0x3CF5C28F
        mov dword ptr ss : [esp+0x58], 0x3CF5C28F
        mov dword ptr ss : [esp+0x5C], 0
        call public_422b80
        push 0
        push 0
        push 0x42B
        push 0
        push 0
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x9C]
        push eax
/*FIXUP push offset public_5ced30 @0x4a4830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, esi
        call public_5a0d00
        push ebp
        lea edx, ss:[esp+0x94]
/*FIXUP push offset public_5d424c @0x4a484c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d424c
        push edx
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5d4248]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push ecx
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x60], 0x3E7AE148
        mov dword ptr ss : [esp+0x64], 0x3CFDF3B6
        mov dword ptr ss : [esp+0x68], 0
        call public_422b80
        push 0
        push 0
        push 0x42B
        push 0
        push 0
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        push 0
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, esi
        call public_5a0d00
        push ebp
        lea edx, ss:[esp+0x94]
/*FIXUP push offset public_5d4230 @0x4a48c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4230
        push edx
        mov dword ptr ds : [ebx+0x14], eax
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5d422c]
        add esp, 0xC
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [public_5d4228]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x1C]
        push 1
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        push 0x3EF33333
        push 0
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x44]
        push eax
        mov dword ptr ds : [ecx+8], edx
/*FIXUP push offset public_5d29f8 @0x4a4938*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea eax, ss:[esp+0xB8]
        push eax
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [ebx+0x28], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], 1
        je public_4a4966
        mov byte ptr ds : [eax+0x30], 1
        mov dword ptr ds : [eax+0x28], 0
        public_4a4966 : nop
        mov edx, dword ptr ss : [esp+0x40]
        inc ebp
        add edx, 0xC
        add ebx, 4
        cmp ebp, 5
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x40], edx
        jl public_4a46f0
        mov ecx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [public_5d29ac]
        push ecx
        sub esp, 8
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_5d29b0]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 5
        push 5
        push 0
        push 0x3EA24DD3
        push 0x3C9BA5E3
        lea edx, ss:[esp+0x78]
        push edx
/*FIXUP push offset public_5d4214 @0x4a49c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4214
        mov ecx, esi
        call public_5a17e0
        mov dword ptr ds : [esi+0x648], eax
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fsub dword ptr ds : [public_5d4210]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x6C]
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_5d420c]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [public_5d3fb0]
        mov eax, dword ptr ds : [public_611d0c]
        push 0
        push 0
        push 0
        push 0
        push ecx
        push 0x3CF5C28F
        push 0x3FACCCCD
        push 0
        lea edx, ss:[esp+0x80]
        push edx
        push eax
/*FIXUP push offset public_5d3fb8 @0x4a4a24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3fb8
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ds : [esi+0x338]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x80]
        push edx
        push 0
        mov dword ptr ds : [esi+0x5B8], eax
        lea eax, ss:[esp+0x7C]
        push eax
/*FIXUP push offset public_5d2a64 @0x4a4a64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a64
        fstp dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x90], 0x3CF5C28F
        mov dword ptr ss : [esp+0x94], 0x3CF5C28F
        mov dword ptr ss : [esp+0x98], 0
        mov dword ptr ss : [esp+0x84], 0xBF08F5C3
        mov dword ptr ss : [esp+0x88], 0xBDE353F8
/*FIXUP push offset public_5d41fc @0x4a4abf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d41fc
        mov ecx, esi
        call public_5a0db0
        lea ecx, ss:[esp+0x90]
/*FIXUP push offset public_5d41e8 @0x4a4ad2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d41e8
        push ecx
        mov dword ptr ds : [esi+0x658], eax
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_5d1fe4]
        add esp, 8
        push 0
        push 0
        push 1
        push 0
        push 0x3FE66666
        push 0x3CF5C28F
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+4]
        push 0x3F970A3D
        fsub dword ptr ds : [public_5d2c0c]
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+8]
/*FIXUP push offset public_5d0608 @0x4a4b21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        lea eax, ss:[esp+0xB8]
        fstp dword ptr ss : [esp+0x4C]
        push eax
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x64C], eax
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d290c]
        push 1
        lea ecx, ss:[esp+0x20]
        push ecx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+4]
        push 0x3E8A3D71
        fsub dword ptr ds : [public_5d2908]
        push 0x3F8A3D71
/*FIXUP push offset public_5d41d8 @0x4a4b65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d41d8
        mov ecx, esi
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x38]
        call public_5a10e0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x650], eax
        sub esp, 0xC
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x70], 0x64
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        push 0x1C
        mov dword ptr ds : [esi+0x590], 7
        call public_5b7e84
        mov dword ptr ds : [esi+0x58C], eax
        add esp, 4
        mov dword ptr ds : [eax], offset public_5d2a64
        mov ecx, dword ptr ds : [esi+0x58C]
        mov dword ptr ds : [ecx+4], offset public_5d419c
        mov edx, dword ptr ds : [esi+0x58C]
        mov dword ptr ds : [edx+8], offset public_5d4168
        mov eax, dword ptr ds : [esi+0x58C]
        mov dword ptr ds : [eax+0xC], offset public_5d4134
        mov ecx, dword ptr ds : [esi+0x58C]
        mov dword ptr ds : [ecx+0x10], offset public_5d4104
        mov edx, dword ptr ds : [esi+0x58C]
        mov dword ptr ds : [edx+0x14], offset public_5d40d4
        mov eax, dword ptr ds : [esi+0x58C]
        mov dword ptr ds : [eax+0x18], offset public_5d40a4
        mov ecx, esi
        mov dword ptr ds : [esi+0x594], 0x4AE
        mov dword ptr ds : [esi+0x598], 0x4AF
        mov dword ptr ds : [esi+0x59C], 0x4B0
        mov dword ptr ds : [esi+0x5A0], 0x4B1
        mov dword ptr ds : [esi+0x5A4], 0x67C
        mov dword ptr ds : [esi+0x5A8], 0x67D
        mov dword ptr ds : [esi+0x5AC], 0x67E
        call public_4a4fd0
        mov ecx, esi
        call public_4a5890
        mov ecx, esi
        call public_4a5270
        mov ecx, esi
        mov dword ptr ds : [esi+0x57C], 0
        call public_4a5580
        mov eax, dword ptr ds : [esi+0x580]
        mov ecx, dword ptr ds : [esi+0x584]
        lea edi, ds:[eax+eax*2]
        shl edi, 5
        add edi, ecx
        lea ecx, ds:[edi+0x28]
        push ecx
        call public_459950
        add edi, 0x40
        push edi
        call public_459950
        add esp, 8
        push 0
        lea ecx, ds:[esi+0x32C]
        call public_576360
        mov al, byte ptr ds : [esi+0x66C]
        test al, al
        je public_4a4cfb
        lea edx, ds:[esi+0x668]
        push edx
        call public_42ae40
        push eax
        call public_4285c0
        add esp, 8
/*FIXUP public_4a4cfb : nop
        push offset public_5d4090 @0x4a4cfb*/
  FIXUP public_4a4cfb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4090
        lea edi, ds:[esi+0x668]
        call dword ptr ds : [public_5c6020]
        push edi
        mov dword ptr ds : [edi], eax
        call public_42ae40
        push 0
        push 0
        push 0
        push eax
        call public_428680
        mov eax, dword ptr ss : [esp+0x1B0]
        mov ecx, dword ptr ss : [esp+0x1AC]
        add esp, 0x18
        push eax
        push ecx
        mov ecx, esi
        mov byte ptr ds : [esi+0x66C], 1
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x180
        ret 8
        UNREACHABLE_TRAP(0x4a4250)
    }
}

#undef public_4a46f0
#undef public_4a4966
#undef public_4a4cfb
