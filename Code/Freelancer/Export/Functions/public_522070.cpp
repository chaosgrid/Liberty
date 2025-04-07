#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_4b6800);
CLANG_FORWARD_PROC_SYMBOL(public_522070);
CLANG_FORWARD_PROC_SYMBOL(public_524af0);
CLANG_FORWARD_PROC_SYMBOL(public_524cb0);
CLANG_FORWARD_PROC_SYMBOL(public_525c80);
CLANG_FORWARD_PROC_SYMBOL(public_5268a0);
CLANG_FORWARD_PROC_SYMBOL(public_526a40);
CLANG_FORWARD_PROC_SYMBOL(public_526c80);
CLANG_FORWARD_PROC_SYMBOL(public_526d20);
CLANG_FORWARD_PROC_SYMBOL(public_526f30);
CLANG_FORWARD_PROC_SYMBOL(public_527750);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_54d410);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c010b);

#define public_5220bc _public_5220bc
#define public_522120 _public_522120
#define public_52213e _public_52213e
#define public_522173 _public_522173
#define public_522177 _public_522177
#define public_52219a _public_52219a
#define public_522236 _public_522236
#define public_522256 _public_522256
#define public_5222d0 _public_5222d0
#define public_5222f4 _public_5222f4
#define public_52230b _public_52230b
#define public_522318 _public_522318
#define public_52233e _public_52233e
#define public_522353 _public_522353
#define public_522360 _public_522360
#define public_52236e _public_52236e
#define public_522375 _public_522375
#define public_522379 _public_522379
#define public_52237d _public_52237d
#define public_522394 _public_522394
#define public_5223b2 _public_5223b2
#define public_522408 _public_522408
#define public_522440 _public_522440
#define public_52245c _public_52245c

PROC_DECLARE(0x522070, internal_522070, public_522070);
extern "C" NAKED register_t __cdecl internal_522070()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c010b @0x522072*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c010b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD0
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x21C]
        test al, al
        push edi
        mov dword ptr ss : [esp+0xC], esi
        je public_5220bc
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_5220bc
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        call dword ptr ds : [eax+0x10]
        push eax
        call public_5553b0
        add esp, 0xC
        mov dword ptr ds : [esi+0xD4], eax
        public_5220bc : nop
        mov edi, dword ptr ss : [esp+0xE8]
        mov byte ptr ds : [esi+0x21C], 0
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+8]
        push 0x21
        mov dword ptr ss : [esp+0x2C], edx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_52245c
        fld dword ptr ss : [esp+0xEC]
        fadd dword ptr ds : [esi+0xD8]
        fst dword ptr ds : [esi+0xD8]
        fcomp dword ptr ds : [public_613848]
        fnstsw ax
        test ah, 0x41
        je public_522120
        mov al, byte ptr ds : [edi+0xBC]
        test al, al
        je public_52213e
        public_522120 : nop
        mov ecx, dword ptr ds : [esi+0xDC]
        test ecx, ecx
        mov dword ptr ds : [esi+0xD8], 0
        je public_52213e
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+8]
        public_52213e : nop
        push ebx
        push ebp
        push 0x1B
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5223b2
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5223b2
        call dword ptr ds : [public_5c6684]
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [esp+0x24], edi
        je public_52230b
        jmp public_522177
        public_522173 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_522177 : nop
        push edi
        lea eax, ss:[esp+0x1C]
        lea ebp, ds:[esi+8]
        push eax
        mov ecx, ebp
        call public_432240
        mov eax, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        je public_52219a
        add ebx, 0x10
        jmp public_5222f4
        public_52219a : nop
        lea ecx, ss:[esp+0x1F]
        push ecx
        xor ebx, ebx
        push ebx
        lea edx, ss:[esp+0x26]
        push edx
        lea ecx, ss:[esp+0x84]
        call public_4b6800
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x74], 0xFA
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x94]
        mov dword ptr ss : [esp+0xEC], ebx
        mov dword ptr ss : [esp+0x90], eax
        call public_526a40
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0xF0], 1
        call public_526d20
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0xE8], bl
        call public_524af0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0xEC], 2
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        mov ebx, ecx
        je public_522256
        public_522236 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x15C]
        lea ecx, ss:[esp+0x20]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        jne public_522236
        public_522256 : nop
        lea ecx, ss:[esp+0x78]
        call public_526c80
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xE8], 0xFFFFFFFF
        call public_5268a0
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        lea ebx, ds:[eax+0x10]
        call dword ptr ds : [public_5c6680]
        mov ebp, eax
        test ebp, ebp
        je public_5222d0
        mov ecx, ebp
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_5c667c]
        mov dword ptr ds : [ebx+4], eax
        lea esi, ss:[ebp+0xC]
        lea edi, ds:[ebx+8]
        mov ecx, 9
        rep movsd
        mov edi, dword ptr ss : [esp+0x24]
        add ebp, 0x30
        mov eax, dword ptr ss : [ebp]
        lea edx, ds:[ebx+0x2C]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [ebx+0x38], edx
        mov esi, ecx
        jmp public_5222f4
        nop 
