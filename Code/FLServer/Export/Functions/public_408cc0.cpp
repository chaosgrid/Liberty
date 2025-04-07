#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408b70);
CLANG_FORWARD_PROC_SYMBOL(public_408cc0);
CLANG_FORWARD_PROC_SYMBOL(public_418594);
CLANG_FORWARD_PROC_SYMBOL(public_419452);

#define public_408d35 _public_408d35
#define public_408e73 _public_408e73
#define public_408e90 _public_408e90
#define public_408eea _public_408eea
#define public_408ef4 _public_408ef4
#define public_409004 _public_409004
#define public_40902c _public_40902c
#define public_409042 _public_409042
#define public_409051 _public_409051
#define public_409069 _public_409069
#define public_409075 _public_409075
#define public_409077 _public_409077
#define public_40907b _public_40907b
#define public_409081 _public_409081
#define public_40908b _public_40908b
#define public_409092 _public_409092
#define public_409095 _public_409095
#define public_40909c _public_40909c
#define public_4090a9 _public_4090a9
#define public_4090b0 _public_4090b0
#define public_4090ba _public_4090ba
#define public_4090c1 _public_4090c1
#define public_4090d7 _public_4090d7

PROC_DECLARE(0x408cc0, internal_408cc0, public_408cc0);
extern "C" NAKED register_t __cdecl internal_408cc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_41cb50 @0x408cc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41cb50
/*FIXUP push offset _public_419452 @0x408cca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419452
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
        je public_4090d7
        cmp eax, 0x80000004
        je public_4090d7
        mov dword ptr ss : [ebp-4], 0
        call public_418594
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_408d35
        mov eax, 1
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp+8]
        public_408d35 : nop
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
        call dword ptr ds : [public_41b1c0]
        mov edi, eax
        mov dword ptr ss : [ebp-0x2C], edi
        test edi, edi
        je public_4090c1
        push 0
        push 0
        push 0
        push 6
        push edi
        call dword ptr ds : [public_41b180]
        mov ebx, eax
        test ebx, ebx
        je public_4090ba
        mov ecx, 0x714
        xor eax, eax
        mov edi, ebx
        rep stosd
        push eax
        push eax
        push eax
        lea edx, ss:[ebp-0x28]
        push edx
        call dword ptr ds : [public_41b184]
        mov edi, eax
        mov dword ptr ss : [ebp-0x30], edi
        test edi, edi
        je public_4090b0
        push 0
        push 0
        push 0
        lea eax, ss:[ebp-0x28]
        push eax
        call dword ptr ds : [public_41b184]
        mov dword ptr ss : [ebp-0x34], eax
        test eax, eax
        je public_4090a9
        push 0
        push 0
        lea ecx, ss:[ebp-0x28]
        push ecx
        call dword ptr ds : [public_41b188]
        mov edi, eax
        mov dword ptr ss : [ebp-0x38], edi
        test edi, edi
        je public_40909c
        push 0
        push 1
        push 0x1F0FFF
        lea edx, ds:[ebx+0x24]
        push edx
        call dword ptr ds : [public_41b18c]
        push eax
        call dword ptr ds : [public_41b18c]
        push eax
        call dword ptr ds : [public_41b18c]
        push eax
        call dword ptr ds : [public_41b190]
        test eax, eax
        je public_409095
        call dword ptr ds : [public_41b194]
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_41b198]
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
/*FIXUP push offset public_426a90 @0x408e54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_426a90
        lea ecx, ds:[ebx+0x48]
        push ecx
        call dword ptr ds : [public_41b988]
        add esp, 8
        mov eax, offset public_425520
        lea esi, ds:[ebx+0x1148]
        sub esi, eax
        public_408e73 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi+eax], cl
        inc eax
        test cl, cl
        jne public_408e73
        mov eax, offset public_4254d8
        lea edx, ds:[ebx+0x1040]
        sub edx, eax
        lea ebx, ds:[ebx]
        public_408e90 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_408e90
        lea edx, ss:[ebp-0x3C]
        push edx
        push 1
        push 0
/*FIXUP push offset public_41cb0c @0x408ea2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41cb0c
        push 0x80000002
        call dword ptr ds : [public_41b000]
        test eax, eax
        jne public_408ef4
        mov dword ptr ss : [ebp-0x40], 4
        lea eax, ss:[ebp-0x40]
        push eax
        lea ecx, ss:[ebp-0x44]
        push ecx
        push 0
        push 0
/*FIXUP push offset public_4254d0 @0x408ec9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4254d0
        mov edx, dword ptr ss : [ebp-0x3C]
        push edx
        call dword ptr ds : [public_41b008]
        test eax, eax
        jne public_408eea
        mov eax, dword ptr ss : [ebp-0x44]
        add eax, 0x400
        mov dword ptr ds : [ebx+0x1144], eax
        public_408eea : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        push ecx
        call dword ptr ds : [public_41b004]
        public_408ef4 : nop
        mov dword ptr ds : [ebx+0x28], 0x100
        lea edi, ds:[ebx+0x1210]
        mov ecx, 5
        mov esi, offset public_4254b8
        rep movsd
        movsw 
        push 0x104
        lea edx, ss:[ebp-0x148]
        push edx
        push 0
        call dword ptr ds : [public_41b19c]
        push 0x104
        lea eax, ds:[ebx+0xB8]
        push eax
        push 0xFFFFFFFF
        lea ecx, ss:[ebp-0x148]
        push ecx
        push 0
        push 0xFDE9
        call dword ptr ds : [public_41b1b8]
        call public_408b70
/*FIXUP push offset public_426270 @0x408f4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_426270
        call dword ptr ds : [public_41b8f4]
        lea ecx, ds:[eax+eax+2]
        mov esi, offset public_426270
        lea edi, ds:[ebx+0x1418]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        call dword ptr ds : [public_41b050]
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
/*FIXUP push offset public_4254ac @0x408fad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4254ac
        lea edx, ss:[ebp-0x2A0]
        push edx
        call dword ptr ds : [public_41bc08]
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
/*FIXUP push offset public_4254a0 @0x408fe6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4254a0
        call dword ptr ds : [public_41b1b0]
        test eax, eax
        je public_40908b
        mov esi, 1
        mov edi, dword ptr ds : [public_41b1b4]
        public_409004 : nop
        push 0x4E20
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        call edi
        test eax, eax
        jne public_40902c
        push 1
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        call edi
        test eax, eax
        jne public_409081
        xor esi, esi
        cmp dword ptr ds : [ebx+0x2C], 0x10
        jne public_409081
        mov dword ptr ss : [ebp-0x1C], esi
        jmp public_409081
        public_40902c : nop
        push 0x4E20
        mov edx, dword ptr ss : [ebp-0x38]
        push edx
        call edi
        cmp eax, 0x102
        jne public_409042
        xor esi, esi
        jmp public_409081
        public_409042 : nop
        cmp eax, 0x80
        jne public_409051
        xor esi, esi
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        jmp public_40907b
        public_409051 : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        call edi
        test eax, eax
        je public_409069
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        call dword ptr ds : [public_41b1a0]
        jmp public_409075
        public_409069 : nop
        push 1
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call edi
        test eax, eax
        jne public_409077
        public_409075 : nop
        xor esi, esi
        public_409077 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        public_40907b : nop
        call dword ptr ds : [public_41b1a4]
        public_409081 : nop
        test esi, esi
        jne public_409004
        jmp public_409092
        public_40908b : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_409092 : nop
        mov edi, dword ptr ss : [ebp-0x38]
        public_409095 : nop
        push edi
        call dword ptr ds : [public_41b1bc]
        public_40909c : nop
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        call dword ptr ds : [public_41b1bc]
        mov edi, dword ptr ss : [ebp-0x30]
        public_4090a9 : nop
        push edi
        call dword ptr ds : [public_41b1bc]
        public_4090b0 : nop
        push ebx
        call dword ptr ds : [public_41b1a8]
        mov edi, dword ptr ss : [ebp-0x2C]
        public_4090ba : nop
        push edi
        call dword ptr ds : [public_41b1bc]
        public_4090c1 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        public_4090d7 : nop
        xor eax, eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x408cc0)
    }
}

#undef public_408d35
#undef public_408e73
#undef public_408e90
#undef public_408eea
#undef public_408ef4
#undef public_409004
#undef public_40902c
#undef public_409042
#undef public_409051
#undef public_409069
#undef public_409075
#undef public_409077
#undef public_40907b
#undef public_409081
#undef public_40908b
#undef public_409092
#undef public_409095
#undef public_40909c
#undef public_4090a9
#undef public_4090b0
#undef public_4090ba
#undef public_4090c1
#undef public_4090d7
