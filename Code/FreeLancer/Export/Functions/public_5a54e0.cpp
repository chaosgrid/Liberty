#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a5390);
CLANG_FORWARD_PROC_SYMBOL(public_5a54e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b738c);
CLANG_FORWARD_PROC_SYMBOL(public_5b8082);

#define public_5a5555 _public_5a5555
#define public_5a5693 _public_5a5693
#define public_5a56b0 _public_5a56b0
#define public_5a570a _public_5a570a
#define public_5a5714 _public_5a5714
#define public_5a5824 _public_5a5824
#define public_5a584c _public_5a584c
#define public_5a5862 _public_5a5862
#define public_5a5871 _public_5a5871
#define public_5a5889 _public_5a5889
#define public_5a5895 _public_5a5895
#define public_5a5897 _public_5a5897
#define public_5a589b _public_5a589b
#define public_5a58a1 _public_5a58a1
#define public_5a58ab _public_5a58ab
#define public_5a58b2 _public_5a58b2
#define public_5a58b5 _public_5a58b5
#define public_5a58bc _public_5a58bc
#define public_5a58c9 _public_5a58c9
#define public_5a58d0 _public_5a58d0
#define public_5a58da _public_5a58da
#define public_5a58e1 _public_5a58e1
#define public_5a58f7 _public_5a58f7

