#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b38d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c59bf);

#define public_5b3990 _public_5b3990
#define public_5b39b5 _public_5b39b5
#define public_5b39e5 _public_5b39e5
#define public_5b39e9 _public_5b39e9
#define public_5b3a09 _public_5b3a09
#define public_5b3a20 _public_5b3a20
#define public_5b3a41 _public_5b3a41
#define public_5b3a69 _public_5b3a69
#define public_5b3a7c _public_5b3a7c
#define public_5b3ab0 _public_5b3ab0
#define public_5b3af0 _public_5b3af0
#define public_5b3b00 _public_5b3b00
#define public_5b3b08 _public_5b3b08
#define public_5b3b28 _public_5b3b28
#define public_5b3b2c _public_5b3b2c
#define public_5b3b31 _public_5b3b31
#define public_5b3b3b _public_5b3b3b
#define public_5b3b3f _public_5b3b3f
#define public_5b3b46 _public_5b3b46
#define public_5b3b5d _public_5b3b5d
#define public_5b3b9e _public_5b3b9e
#define public_5b3ba6 _public_5b3ba6
#define public_5b3bd3 _public_5b3bd3
#define public_5b3bfe _public_5b3bfe
#define public_5b3c1a _public_5b3c1a
#define public_5b3c34 _public_5b3c34
#define public_5b3c44 _public_5b3c44
#define public_5b3c4a _public_5b3c4a
#define public_5b3c5e _public_5b3c5e
#define public_5b3c83 _public_5b3c83
#define public_5b3c8f _public_5b3c8f
#define public_5b3c91 _public_5b3c91
#define public_5b3cdc _public_5b3cdc
#define public_5b3ce8 _public_5b3ce8
#define public_5b3d12 _public_5b3d12
#define public_5b3d18 _public_5b3d18
#define public_5b3d8a _public_5b3d8a
#define public_5b3d9b _public_5b3d9b
#define public_5b3db0 _public_5b3db0
#define public_5b3dd7 _public_5b3dd7
#define public_5b3e3c _public_5b3e3c
#define public_5b3e4b _public_5b3e4b
#define public_5b3e5a _public_5b3e5a
#define public_5b3e72 _public_5b3e72
#define public_5b3e91 _public_5b3e91
#define public_5b3e9a _public_5b3e9a

PROC_DECLARE(0x5b38d0, internal_5b38d0, public_5b38d0);
extern "C" NAKED register_t __cdecl internal_5b38d0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c59bf @0x5b38d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c59bf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1780
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x1584]
        push edi
        push eax
        call dword ptr ds : [public_5c6c00]
        mov ecx, dword ptr ss : [esp+0x17A4]
        xor esi, esi
        push esi
        push ecx
        lea edx, ss:[esp+0x1594]
        push edx
        lea eax, ss:[esp+0x169C]
        push esi
        push eax
        call dword ptr ds : [public_5c70b8]
        xor eax, eax
        mov ecx, 7
        mov edi, offset public_67ed10
        rep stosd
        xor bl, bl
        add esp, 0x18
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x12], bl
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_5c605c]
        push esi
        lea ecx, ss:[esp+0x1690]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x17A0], esi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5b3d18
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5b3c91
        mov esi, dword ptr ss : [esp+0x17A4]
        mov edi, dword ptr ds : [public_5c6d00]
        lea ecx, ds:[ecx]
/*FIXUP public_5b3990 : nop
        push offset public_5e6eb8 @0x5b3990*/
  FIXUP public_5b3990 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6eb8
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6050]
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_5b3a20
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5b3c4a
/*FIXUP public_5b39b5 : nop
        push offset public_5e6eb0 @0x5b39b5*/
  FIXUP public_5b39b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6eb0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_5b39e9
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcomp dword ptr ds : [public_5e6dfc]
        fnstsw ax
        test ah, 1
        jne public_5b39e5
        mov bl, 1
        jmp public_5b3a09
        public_5b39e5 : nop
        xor bl, bl
        jmp public_5b3a09
/*FIXUP public_5b39e9 : nop
        push offset public_5e6e9c @0x5b39e9*/
  FIXUP public_5b39e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e9c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5b3a09
        push 0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6034]
        mov byte ptr ds : [public_67a439], al
        public_5b3a09 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5b39b5
        mov byte ptr ss : [esp+0x12], bl
        jmp public_5b3c4a
