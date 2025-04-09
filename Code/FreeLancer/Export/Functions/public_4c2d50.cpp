#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_46b450);
CLANG_FORWARD_PROC_SYMBOL(public_4a1ad0);
CLANG_FORWARD_PROC_SYMBOL(public_4bf620);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c1a10);
CLANG_FORWARD_PROC_SYMBOL(public_4c1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4c2800);
CLANG_FORWARD_PROC_SYMBOL(public_4c4640);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543320);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_4c2e0b _public_4c2e0b
#define public_4c2e3f _public_4c2e3f
#define public_4c2e81 _public_4c2e81
#define public_4c2eb0 _public_4c2eb0
#define public_4c2ec8 _public_4c2ec8
#define public_4c2ef7 _public_4c2ef7
#define public_4c2f0f _public_4c2f0f
#define public_4c2f6b _public_4c2f6b
#define public_4c2fa0 _public_4c2fa0
#define public_4c300d _public_4c300d
#define public_4c3091 _public_4c3091
#define public_4c309f _public_4c309f
#define public_4c311d _public_4c311d
#define public_4c3195 _public_4c3195
#define public_4c3211 _public_4c3211
#define public_4c32b0 _public_4c32b0
#define public_4c32ca _public_4c32ca
#define public_4c3318 _public_4c3318
#define public_4c3383 _public_4c3383
#define public_4c3402 _public_4c3402
#define public_4c3408 _public_4c3408
#define public_4c3443 _public_4c3443
#define public_4c3456 _public_4c3456
#define public_4c3471 _public_4c3471
#define public_4c3498 _public_4c3498
#define public_4c3500 _public_4c3500
#define public_4c3540 _public_4c3540
#define public_4c354f _public_4c354f
#define public_4c3559 _public_4c3559
#define public_4c3577 _public_4c3577
#define public_4c358c _public_4c358c
#define public_4c35bb _public_4c35bb
#define public_4c3677 _public_4c3677
#define public_4c36ab _public_4c36ab
#define public_4c36e2 _public_4c36e2
#define public_4c3705 _public_4c3705
#define public_4c3720 _public_4c3720
#define public_4c3732 _public_4c3732
#define public_4c374c _public_4c374c
#define public_4c3775 _public_4c3775
#define public_4c3791 _public_4c3791

