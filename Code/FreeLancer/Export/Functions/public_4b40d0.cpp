#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b40d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4040);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4d50);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f50);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd088);

#define public_4b4103 _public_4b4103
#define public_4b4127 _public_4b4127
#define public_4b412d _public_4b412d
#define public_4b41c2 _public_4b41c2
#define public_4b4217 _public_4b4217
#define public_4b4231 _public_4b4231
#define public_4b4237 _public_4b4237
#define public_4b423b _public_4b423b
#define public_4b4250 _public_4b4250
#define public_4b4260 _public_4b4260
#define public_4b427a _public_4b427a
#define public_4b4282 _public_4b4282
#define public_4b4291 _public_4b4291
#define public_4b42a6 _public_4b42a6
#define public_4b42b7 _public_4b42b7
#define public_4b4300 _public_4b4300
#define public_4b432c _public_4b432c
#define public_4b4360 _public_4b4360
#define public_4b438b _public_4b438b
#define public_4b4394 _public_4b4394

PROC_DECLARE(0x4b40d0, internal_4b40d0, public_4b40d0);
extern "C" NAKED register_t __cdecl internal_4b40d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd088 @0x4b40d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd088
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x230
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0x334]
        xor ebx, ebx
        xor esi, esi
        xor ecx, ecx
        mov dword ptr ss : [esp+0x1C], ebp
        xor edx, edx
        public_4b4103 : nop
        cmp edi, ebx
        je public_4b412d
        mov eax, dword ptr ss : [ebp+0x338]
        sub eax, edi
        sar eax, 5
        cmp ecx, eax
        jae public_4b412d
        mov eax, dword ptr ss : [ebp+0x334]
        add eax, edx
        cmp byte ptr ds : [eax+0x1C], 0
        je public_4b4127
        add esi, dword ptr ds : [eax+0xC]
        public_4b4127 : nop
        inc ecx
        add edx, 0x20
        jmp public_4b4103
        public_4b412d : nop
        call public_4c4ce0
        cmp eax, esi
        jl public_4b4394
        push esi
        call public_4c4d50
        add esp, 4
        call public_4c3f00
        mov esi, eax
        mov al, byte ptr ds : [esi]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        call dword ptr ds : [public_5c640c]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        mov edi, dword ptr ds : [esi+4]
        mov ecx, esi
        call dword ptr ds : [public_5c63b8]
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x24]
        mov esi, eax
        call dword ptr ds : [public_5c63b4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c63b0]
        mov dword ptr ss : [esp+0x248], ebx
        call public_4c4060
        push eax
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6190]
        xor bl, bl
        xor eax, eax
        mov byte ptr ss : [esp+0x248], 1
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x18], eax
        public_4b41c2 : nop
        mov ecx, dword ptr ss : [ebp+0x334]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_4b4291
        mov eax, dword ptr ss : [ebp+0x338]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        sar eax, 5
        cmp ecx, eax
        jae public_4b4291
        mov edi, dword ptr ss : [ebp+0x334]
        mov ecx, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi+ecx+0x1C]
        add edi, ecx
        test al, al
        je public_4b423b
        mov eax, dword ptr ds : [edi]
        sub eax, 0
        je public_4b4282
        dec eax
        je public_4b4250
        dec eax
        jne public_4b423b
        mov ebp, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_4b4237
        public_4b4217 : nop
        mov ax, word ptr ds : [esi+0xA]
        cmp ax, word ptr ds : [edi+4]
        jne public_4b4231
        push 0x3F800000
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_5c6408]
        mov bl, 1
        public_4b4231 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_4b4217
        public_4b4237 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_4b423b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [esp+0x18], ecx
        add eax, 0x20
        jmp public_4b41c2
        public_4b4250 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_4b423b
        lea ebx, ds:[ebx]
        public_4b4260 : nop
        mov dx, word ptr ds : [eax+8]
        cmp dx, word ptr ds : [edi+4]
        jne public_4b427a
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0xC], 0x3F800000
        mov byte ptr ss : [esp+0x13], 1
        public_4b427a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_4b4260
        jmp public_4b423b
        public_4b4282 : nop
        push 0x3F800000
        call public_4c4f50
        add esp, 4
        jmp public_4b423b
        public_4b4291 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4b42a6
        lea eax, ss:[esp+0x20]
        push eax
        call public_4c3f10
        add esp, 4
        public_4b42a6 : nop
        test bl, bl
        je public_4b42b7
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_4c4040
        add esp, 4
        public_4b42b7 : nop
        push 0x476
        call public_4c4ce0
        push eax
        lea edx, ss:[esp+0x48]
        push edx
        call public_4779a0
        mov ecx, dword ptr ss : [ebp+0x47C]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea edx, ss:[esp+0x44]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x248], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_4b432c
        mov edi, edi
        public_4b4300 : nop
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6188]
        cmp dword ptr ss : [esp+0x14], esi
        jne public_4b4300
        mov eax, dword ptr ss : [esp+0x30]
        public_4b432c : nop
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x28]
        xor edi, edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x248], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_4b438b
        lea ebx, ds:[ebx]
        public_4b4360 : nop
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c63ac]
        cmp dword ptr ss : [esp+0x14], esi
        jne public_4b4360
        mov eax, dword ptr ss : [esp+0x24]
        public_4b438b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4b4394 : nop
        mov ecx, dword ptr ss : [esp+0x240]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x23C
        ret 
        UNREACHABLE_TRAP(0x4b40d0)
    }
}

#undef public_4b4103
#undef public_4b4127
#undef public_4b412d
#undef public_4b41c2
#undef public_4b4217
#undef public_4b4231
#undef public_4b4237
#undef public_4b423b
#undef public_4b4250
#undef public_4b4260
#undef public_4b427a
#undef public_4b4282
#undef public_4b4291
#undef public_4b42a6
#undef public_4b42b7
#undef public_4b4300
#undef public_4b432c
#undef public_4b4360
#undef public_4b438b
#undef public_4b4394
