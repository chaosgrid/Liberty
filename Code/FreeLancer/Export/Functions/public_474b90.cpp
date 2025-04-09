#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43bbe0);
CLANG_FORWARD_PROC_SYMBOL(public_458890);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4754a0);
CLANG_FORWARD_PROC_SYMBOL(public_476080);
CLANG_FORWARD_PROC_SYMBOL(public_476c40);
CLANG_FORWARD_PROC_SYMBOL(public_48dc10);
CLANG_FORWARD_PROC_SYMBOL(public_4a1b50);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4900);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbc33);

#define public_474c0c _public_474c0c
#define public_474d3e _public_474d3e
#define public_474d4f _public_474d4f
#define public_474d73 _public_474d73
#define public_474de7 _public_474de7
#define public_474e25 _public_474e25
#define public_474f51 _public_474f51
#define public_474f6f _public_474f6f
#define public_474f7e _public_474f7e
#define public_474fc1 _public_474fc1
#define public_474fd0 _public_474fd0
#define public_474fee _public_474fee
#define public_474ffd _public_474ffd
#define public_47503c _public_47503c
#define public_47504f _public_47504f
#define public_475068 _public_475068
#define public_475074 _public_475074
#define public_47508a _public_47508a
#define public_475099 _public_475099
#define public_475113 _public_475113
#define public_475122 _public_475122
#define public_475131 _public_475131
#define public_4751ad _public_4751ad
#define public_47530f _public_47530f
#define public_475343 _public_475343
#define public_475378 _public_475378
#define public_475385 _public_475385

PROC_DECLARE(0x474b90, internal_474b90, public_474b90);
extern "C" NAKED register_t __cdecl internal_474b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbc33 @0x474b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbc33
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C8
        mov al, byte ptr ds : [public_66dc58]
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        cmp al, bl
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x3C], esi
        jne public_474c0c
        call public_4c4810
        test al, al
        jne public_474c0c
        call public_54baf0
        cmp eax, ebx
        je public_474c0c
        add eax, 0xC
        cmp eax, ebx
        je public_474c0c
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_474c0c
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_474c0c
        call dword ptr ds : [public_5c6348]
        cmp eax, ebx
        je public_474c0c
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ds : [public_66dc54], eax
        mov byte ptr ds : [public_66dc58], 1
        public_474c0c : nop
        mov eax, dword ptr ds : [esi]
        push ebx