PROC_DECLARE(0x4c2d50, internal_4c2d50, public_4c2d50);
extern "C" NAKED register_t __cdecl internal_4c2d50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x54
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x2D
        push ebx
        push esi
        push edi
        mov esi, ecx
        ja public_4c36ab
        je public_4c35bb
        cmp eax, 0x26
        je public_4c2e3f
        cmp eax, 0x2C
        jne public_4c3791
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x2F0]
        test eax, eax
        je public_4c3791
        cmp ecx, dword ptr ds : [eax+0x10]
        je public_4c3791
        mov cl, byte ptr ds : [ecx+0x330]
        mov esi, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [esi+0x330]
        shr cl, 2
        and cl, 1
        shl cl, 2
        mov bl, dl
        xor bl, cl
        and bl, 4
        xor bl, dl
        mov byte ptr ds : [esi+0x330], bl
        mov esi, dword ptr ds : [eax+0xC]
        mov dl, byte ptr ds : [esi+0x330]
        mov bl, dl
        xor bl, cl
        and bl, 4
        xor bl, dl
        mov byte ptr ds : [esi+0x330], bl
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x330]
        mov edx, 1
        or bl, dl
        mov byte ptr ds : [ecx+0x330], bl
        mov ecx, dword ptr ds : [eax+0xC]
        or byte ptr ds : [ecx+0x330], dl
        mov ecx, dword ptr ds : [eax+8]
        test byte ptr ds : [ecx+0x330], 0x40
        je public_4c2e0b
        mov edx, 2
        public_4c2e0b : nop
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ecx+0x70], edx
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_4c3791
        mov dword ptr ds : [eax+0x70], edx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c2e3f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ds : [esi+0x340]
        jne public_4c2e81
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x140]
        mov esi, dword ptr ds : [esi+0x340]
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        push 2
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c2e81 : nop
        cmp ecx, dword ptr ds : [esi+0x36C]
        jne public_4c2ec8
        mov eax, dword ptr ds : [esi+0x338]
        push 0
        push eax
        mov ecx, esi
        call public_4c2800
        mov eax, dword ptr ds : [esi+0x338]
        mov ecx, dword ptr ds : [eax+0x58]
        test ecx, ecx
        je public_4c2eb0
        mov byte ptr ds : [ecx], 0
        mov dword ptr ds : [eax+0x58], 0
        public_4c2eb0 : nop
        mov ecx, dword ptr ds : [esi+0x338]
        push 0xFFFFFFFF
        call public_4bf850
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c2ec8 : nop
        cmp ecx, dword ptr ds : [esi+0x380]
        jne public_4c2f0f
        mov ecx, dword ptr ds : [esi+0x330]
        push 0
        push ecx
        mov ecx, esi
        call public_4c2800
        mov eax, dword ptr ds : [esi+0x330]
        mov ecx, dword ptr ds : [eax+0x58]
        test ecx, ecx
        je public_4c2ef7
        mov byte ptr ds : [ecx], 0
        mov dword ptr ds : [eax+0x58], 0
        public_4c2ef7 : nop
        mov ecx, dword ptr ds : [esi+0x330]
        push 0xFFFFFFFF
        call public_4bf850
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c2f0f : nop
        cmp ecx, dword ptr ds : [esi+0x354]
        jne public_4c3456
        mov edi, dword ptr ds : [esi+0x428]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_4c300d
        mov edx, dword ptr ds : [esi+0x424]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x334]
        cmp eax, ecx
        mov eax, dword ptr ds : [esi+0x34C]
        mov edx, dword ptr ds : [eax+0x664]
        jne public_4c2fa0
        mov eax, dword ptr ds : [edi+0x14]
        cmp edx, eax
        jge public_4c3443
        sub eax, edx
        mov ebx, eax
        mov eax, dword ptr ds : [ecx+0x4C]
        sub eax, ebx
        push eax
        call public_4bf620
        test eax, eax
        jne public_4c2f6b
        xor edi, edi
        public_4c2f6b : nop
        mov ecx, dword ptr ds : [esi+0x338]
        mov edx, dword ptr ds : [ecx+0x4C]
        add edx, ebx
        push edx
        call public_4bf620
        mov edx, dword ptr ds : [esi+0x334]
        mov edx, dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        call dword ptr ds : [eax+0x148]
        jmp public_4c3443
        public_4c2fa0 : nop
        test edx, edx
        je public_4c3443
        mov ecx, dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_67ecd0]
        mov ebx, dword ptr ds : [eax]
        add ecx, edx
        mov edx, dword ptr ds : [public_673344]
        push ecx
        push edx
        mov ecx, eax
        call dword ptr ds : [ebx+0x148]
        mov ecx, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [esi+0x34C]
        mov edx, dword ptr ds : [ecx+0x4C]
        add edx, dword ptr ds : [eax+0x664]
        push edx
        call public_4bf620
        mov eax, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [eax+0x664]
        mov ecx, dword ptr ds : [esi+0x338]
        mov edx, dword ptr ds : [ecx+0x4C]
        neg eax
        add edx, eax
        push edx
        call public_4bf620
        test eax, eax
        jne public_4c3443
        xor edi, edi
        jmp public_4c3443
        public_4c300d : nop
        mov ecx, dword ptr ds : [esi+0x424]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [esi+0x334]
        jne public_4c3211
        mov ecx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [ecx+0x664]
        cmp eax, dword ptr ds : [edi+0x14]
        jge public_4c3443
        mov dl, byte ptr ds : [edi]
        mov byte ptr ss : [esp+0x40], dl
        mov ax, word ptr ds : [edi+2]
        mov word ptr ss : [esp+0x42], ax
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x44], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x48], eax
        mov al, byte ptr ds : [edi+0xC]
        mov byte ptr ss : [esp+0x4C], al
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x54], eax
        mov bl, byte ptr ds : [edi+0x18]
        mov byte ptr ss : [esp+0x58], bl
        mov ebx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x5C], ebx
        mov ecx, dword ptr ds : [ecx+0x664]
        mov ebx, dword ptr ds : [public_674a88]
        sub eax, ecx
        cmp edx, ebx
        jne public_4c3091
        mov dword ptr ds : [esi+0x40C], ecx
        jmp public_4c309f
        public_4c3091 : nop
        cmp edx, dword ptr ds : [public_674a8c]
        jne public_4c309f
        mov dword ptr ds : [esi+0x408], ecx
        public_4c309f : nop
        test eax, eax
        jle public_4c3443
        push eax
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6428]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x40]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x150]
        mov ebx, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ss : [esp+0x42]
        lea edi, ds:[ebx+0x20]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6370]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x42]
        push edx
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6438]
        mov ecx, edi
        call dword ptr ds : [public_5c6430]
        fstp qword ptr ds : [ebx+0x60]
        mov ecx, dword ptr ss : [esp+0x42]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6370]
        mov ecx, dword ptr ds : [ebx+0x30]
        mov edi, eax
        mov eax, dword ptr ds : [ebx+0x28]
        sub eax, ecx
        jns public_4c311d
        xor eax, eax
        public_4c311d : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        push 0xFFFFFFFF
        mov ecx, ebx
        call public_4bf850
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x338]
        neg edi
        sbb edi, edi
        and edi, ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6450]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov byte ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_5c63a0]
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        lea ecx, ds:[ebx+0x20]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_5c6434]
        lea ecx, ds:[ebx+0x20]
        call dword ptr ds : [public_5c6430]
        fstp qword ptr ds : [ebx+0x60]
        mov eax, dword ptr ds : [ebx+0x28]
        sub eax, dword ptr ds : [ebx+0x30]
        jns public_4c3195
        xor eax, eax
        public_4c3195 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        push 0xFFFFFFFF
        mov ecx, ebx
        call public_4bf850
        mov eax, dword ptr ds : [esi+0x42C]
        push 1
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4c3408
        mov ecx, eax
        call public_543320
        mov ecx, dword ptr ds : [esi+0x330]
        mov edx, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ds : [ecx+0x64]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [esi+0x334]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [edx+0x64]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [public_5c6440]
        fsubr qword ptr ds : [esi+0x3F0]
        fsub qword ptr ss : [esp+0x10]
        fadd qword ptr ss : [esp+0x18]
        jmp public_4c3402
        public_4c3211 : nop
        mov eax, dword ptr ds : [esi+0x34C]
        mov ecx, dword ptr ds : [eax+0x664]
        test ecx, ecx
        je public_4c3443
        mov cl, byte ptr ds : [edi]
        mov byte ptr ss : [esp+0x20], cl
        mov dx, word ptr ds : [edi+2]
        mov word ptr ss : [esp+0x22], dx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x28], edx
        mov cl, byte ptr ds : [edi+0xC]
        mov byte ptr ss : [esp+0x2C], cl
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x30], edx
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        mov dl, byte ptr ds : [edi+0x18]
        mov byte ptr ss : [esp+0x38], dl
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, dword ptr ds : [eax+0x664]
        push edx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6428]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        call dword ptr ds : [eax+0x14C]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_674a88]
        jne public_4c32b0
        mov eax, dword ptr ds : [esi+0x34C]
        mov ecx, dword ptr ds : [eax+0x664]
        add dword ptr ds : [esi+0x40C], ecx
        jmp public_4c32ca
        public_4c32b0 : nop
        cmp eax, dword ptr ds : [public_674a8c]
        jne public_4c32ca
        mov edx, dword ptr ds : [esi+0x34C]
        mov eax, dword ptr ds : [edx+0x664]
        add dword ptr ds : [esi+0x408], eax
        public_4c32ca : nop
        mov edi, dword ptr ds : [esi+0x334]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6450]
        mov edx, dword ptr ss : [esp+0x44]
        push edx
        mov byte ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        lea ebx, ds:[edi+0x20]
        mov ecx, ebx
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        call dword ptr ds : [public_5c6434]
        mov ecx, ebx
        call dword ptr ds : [public_5c6430]
        fstp qword ptr ds : [edi+0x60]
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, dword ptr ds : [edi+0x30]
        jns public_4c3318
        xor eax, eax
        public_4c3318 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4bf850
        mov edi, dword ptr ds : [esi+0x338]
        mov eax, dword ptr ss : [esp+0x22]
        lea ebx, ds:[edi+0x20]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c6370]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x22]
        push ecx
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6438]
        mov ecx, ebx
        call dword ptr ds : [public_5c6430]
        fstp qword ptr ds : [edi+0x60]
        mov eax, dword ptr ss : [esp+0x22]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c6370]
        mov ecx, dword ptr ds : [edi+0x30]
        mov ebx, eax
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, ecx
        jns public_4c3383
        xor eax, eax
        public_4c3383 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4bf850
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x42C]
        neg ebx
        sbb ebx, ebx
        and ebx, ecx
        push 1
        push eax
        mov edi, ebx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4c3408
        mov ecx, eax
        call public_543320
        mov ecx, dword ptr ds : [esi+0x330]
        mov edx, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ds : [ecx+0x64]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi+0x334]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov edx, dword ptr ds : [edx+0x64]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], edx
        call dword ptr ds : [public_5c6440]
        fsubr qword ptr ds : [esi+0x3F0]
        fsub qword ptr ss : [esp+0x18]
        fadd qword ptr ss : [esp+0x10]
        public_4c3402 : nop
        fstp qword ptr ds : [esi+0x3E8]
        public_4c3408 : nop
        mov eax, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [eax+0x64]
        mov eax, dword ptr ds : [esi+0x330]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x60]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        call public_4c4640
        fsub qword ptr ss : [esp+0x18]
        fadd qword ptr ss : [esp+0x10]
        fstp qword ptr ds : [esi+0x3C0]
        public_4c3443 : nop
        mov eax, dword ptr ds : [esi+0x424]
        mov ecx, dword ptr ds : [eax+4]
        xor eax, eax
        cmp edi, eax
        je public_4c3471
        mov byte ptr ds : [edi], al
        jmp public_4c3471
        public_4c3456 : nop
        cmp ecx, dword ptr ds : [esi+0x358]
        jne public_4c3498
        mov ecx, dword ptr ds : [esi+0x424]
        mov edx, dword ptr ds : [esi+0x428]
        mov ecx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov byte ptr ds : [edx], al
        public_4c3471 : nop
        push 0xFFFFFFFF
        mov dword ptr ds : [esi+0x424], eax
        mov dword ptr ds : [esi+0x428], eax
        call public_4bf850
        push 2
        mov ecx, esi
        call public_4c1ae0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c3498 : nop
        cmp ecx, dword ptr ds : [esi+0x41C]
        jne public_4c3500
        mov ecx, dword ptr ds : [esi+0x410]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x759
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        push 0xC0
        push 0
        push 0xFF
        push 0
        lea ecx, ss:[esp+0x20]
        call public_4a1ad0
        mov ecx, dword ptr ds : [esi+0x410]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x348], edx
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        call dword ptr ds : [eax+0x144]
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c3500 : nop
        mov eax, dword ptr ds : [ecx+0x2F0]
        xor edx, edx
        cmp eax, edx
        je public_4c3791
        cmp byte ptr ds : [eax+0x28], dl
        je public_4c3791
        cmp ecx, dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [eax+4]
        je public_4c3540
        cmp edi, edx
        je public_4c3791
        mov cl, byte ptr ds : [edi+0x5D]
        cmp cl, dl
        jne public_4c3540
        cmp edi, dword ptr ds : [esi+0x330]
        je public_4c3791
        cmp cl, dl
        je public_4c3577
        public_4c3540 : nop
        mov ecx, dword ptr ds : [edi+0x58]
        cmp ecx, edx
        mov eax, dword ptr ds : [eax+0x24]
        je public_4c354f
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [edi+0x58], edx
        public_4c354f : nop
        cmp eax, edx
        je public_4c3559
        mov dword ptr ds : [edi+0x58], eax
        mov byte ptr ds : [eax], 1
        public_4c3559 : nop
        push 1
        push edi
        mov ecx, esi
        call public_4c2800
        mov ecx, edi
        push 0xFFFFFFFF
        call public_4bf850
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c3577 : nop
        mov ecx, dword ptr ds : [esi+0x428]
        cmp dword ptr ds : [eax+0x24], ecx
        je public_4c3791
        cmp ecx, edx
        je public_4c358c
        mov byte ptr ds : [ecx], dl
        public_4c358c : nop
        mov dword ptr ds : [esi+0x424], eax
        mov eax, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [esi+0x428], eax
        push 0xFFFFFFFF
        mov ecx, edi
        mov byte ptr ds : [eax], 1
        call public_4bf850
        push 3
        mov ecx, esi
        call public_4c1ae0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c35bb : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x2F0]
        xor edi, edi
        cmp eax, edi
        je public_4c3791
        cmp ecx, dword ptr ds : [eax+0x10]
        je public_4c3791
        mov cl, byte ptr ds : [ecx+0x330]
        mov esi, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [esi+0x330]
        shr cl, 2
        and cl, 1
        shl cl, 2
        mov bl, dl
        xor bl, cl
        and bl, 4
        xor bl, dl
        mov byte ptr ds : [esi+0x330], bl
        mov esi, dword ptr ds : [eax+0xC]
        mov dl, byte ptr ds : [esi+0x330]
        mov bl, dl
        xor bl, cl
        and bl, 4
        xor bl, dl
        mov byte ptr ds : [esi+0x330], bl
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x330]
        mov dl, 0xFE
        and bl, dl
        mov byte ptr ds : [ecx+0x330], bl
        mov ecx, dword ptr ds : [eax+0xC]
        and byte ptr ds : [ecx+0x330], dl
        mov ecx, dword ptr ds : [eax+8]
        test byte ptr ds : [ecx+0x330], 0x40
        je public_4c3677
        mov edx, 2
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ecx+0x70], edx
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, edi
        je public_4c3791
        mov dword ptr ds : [eax+0x70], edx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c3677 : nop
        mov dword ptr ds : [ecx+0x70], edi
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edx+0x70], edi
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0x70], edi
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [edx+0x70], edi
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ecx+0x70], edi
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, edi
        je public_4c3791
        mov dword ptr ds : [eax+0x70], edi
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c36ab : nop
        cmp eax, 0x3E
        je public_4c374c
        cmp eax, 0xEF02
        jne public_4c3791
        mov al, byte ptr ds : [esi+0x435]
        test al, al
        je public_4c36e2
        mov ecx, dword ptr ds : [public_674aa0]
        test ecx, ecx
        je public_4c36e2
        mov al, byte ptr ds : [ecx+0x4D0]
        test al, al
        jne public_4c36e2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_4c36e2 : nop
        mov al, byte ptr ds : [esi+0x434]
        test al, al
        je public_4c3705
        mov ecx, dword ptr ds : [public_674b04]
        test ecx, ecx
        je public_4c3705
        mov al, byte ptr ds : [ecx+0x4D0]
        test al, al
        jne public_4c3705
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        public_4c3705 : nop
        push 0
        call public_46b450
        push 0
        push esi
        call public_59dd00
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        test eax, eax
        je public_4c3732
        mov edi, edi
        public_4c3720 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4c3720
        public_4c3732 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c374c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [esi+0x34C]
        jne public_4c3775
        mov eax, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [esi+0x364], eax
        je public_4c3791
        push eax
        mov ecx, esi
        call public_4c1a10
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_4c3775 : nop
        mov ecx, dword ptr ds : [eax+0x2F0]
        test ecx, ecx
        je public_4c3791
        mov eax, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [ecx+0x2C], eax
        je public_4c3791
        push 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x2C], eax
        call public_4bf850
        public_4c3791 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x4c2d50)
    }
}

#undef public_4c2e0b
#undef public_4c2e3f
#undef public_4c2e81
#undef public_4c2eb0
#undef public_4c2ec8
#undef public_4c2ef7
#undef public_4c2f0f
#undef public_4c2f6b
#undef public_4c2fa0
#undef public_4c300d
#undef public_4c3091
#undef public_4c309f
#undef public_4c311d
#undef public_4c3195
#undef public_4c3211
#undef public_4c32b0
#undef public_4c32ca
#undef public_4c3318
#undef public_4c3383
#undef public_4c3402
#undef public_4c3408
#undef public_4c3443
#undef public_4c3456
#undef public_4c3471
#undef public_4c3498
#undef public_4c3500
#undef public_4c3540
#undef public_4c354f
#undef public_4c3559
#undef public_4c3577
#undef public_4c358c
#undef public_4c35bb
#undef public_4c3677
#undef public_4c36ab
#undef public_4c36e2
#undef public_4c3705
#undef public_4c3720
#undef public_4c3732
#undef public_4c374c
#undef public_4c3775
#undef public_4c3791
