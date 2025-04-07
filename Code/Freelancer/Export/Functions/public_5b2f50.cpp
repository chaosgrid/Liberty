#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4246e0);
CLANG_FORWARD_PROC_SYMBOL(public_4247c0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_471f30);
CLANG_FORWARD_PROC_SYMBOL(public_4d9980);
CLANG_FORWARD_PROC_SYMBOL(public_5621a0);
CLANG_FORWARD_PROC_SYMBOL(public_577490);
CLANG_FORWARD_PROC_SYMBOL(public_57d800);
CLANG_FORWARD_PROC_SYMBOL(public_5a5910);
CLANG_FORWARD_PROC_SYMBOL(public_5a82d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b08a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b09b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b00);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b1300);
CLANG_FORWARD_PROC_SYMBOL(public_5b20a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2190);
CLANG_FORWARD_PROC_SYMBOL(public_5b2360);
CLANG_FORWARD_PROC_SYMBOL(public_5b2570);
CLANG_FORWARD_PROC_SYMBOL(public_5b27c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2800);
CLANG_FORWARD_PROC_SYMBOL(public_5b2890);
CLANG_FORWARD_PROC_SYMBOL(public_5b2a30);
CLANG_FORWARD_PROC_SYMBOL(public_5b2cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2d60);
CLANG_FORWARD_PROC_SYMBOL(public_5b2f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b33f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3400);
CLANG_FORWARD_PROC_SYMBOL(public_5b34b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b8082);

#define public_5b309c _public_5b309c
#define public_5b30bc _public_5b30bc
#define public_5b30e2 _public_5b30e2
#define public_5b316a _public_5b316a
#define public_5b3180 _public_5b3180
#define public_5b322b _public_5b322b
#define public_5b3324 _public_5b3324
#define public_5b3342 _public_5b3342
#define public_5b3382 _public_5b3382
#define public_5b3385 _public_5b3385
#define public_5b33ca _public_5b33ca