/*FIXUP public_5222d0 : nop
        push offset public_5dc84c @0x5222d0*/
  FIXUP public_5222d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc84c
        push 0x31D
/*FIXUP push offset public_5dc47c @0x5222da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x5222e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_5222f4 : nop
        push edi
        mov ecx, ebx
        call public_524cb0
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        mov dword ptr ss : [esp+0x24], edi
        jne public_522173
        public_52230b : nop
        mov ebx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_52237d
        public_522318 : nop
        mov ecx, dword ptr ds : [eax+0x5C]
        test ecx, ecx
        jne public_52233e
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_433330
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+8]
        call public_526f30
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_522379
        public_52233e : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x61]
        test dl, dl
        jne public_522353
        push ecx
        call public_527750
        add esp, 4
        jmp public_522375
        public_522353 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_52236e
        nop 
        lea esp, ss:[esp]
        public_522360 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_522360
        public_52236e : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_522379
        mov eax, ecx
        public_522375 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_522379 : nop
        cmp eax, ebx
        jne public_522318
        public_52237d : nop
        mov edi, dword ptr ds : [esi+0x224]
        mov ebx, dword ptr ds : [esi+0x228]
        cmp edi, ebx
        je public_5223b2
        mov ebp, dword ptr ss : [esp+0xF4]
        public_522394 : nop
        mov edx, dword ptr ds : [esi+0xDC]
        mov eax, dword ptr ss : [esp+0xF0]
        mov ecx, dword ptr ds : [edi]
        push edx
        push ebp
        push eax
        call public_525c80
        add edi, 4
        cmp edi, ebx
        jne public_522394
        public_5223b2 : nop
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        pop ebp
        pop ebx
        je public_52245c
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_52245c
        push 0x2C
        call public_5792b0
        add esp, 4
        test eax, eax
        jle public_52245c
        push 0x2C
        call public_5792b0
        add esp, 4
        cmp eax, 3
        jge public_52245c
        mov al, byte ptr ds : [esi+0xF8]
        test al, al
        je public_522408
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[esi+0xFC]
        call public_54d410
        public_522408 : nop
        mov al, byte ptr ds : [esi+0x180]
        test al, al
        je public_52245c
        mov ecx, dword ptr ds : [esi+4]
        push 0x447A0000
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [public_5c6678]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [esi+0x188]
        mov esi, dword ptr ds : [esi+0x18C]
        cmp edi, esi
        je public_52245c
        lea esp, ss:[esp]
        public_522440 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x20]
        mov dword ptr ds : [eax+0x54], ecx
        mov ecx, dword ptr ds : [edi]
        push edx
        call public_54d410
        add edi, 4
        cmp edi, esi
        jne public_522440
        public_52245c : nop
        mov ecx, dword ptr ss : [esp+0xD8]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xDC
        ret 8
        UNREACHABLE_TRAP(0x522070)
    }
}

#undef public_5220bc
#undef public_522120
#undef public_52213e
#undef public_522173
#undef public_522177
#undef public_52219a
#undef public_522236
#undef public_522256
#undef public_5222d0
#undef public_5222f4
#undef public_52230b
#undef public_522318
#undef public_52233e
#undef public_522353
#undef public_522360
#undef public_52236e
#undef public_522375
#undef public_522379
#undef public_52237d
#undef public_522394
#undef public_5223b2
#undef public_522408
#undef public_522440
#undef public_52245c