/*FIXUP public_5b3a20 : nop
        push offset public_5e6e90 @0x5b3a20*/
  FIXUP public_5b3a20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e90
        call dword ptr ds : [public_5c6050]
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_5b3a7c
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5b3c4a
/*FIXUP public_5b3a41 : nop
        push offset public_5dcf88 @0x5b3a41*/
  FIXUP public_5b3a41 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf88
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5b3a69
        push 0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x14], eax
        public_5b3a69 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5b3a41
        jmp public_5b3c4a
/*FIXUP public_5b3a7c : nop
        push offset public_5e6e84 @0x5b3a7c*/
  FIXUP public_5b3a7c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e84
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_5b3ba6
        test bl, bl
        je public_5b3c5e
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5b3c4a
        lea esp, ss:[esp]
        public_5b3ab0 : nop
        test bl, bl
        je public_5b3c44
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c60b8]
        mov ebp, eax
        mov al, byte ptr ds : [public_67ed0c]
        test al, 1
        jne public_5b3af0
        lea edx, ss:[esp+0x13]
        or al, 1
        push edx
        mov ecx, offset public_67ed00
        mov byte ptr ds : [public_67ed0c], al
        call public_46ba60
/*FIXUP push offset _public_5b3640 @0x5b3ae3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        call public_5b7e6c
        add esp, 4
        public_5b3af0 : nop
        mov edx, dword ptr ds : [public_67ed04]
        mov edi, dword ptr ds : [edx]
        cmp edi, edx
        je public_5b3b46
        lea esp, ss:[esp]
        public_5b3b00 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax+4]
        mov eax, ebp
        public_5b3b08 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_5b3b2c
        test cl, cl
        je public_5b3b28
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_5b3b2c
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_5b3b08
        public_5b3b28 : nop
        xor eax, eax
        jmp public_5b3b31
        public_5b3b2c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_5b3b31 : nop
        test eax, eax
        je public_5b3b5d
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_5b3b00
        public_5b3b3b : nop
        mov bl, byte ptr ss : [esp+0x12]
        public_5b3b3f : nop
        mov esi, dword ptr ss : [esp+0x17A4]
        public_5b3b46 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5b3ab0
        jmp public_5b3c44
        public_5b3b5d : nop
        mov esi, dword ptr ds : [edi+8]
        test esi, esi
        je public_5b3b3b
        push 0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_5c8ba8]
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        fnstsw ax
        test ah, 1
        jne public_5b3b9e
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [edx]
        jmp public_5b3b3b
        public_5b3b9e : nop
        xor bl, bl
        mov byte ptr ss : [esp+0x12], bl
        jmp public_5b3b3f
/*FIXUP public_5b3ba6 : nop
        push offset public_5e6e7c @0x5b3ba6*/
  FIXUP public_5b3ba6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e7c
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_5b3c4a
        test esi, esi
        je public_5b3c4a
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5b3c4a
/*FIXUP public_5b3bd3 : nop
        push offset public_5e0af8 @0x5b3bd3*/
  FIXUP public_5b3bd3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0af8
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_5b3bfe
        push 0
        call edi
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [esi+8], eax
        call edi
        mov dword ptr ds : [esi+0xC], eax
        jmp public_5b3c34
/*FIXUP public_5b3bfe : nop
        push offset public_5e6e70 @0x5b3bfe*/
  FIXUP public_5b3bfe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e70
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_5b3c1a
        push 0
        call edi
        mov dword ptr ds : [esi+0x10], eax
        jmp public_5b3c34
/*FIXUP public_5b3c1a : nop
        push offset public_5e6e64 @0x5b3c1a*/
  FIXUP public_5b3c1a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e64
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5b3c34
        push 0
        lea ecx, ss:[esp+0x24]
        call edi
        mov dword ptr ds : [esi+0x14], eax
        public_5b3c34 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5b3bd3
        jmp public_5b3c4a
        public_5b3c44 : nop
        mov edi, dword ptr ds : [public_5c6d00]
        public_5b3c4a : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_5b3990
        jmp public_5b3c83
        public_5b3c5e : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e6e30 @0x5b3c64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e30
        push 0x127