PROC_DECLARE(0x5b2f50, internal_5b2f50, public_5b2f50);
extern "C" NAKED register_t __cdecl internal_5b2f50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_5e6de0 @0x5b2f55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6de0
/*FIXUP push offset _public_5b8082 @0x5b2f5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b8082
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x610
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov edi, 1
        mov dword ptr ss : [ebp-0x1C], edi
        wait 
        xor ebx, ebx
        mov dword ptr ss : [ebp-4], ebx
/*FIXUP push offset public_5e6dcc @0x5b2f87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6dcc
        push ebx
        push ebx
        call dword ptr ds : [public_5c6f40]
        mov esi, eax
        mov dword ptr ss : [ebp-0x20], esi
        cmp esi, ebx
        je public_5b3385
        call dword ptr ds : [public_5c6f04]
        cmp eax, 0xB7
        je public_5b3385
        push 0x104
        lea eax, ss:[ebp-0x124]
        push eax
        push ebx
        call dword ptr ds : [public_5c6f28]
        push ebx
        push ebx
        lea ecx, ss:[ebp-0x228]
        push ecx
        lea edx, ss:[ebp-0x22C]
        push edx
        lea eax, ss:[ebp-0x124]
        push eax
        call dword ptr ds : [public_5c717c]
        push ebx
        push ebx
        lea ecx, ss:[ebp-0x228]
        push ecx
        lea edx, ss:[ebp-0x22C]
        push edx
        lea eax, ss:[ebp-0x330]
        push eax
        call dword ptr ds : [public_5c70b8]
        add esp, 0x28
        lea ecx, ss:[ebp-0x330]
        push ecx
        call dword ptr ds : [public_5c6f78]
        push ebx
/*FIXUP push offset public_5e6624 @0x5b3010*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6624
        call dword ptr ds : [public_5c70d0]
        add esp, 8
        test eax, eax
        je public_5b30bc
        mov ecx, 0x11
        xor eax, eax
        lea edi, ss:[ebp-0x374]
        rep stosd
        mov dword ptr ss : [ebp-0x374], 0x44
        xor edx, edx
        mov dword ptr ss : [ebp-0x384], edx
        mov dword ptr ss : [ebp-0x380], edx
        mov dword ptr ss : [ebp-0x37C], edx
        mov dword ptr ss : [ebp-0x378], edx
        lea eax, ss:[ebp-0x384]
        push eax
        lea ecx, ss:[ebp-0x374]
        push ecx
        push ebx
        push ebx
        push 0x20
        push ebx
        push ebx
        push ebx
        push ebx
/*FIXUP push offset public_5e6654 @0x5b306f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6654
        call dword ptr ds : [public_5c6f18]
        mov dword ptr ss : [ebp-0x388], eax
        cmp eax, ebx
        je public_5b309c
        mov edx, dword ptr ss : [ebp-0x384]
        push edx
        mov esi, dword ptr ds : [public_5c6ef8]
        call esi
        mov eax, dword ptr ss : [ebp-0x380]
        push eax
        call esi
        public_5b309c : nop
        wait 
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov eax, 1
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_5b30bc : nop
        call public_5b2d60
        test al, al
        jne public_5b30e2
        wait 
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov eax, edi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_5b30e2 : nop
        mov ecx, dword ptr ds : [public_5c6dc0]
        mov dword ptr ds : [ecx], offset _public_5b08a0
        mov edx, dword ptr ds : [public_5c6dbc]
        mov dword ptr ds : [edx], offset _public_5b09b0
        push ebx
        call dword ptr ds : [public_5c7300]
/*FIXUP push offset _public_5b2190 @0x5b3101*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b2190
        call public_5b7e6c
        add esp, 4
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_67eca4], eax
/*FIXUP push offset public_5e6dbc @0x5b3116*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6dbc
        call dword ptr ds : [public_5c6f00]
        mov dword ptr ds : [public_67eca8], eax
        push eax
        call public_57d800
        lea ecx, ss:[ebp-0x38C]
        push ecx
        lea edx, ss:[ebp-0x390]
        push edx
        lea eax, ss:[ebp-0x394]
        push eax
        lea ecx, ss:[ebp-0x124]
        push ecx
        call dword ptr ds : [public_5c6d20]
        add esp, 0x14
        mov dword ptr ss : [ebp-0x398], eax
        cmp eax, ebx
        jne public_5b316a
/*FIXUP push offset public_5e6da4 @0x5b315b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6da4
        call public_5a5910
        add esp, 4
        jmp public_5b3180
        public_5b316a : nop
        mov dword ptr ss : [ebp-0x394], edi
        mov dword ptr ss : [ebp-0x390], ebx
        mov dword ptr ss : [ebp-0x38C], 0xB
        public_5b3180 : nop
        mov edx, dword ptr ss : [ebp-0x38C]
        push edx
        mov eax, dword ptr ss : [ebp-0x390]
        push eax
        mov ecx, dword ptr ss : [ebp-0x394]
        push ecx
        call public_5b34b0
        add esp, 0xC
        mov dword ptr ds : [public_67ecb8], eax
        mov dword ptr ss : [ebp-0x39C], ebx
        lea ecx, ss:[ebp-0x5E0]
        call public_5b33f0
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        lea ecx, ss:[ebp-0x5E0]
        call public_5b3400
        lea eax, ss:[ebp-0x5E0]
        push eax
        call public_5b2cb0
        add esp, 4
        lea ecx, ss:[ebp-0x5E0]
        push ecx
        mov ecx, offset public_679bc0
        call public_5621a0
/*FIXUP push offset _public_5b0b00 @0x5b31e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b0b00
        mov ecx, offset public_679d00
        call public_4d9980
        push eax
        call dword ptr ds : [public_5c6ce4]
        add esp, 8
        call public_5b2800
        mov ecx, offset public_679d00
        call public_4d9980
        push eax
        lea edx, ss:[ebp-0x5E0]
        push edx
        call public_5a82d0
        add esp, 8
        cmp byte ptr ds : [public_67ecbc], bl
        je public_5b322b
        push edi
        call public_5b27c0
        add esp, 4
        public_5b322b : nop
        mov eax, dword ptr ds : [public_5e2038]
        mov dword ptr ss : [ebp-0x5EC], eax
        mov ecx, dword ptr ds : [public_5e203c]
        mov dword ptr ss : [ebp-0x5E8], ecx
        mov dx, word ptr ds : [public_5e2040]
        mov word ptr ss : [ebp-0x5E4], dx
        mov al, byte ptr ds : [public_5e2042]
        mov byte ptr ss : [ebp-0x5E2], al
        mov dword ptr ss : [ebp-0x614], 8
        mov dword ptr ss : [ebp-0x610], offset _public_5b2570
        mov dword ptr ss : [ebp-0x60C], ebx
        mov dword ptr ss : [ebp-0x608], ebx
        mov eax, dword ptr ds : [public_67eca4]
        mov dword ptr ss : [ebp-0x604], eax
        push 0x67
        push eax
        call dword ptr ds : [public_5c7258]
        mov dword ptr ss : [ebp-0x600], eax
        push 0x7F00
        push ebx
        call dword ptr ds : [public_5c725c]
        mov dword ptr ss : [ebp-0x5FC], eax
        push 4
        call dword ptr ds : [public_5c6e10]
        mov dword ptr ss : [ebp-0x5F8], eax
        mov dword ptr ss : [ebp-0x5F4], ebx
        lea ecx, ss:[ebp-0x5EC]
        mov dword ptr ss : [ebp-0x5F0], ecx
        lea edx, ss:[ebp-0x614]
        push edx
        call dword ptr ds : [public_5c7284]
/*FIXUP push offset public_5e2038 @0x5b32d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2038
/*FIXUP push offset public_679bc0 @0x5b32d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
        lea eax, ss:[ebp-0x5EC]
        push eax
        call public_4246e0
        add esp, 0xC
        mov dword ptr ds : [public_67eca0], eax
        push ebx
        call dword ptr ds : [public_5c72c8]
        lea ecx, ss:[ebp-0x5E0]
        push ecx
        call public_5b1300
        add esp, 4
        test al, al
        je public_5b3382
        mov byte ptr ds : [public_67ecc8], 1
        cmp byte ptr ds : [public_67ecc9], bl
        je public_5b3324
        push ebx
        call public_471f30
        add esp, 4
        public_5b3324 : nop
        push ebx
        call public_5b20a0
        push eax
        call public_5b2a30
        mov dword ptr ds : [public_67ecac], eax
/*FIXUP push offset public_5e6d90 @0x5b3335*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6d90
        call public_577490
        add esp, 0xC
        public_5b3342 : nop
        call public_5b2360
        call public_42d680
        fstp qword ptr ss : [ebp-0x61C]
        lea edx, ss:[ebp-0x1C]
        push edx
        call public_5b0b60
        add esp, 4
        test al, al
        je public_5b3382
        cmp byte ptr ds : [public_615ba8], bl
        je public_5b3342
        mov eax, dword ptr ss : [ebp-0x618]
        push eax
        mov ecx, dword ptr ss : [ebp-0x61C]
        push ecx
        call public_5b2890
        add esp, 8
        jmp public_5b3342
        public_5b3382 : nop
        wait 
        jmp public_5b33ca
        public_5b3385 : nop
        push esi
        call dword ptr ds : [public_5c6ef8]
        wait 
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov eax, edi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x620], edx
        push 1
        call public_4247c0
        add esp, 4
        push 1
        call dword ptr ds : [public_5c72c8]
        xor eax, eax
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        public_5b33ca : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x5b2f50)
    }
}

#undef public_5b309c
#undef public_5b30bc
#undef public_5b30e2
#undef public_5b316a
#undef public_5b3180
#undef public_5b322b
#undef public_5b3324
#undef public_5b3342
#undef public_5b3382
#undef public_5b3385
#undef public_5b33ca