/*FIXUP push offset public_5ce994 @0x474c0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
        mov ecx, esi
        call dword ptr ds : [eax+0x98]
        lea ecx, ds:[esi+0x80]
        push ecx
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        push ebx
        push ebx
        push 0x409
        push ebx
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        push ebx
        lea eax, ss:[esp+0x50]
        push eax
        push ebx
/*FIXUP push offset public_5ced30 @0x474c45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5d01d0 @0x474c4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d0a30 @0x474c50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a30
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3C9374BC
        mov dword ptr ss : [esp+0x58], 0x3C9374BC
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x68], 0x3ECB4396
        mov dword ptr ss : [esp+0x6C], 0x3E73B646
        mov dword ptr ss : [esp+0x70], 0
        call public_5a0c90
        push 1
        push ebx
        push 1
        push 0x389
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3F560419
        push ebx
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_5ce91c @0x474cab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d0a20 @0x474cb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a20
        mov ecx, esi
        mov dword ptr ds : [esi+0x32C], eax
        mov dword ptr ss : [esp+0x44], 0xBED60419
        mov dword ptr ss : [esp+0x48], 0x3E83126F
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0e30
        push 1
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x3EE8F5C3
        push 0x3F4B851F
/*FIXUP push offset public_5d0a10 @0x474ceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a10
        mov ecx, esi
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ss : [esp+0x2C], 0xBED16873
        mov dword ptr ss : [esp+0x30], 0x3E54FDF4
        mov dword ptr ss : [esp+0x34], 0
        call public_5a10e0
        mov dword ptr ds : [esi+0x330], eax
        cmp byte ptr ds : [public_66dc58], bl
        je public_474d4f
        mov eax, dword ptr ds : [public_66dc54]
        push ebx
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_474d3e
        push eax
        mov ecx, esi
        call public_4754a0
        public_474d3e : nop
        mov dword ptr ds : [public_66dc54], ebx
        mov byte ptr ds : [public_66dc58], bl
        jmp public_475385
        public_474d4f : nop
        mov dword ptr ss : [esp+0x24], ebx
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_474d73
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x24], eax
        public_474d73 : nop
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x1C], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x1E4], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1E0], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x1E4], 2
        mov dword ptr ss : [esp+0x2C], eax
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], ecx
        jne public_474de7
        mov ebp, eax
        public_474de7 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x1E0], 1
        je public_474e25
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        public_474e25 : nop
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x1E0], bl
        call dword ptr ds : [public_5c62b4]
        call public_4c4810
        test al, al
        je public_4751ad
        mov ecx, offset public_668708
        call public_43bbe0
        mov ebp, eax
        cmp ebp, ebx
        je public_47530f
        cmp dword ptr ss : [esp+0x24], ebx
        je public_47530f
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x15C]
        push ecx
        push 0x55C
        push edx
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
/*FIXUP push offset public_66dc60 @0x474e8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea esi, ds : [eax*2+public_66dc60]
        mov eax, dword ptr ds : [public_67eca8]
        push ebp
        push eax
        call public_4347e0
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ss : [esp+0x44]
        cdq 
        sub eax, edx
        mov edx, dword ptr ds : [public_67eca8]
        sar eax, 1
        push eax
        push esi
        push ecx
        push edx
        call public_4347e0
        push esi
/*FIXUP push offset public_66dc60 @0x474ec0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea eax, ss:[esp+0x190]
        push eax
/*FIXUP push offset public_66fc60 @0x474ecd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        add esp, 0x40
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
/*FIXUP push offset public_66fc60 @0x474ee1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x474ef0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        mov byte ptr ss : [esp+0x12], bl
        call public_4c4900
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x44], bl
        mov dword ptr ss : [esp+0x9C], ebx
        mov byte ptr ss : [esp+0xA0], bl
        mov dword ptr ss : [esp+0xCC], ebx
        mov byte ptr ss : [esp+0xD0], bl
        mov dword ptr ss : [esp+0x110], ebx
        mov byte ptr ss : [esp+0x114], bl
        call dword ptr ds : [eax+0x3C]
        mov ebp, eax
        xor eax, eax
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_474fc1
        public_474f51 : nop
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_474f6f
        mov edx, dword ptr ss : [esp+0x24]
        cmp dword ptr ss : [esp+0xC8], edx
        je public_474f7e
        public_474f6f : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jb public_474f51
        jmp public_474fc1
        public_474f7e : nop
        mov al, byte ptr ss : [esp+0x154]
        mov esi, dword ptr ss : [esp+0x98]
        lea ecx, ss:[esp+0x44]
        push ecx
        mov byte ptr ss : [esp+0x16], al
        call dword ptr ds : [public_5c6020]
        push ebx
        push ebx
        lea edx, ss:[esp+0x1F]
        push edx
        push eax
        call public_4c4da0
        mov cl, byte ptr ss : [esp+0x26]
        mov al, byte ptr ss : [esp+0x27]
        or cl, al
        add esp, 0x14
        cmp esi, ebx
        mov byte ptr ss : [esp+0x12], cl
        jne public_475099
        public_474fc1 : nop
        xor eax, eax
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_47503c
        nop 
        lea esp, ss:[esp]
        public_474fd0 : nop
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_474fee
        mov edx, dword ptr ss : [esp+0x24]
        cmp dword ptr ss : [esp+0xC0], edx
        je public_474ffd
        public_474fee : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jb public_474fd0
        jmp public_47503c
        public_474ffd : nop
        mov al, byte ptr ss : [esp+0x154]
        mov esi, dword ptr ss : [esp+0x98]
        lea ecx, ss:[esp+0x44]
        push ecx
        mov byte ptr ss : [esp+0x16], al
        call dword ptr ds : [public_5c6020]
        push ebx
        push ebx
        lea edx, ss:[esp+0x1F]
        push edx
        push eax
        call public_4c4da0
        mov cl, byte ptr ss : [esp+0x26]
        mov al, byte ptr ss : [esp+0x27]
        or cl, al
        add esp, 0x14
        cmp esi, ebx
        mov byte ptr ss : [esp+0x12], cl
        jne public_475099
        public_47503c : nop
        call public_476c40
        mov esi, dword ptr ds : [public_66dc0c]
        cmp esi, ebx
        jne public_47504f
        xor edx, edx
        jmp public_475068
        public_47504f : nop
        mov ecx, dword ptr ds : [public_66dc10]
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_475068 : nop
        xor eax, eax
        cmp edx, ebx
        jle public_47530f
        xor ecx, ecx
        public_475074 : nop
        mov edi, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [esi+ecx], edi
        je public_47508a
        inc eax
        add ecx, 0x14
        cmp eax, edx
        jl public_475074
        jmp public_47530f
        public_47508a : nop
        lea edx, ds:[eax+eax*4]
        mov esi, dword ptr ds : [esi+edx*4+0x10]
        cmp esi, ebx
        je public_47530f
        public_475099 : nop
        mov ebp, dword ptr ds : [public_5c70b4]
/*FIXUP push offset public_5d0a08 @0x47509f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
/*FIXUP push offset public_66fc60 @0x4750a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        mov edi, dword ptr ds : [public_5c71c8]
        add esp, 8
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_66fc60 @0x4750ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4750c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        lea ecx, ss:[esp+0x28]
        push ecx
        push esi
        call public_57da40
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        mov byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x58], bl
        mov byte ptr ss : [esp+0x4C], bl
        call public_458890
        add esp, 0x20
        test al, al
        je public_47530f
        mov cl, byte ptr ss : [esp+0x12]
        test cl, 4
        mov eax, dword ptr ss : [esp+0x14]
        je public_475113
        cmp dword ptr ds : [eax+8], ebx
        je public_475113
        mov byte ptr ss : [esp+0x28], 1
        public_475113 : nop
        test cl, 8
        je public_475122
        cmp dword ptr ds : [eax+4], ebx
        je public_475122
        mov byte ptr ss : [esp+0x2C], 1
        public_475122 : nop
        test cl, 0x10
        je public_475131
        cmp dword ptr ds : [eax+0xC], ebx
        je public_475131
        mov byte ptr ss : [esp+0x38], 1
        public_475131 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_476080
        mov al, byte ptr ss : [esp+0x26]
        add esp, 0x14
        test al, 2
        je public_47530f
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edx], ebx
        je public_47530f
/*FIXUP push offset public_5d09c8 @0x47516a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d09c8
/*FIXUP push offset public_66fc60 @0x47516f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 8
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_66fc60 @0x47517f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x47518a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call public_57da40
        add esp, 0x18
        jmp public_47530f
        public_4751ad : nop
        call public_54baf0
        mov esi, eax
        cmp esi, ebx
        je public_47530f
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4751cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edx
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4751d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4751dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70b4]
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4751f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x561
        push edx
        call public_4347e0
        mov ebp, dword ptr ds : [public_5c70ac]
/*FIXUP push offset public_66dc60 @0x47520b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475210*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        mov eax, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [esi]
        add esp, 0x30
        push eax
/*FIXUP push offset public_66dc60 @0x475222*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        call public_48dc10
/*FIXUP push offset public_66dc60 @0x475231*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475236*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        mov ebp, dword ptr ds : [public_5c71c8]
        add esp, 0x14
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_66fc60 @0x47524c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x475257*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edx, dword ptr ds : [esi]
        add esp, 0x10
        push ebx
        push ebx
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        push edi
        call public_4a1b50
        mov esi, eax
        add esp, 0x14
        cmp esi, ebx
        je public_47530f
        mov edi, dword ptr ds : [public_5c70b4]
/*FIXUP push offset public_5d0a08 @0x475288*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
/*FIXUP push offset public_66fc60 @0x47528d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_66fc60 @0x47529d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4752a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edx, dword ptr ds : [esi]
        add esp, 0x10
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        push eax
        call public_57da40
/*FIXUP push offset public_5d09c8 @0x4752ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d09c8
/*FIXUP push offset public_66fc60 @0x4752cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x10
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset public_66fc60 @0x4752df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4752ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edx, dword ptr ds : [esi]
        add esp, 0x10
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        push eax
        call public_57da40
        add esp, 8
        public_47530f : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ds : [eax+0x330]
        mov ecx, esi
        call public_57b370
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_57b3e0
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x1E0], 0xFFFFFFFF
        mov ebx, eax
        je public_475378
        public_475343 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_475343
        mov eax, dword ptr ss : [esp+0x1C]
        public_475378 : nop
        push eax
        call public_5b7e1d
        mov esi, dword ptr ss : [esp+0x40]
        add esp, 4
        public_475385 : nop
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x60]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x1EC]
        mov eax, dword ptr ss : [esp+0x1E8]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        mov ecx, dword ptr ss : [esp+0x1D8]
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x1D4
        ret 8
        UNREACHABLE_TRAP(0x474b90)
    }
}

#undef public_474c0c
#undef public_474d3e
#undef public_474d4f
#undef public_474d73
#undef public_474de7
#undef public_474e25
#undef public_474f51
#undef public_474f6f
#undef public_474f7e
#undef public_474fc1
#undef public_474fd0
#undef public_474fee
#undef public_474ffd
#undef public_47503c
#undef public_47504f
#undef public_475068
#undef public_475074
#undef public_47508a
#undef public_475099
#undef public_475113
#undef public_475122
#undef public_475131
#undef public_4751ad
#undef public_47530f
#undef public_475343
#undef public_475378
#undef public_475385