/*FIXUP push offset public_5e6e04 @0x5b3c6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6e04
        mov eax, 0x100004
/*FIXUP push offset public_5c7688 @0x5b3c78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7688
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_5b3c83 : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x18], edx
        je public_5b3c8f
        xor bl, bl
        public_5b3c8f : nop
        xor esi, esi
        public_5b3c91 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6400]
        test bl, bl
        je public_5b3d18
        mov al, byte ptr ds : [public_67ed0c]
        test al, 1
        jne public_5b3cdc
        or al, 1
        mov byte ptr ds : [public_67ed0c], al
        mov al, byte ptr ss : [esp+0x13]
        push esi
        push esi
        mov ecx, offset public_67ed00
        mov byte ptr ds : [public_67ed00], al
        call public_42a7e0
/*FIXUP push offset _public_5b3640 @0x5b3cc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], esi
        call public_5b7e6c
        add esp, 4
        public_5b3cdc : nop
        mov edx, dword ptr ds : [public_67ed04]
        mov esi, dword ptr ds : [edx]
        cmp esi, edx
        je public_5b3d18
        public_5b3ce8 : nop
        mov ecx, dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_5b3d12
        fld dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        fst dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        fstp dword ptr ds : [ecx+0x14]
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [public_67ed04]
        public_5b3d12 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edx
        jne public_5b3ce8
        public_5b3d18 : nop
        lea ecx, ss:[esp+0x1448]
        mov dword ptr ss : [esp+0x1798], 1
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x17A0], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_5b3db0
        cmp dword ptr ss : [esp+0x145C], edi
        je public_5b3d9b
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, edi
        je public_5b3d8a
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1460], edi
        mov dword ptr ss : [esp+0x1464], edi
        public_5b3d8a : nop
        mov ecx, dword ptr ss : [esp+0x145C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x145C], edi
        public_5b3d9b : nop
        mov edx, dword ptr ss : [esp+0x1458]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        public_5b3db0 : nop
        mov eax, dword ptr ss : [esp+0x1460]
        test eax, eax
        mov edi, dword ptr ds : [public_5c71d8]
        je public_5b3dd7
        push eax
        call edi
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x1460], eax
        mov dword ptr ss : [esp+0x1464], eax
        public_5b3dd7 : nop
        push 1
        lea ecx, ss:[esp+0x144C]
        mov dword ptr ss : [esp+0x146C], 0
        mov byte ptr ss : [esp+0x179C], 1
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x17A0], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_5b3e5a
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_5b3e4b
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        je public_5b3e3c
        push eax
        call ebp
        xor eax, eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        public_5b3e3c : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call esi
        mov dword ptr ss : [esp+0x34], 0
        public_5b3e4b : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        public_5b3e5a : nop
        mov eax, dword ptr ss : [esp+0x38]
        xor esi, esi
        cmp eax, esi
        je public_5b3e72
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        public_5b3e72 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, esi
        mov dword ptr ss : [esp+0x40], esi
        je public_5b3e9a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_5b3e91
        cmp cl, 0xFF
        je public_5b3e91
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5b3e9a
        public_5b3e91 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5b3e9a : nop
        mov ecx, dword ptr ss : [esp+0x1790]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x178C
        ret 
        UNREACHABLE_TRAP(0x5b38d0)
    }
}

#undef public_5b3990
#undef public_5b39b5
#undef public_5b39e5
#undef public_5b39e9
#undef public_5b3a09
#undef public_5b3a20
#undef public_5b3a41
#undef public_5b3a69
#undef public_5b3a7c
#undef public_5b3ab0
#undef public_5b3af0
#undef public_5b3b00
#undef public_5b3b08
#undef public_5b3b28
#undef public_5b3b2c
#undef public_5b3b31
#undef public_5b3b3b
#undef public_5b3b3f
#undef public_5b3b46
#undef public_5b3b5d
#undef public_5b3b9e
#undef public_5b3ba6
#undef public_5b3bd3
#undef public_5b3bfe
#undef public_5b3c1a
#undef public_5b3c34
#undef public_5b3c44
#undef public_5b3c4a
#undef public_5b3c5e
#undef public_5b3c83
#undef public_5b3c8f
#undef public_5b3c91
#undef public_5b3cdc
#undef public_5b3ce8
#undef public_5b3d12
#undef public_5b3d18
#undef public_5b3d8a
#undef public_5b3d9b
#undef public_5b3db0
#undef public_5b3dd7
#undef public_5b3e3c
#undef public_5b3e4b
#undef public_5b3e5a
#undef public_5b3e72
#undef public_5b3e91
#undef public_5b3e9a