PROC_DECLARE(0x5a54e0, internal_5a54e0, public_5a54e0);
extern "C" NAKED register_t __cdecl internal_5a54e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_5e63e8 @0x5a54e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e63e8
/*FIXUP push offset _public_5b8082 @0x5a54ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b8082
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x290
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov dword ptr ss : [ebp-0x1C], 1
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        cmp eax, 0x80000003
        je public_5a58f7
        cmp eax, 0x80000004
        je public_5a58f7
        mov dword ptr ss : [ebp-4], 0
        call public_5b738c
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_5a5555
        mov eax, 1
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp+8]
        public_5a5555 : nop
        xor eax, eax
        mov dword ptr ss : [ebp-0x28], eax
        mov dword ptr ss : [ebp-0x24], eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x28], 0xC
        mov dword ptr ss : [ebp-0x20], 1
        push eax
        push 0x1C50
        push eax
        push 4
        lea ecx, ss:[ebp-0x28]
        push ecx
        push 0xFFFFFFFF
        call dword ptr ds : [public_5c6f4c]
        mov edi, eax
        mov dword ptr ss : [ebp-0x2C], edi
        test edi, edi
        je public_5a58e1
        push 0
        push 0
        push 0
        push 6
        push edi
        call dword ptr ds : [public_5c6f48]
        mov ebx, eax
        test ebx, ebx
        je public_5a58da
        mov ecx, 0x714
        xor eax, eax
        mov edi, ebx
        rep stosd
        push eax
        push eax
        push eax
        lea edx, ss:[ebp-0x28]
        push edx
        call dword ptr ds : [public_5c6f3c]
        mov edi, eax
        mov dword ptr ss : [ebp-0x30], edi
        test edi, edi
        je public_5a58d0
        push 0
        push 0
        push 0
        lea eax, ss:[ebp-0x28]
        push eax
        call dword ptr ds : [public_5c6f3c]
        mov dword ptr ss : [ebp-0x34], eax
        test eax, eax
        je public_5a58c9
        push 0
        push 0
        lea ecx, ss:[ebp-0x28]
        push ecx
        call dword ptr ds : [public_5c6f40]
        mov edi, eax
        mov dword ptr ss : [ebp-0x38], edi
        test edi, edi
        je public_5a58bc
        push 0
        push 1
        push 0x1F0FFF
        lea edx, ds:[ebx+0x24]
        push edx
        call dword ptr ds : [public_5c6f38]
        push eax
        call dword ptr ds : [public_5c6f38]
        push eax
        call dword ptr ds : [public_5c6f38]
        push eax
        call dword ptr ds : [public_5c6f34]
        test eax, eax
        je public_5a58b5
        call dword ptr ds : [public_5c6f30]
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_5c6f2c]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ds : [ebx+0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ebx+0x14], ecx
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx], 0x1C50
        mov dword ptr ds : [ebx+0x10], esi
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        mov dword ptr ds : [ebx+0x34], 1
        mov dword ptr ds : [ebx+0x3C], 0x10
/*FIXUP push offset public_67e670 @0x5a5674*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67e670
        lea ecx, ds:[ebx+0x48]
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        mov eax, offset public_5e63c0
        lea esi, ds:[ebx+0x1148]
        sub esi, eax
        public_5a5693 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi+eax], cl
        inc eax
        test cl, cl
        jne public_5a5693
        mov eax, offset public_5e6378
        lea edx, ds:[ebx+0x1040]
        sub edx, eax
        lea ebx, ds:[ebx]
        public_5a56b0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_5a56b0
        lea edx, ss:[ebp-0x3C]
        push edx
        push 1
        push 0
/*FIXUP push offset public_5e62e4 @0x5a56c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e62e4
        push 0x80000002
        call dword ptr ds : [public_5c6008]
        test eax, eax
        jne public_5a5714
        mov dword ptr ss : [ebp-0x40], 4
        lea eax, ss:[ebp-0x40]
        push eax
        lea ecx, ss:[ebp-0x44]
        push ecx
        push 0
        push 0
/*FIXUP push offset public_5e6370 @0x5a56e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6370
        mov edx, dword ptr ss : [ebp-0x3C]
        push edx
        call dword ptr ds : [public_5c6010]
        test eax, eax
        jne public_5a570a
        mov eax, dword ptr ss : [ebp-0x44]
        add eax, 0x400
        mov dword ptr ds : [ebx+0x1144], eax
        public_5a570a : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        push ecx
        call dword ptr ds : [public_5c6000]
        public_5a5714 : nop
        mov dword ptr ds : [ebx+0x28], 0x100
        lea edi, ds:[ebx+0x1210]
        mov ecx, 5
        mov esi, offset public_5e6358
        rep movsd
        movsw 
        push 0x104
        lea edx, ss:[ebp-0x148]
        push edx
        push 0
        call dword ptr ds : [public_5c6f28]
        push 0x104
        lea eax, ds:[ebx+0xB8]
        push eax
        push 0xFFFFFFFF
        lea ecx, ss:[ebp-0x148]
        push ecx
        push 0
        push 0xFDE9
        call dword ptr ds : [public_61641c]
        call public_5a5390
/*FIXUP push offset public_67de50 @0x5a576a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67de50
        call dword ptr ds : [public_5c71c8]
        lea ecx, ds:[eax+eax+2]
        mov esi, offset public_67de50
        lea edi, ds:[ebx+0x1418]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        call dword ptr ds : [public_5c6c78]
        mov ecx, 0x11
        xor eax, eax
        lea edi, ss:[ebp-0x18C]
        rep stosd
        mov dword ptr ss : [ebp-0x18C], 0x44
        mov dword ptr ss : [ebp-0x19C], eax
        mov dword ptr ss : [ebp-0x198], eax
        mov dword ptr ss : [ebp-0x194], eax
        mov dword ptr ss : [ebp-0x190], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        push ecx
/*FIXUP push offset public_5e634c @0x5a57cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e634c
        lea edx, ss:[ebp-0x2A0]
        push edx
        call dword ptr ds : [public_5c7238]
        add esp, 0x10
        lea eax, ss:[ebp-0x19C]
        push eax
        lea ecx, ss:[ebp-0x18C]
        push ecx
        push 0
        push 0
        push 0x4000020
        push 1
        push 0
        push 0
        lea edx, ss:[ebp-0x2A0]
        push edx
/*FIXUP push offset public_5e6340 @0x5a5806*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6340
        call dword ptr ds : [public_5c6f18]
        test eax, eax
        je public_5a58ab
        mov esi, 1
        mov edi, dword ptr ds : [public_5c6f14]
        public_5a5824 : nop
        push 0x4E20
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        call edi
        test eax, eax
        jne public_5a584c
        push 1
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        call edi
        test eax, eax
        jne public_5a58a1
        xor esi, esi
        cmp dword ptr ds : [ebx+0x2C], 0x10
        jne public_5a58a1
        mov dword ptr ss : [ebp-0x1C], esi
        jmp public_5a58a1
        public_5a584c : nop
        push 0x4E20
        mov edx, dword ptr ss : [ebp-0x38]
        push edx
        call edi
        cmp eax, 0x102
        jne public_5a5862
        xor esi, esi
        jmp public_5a58a1
        public_5a5862 : nop
        cmp eax, 0x80
        jne public_5a5871
        xor esi, esi
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        jmp public_5a589b
        public_5a5871 : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        call edi
        test eax, eax
        je public_5a5889
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        call dword ptr ds : [public_5c6f24]
        jmp public_5a5895
        public_5a5889 : nop
        push 1
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call edi
        test eax, eax
        jne public_5a5897
        public_5a5895 : nop
        xor esi, esi
        public_5a5897 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        public_5a589b : nop
        call dword ptr ds : [public_5c6f20]
        public_5a58a1 : nop
        test esi, esi
        jne public_5a5824
        jmp public_5a58b2
        public_5a58ab : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_5a58b2 : nop
        mov edi, dword ptr ss : [ebp-0x38]
        public_5a58b5 : nop
        push edi
        call dword ptr ds : [public_5c6ef8]
        public_5a58bc : nop
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        call dword ptr ds : [public_5c6ef8]
        mov edi, dword ptr ss : [ebp-0x30]
        public_5a58c9 : nop
        push edi
        call dword ptr ds : [public_5c6ef8]
        public_5a58d0 : nop
        push ebx
        call dword ptr ds : [public_5c6efc]
        mov edi, dword ptr ss : [ebp-0x2C]
        public_5a58da : nop
        push edi
        call dword ptr ds : [public_5c6ef8]
        public_5a58e1 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        public_5a58f7 : nop
        xor eax, eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x5a54e0)
    }
}

#undef public_5a5555
#undef public_5a5693
#undef public_5a56b0
#undef public_5a570a
#undef public_5a5714
#undef public_5a5824
#undef public_5a584c
#undef public_5a5862
#undef public_5a5871
#undef public_5a5889
#undef public_5a5895
#undef public_5a5897
#undef public_5a589b
#undef public_5a58a1
#undef public_5a58ab
#undef public_5a58b2
#undef public_5a58b5
#undef public_5a58bc
#undef public_5a58c9
#undef public_5a58d0
#undef public_5a58da
#undef public_5a58e1
#undef public_5a58f7
