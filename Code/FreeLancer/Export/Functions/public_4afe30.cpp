#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3680);
CLANG_FORWARD_PROC_SYMBOL(public_4afd80);
CLANG_FORWARD_PROC_SYMBOL(public_4afe30);
CLANG_FORWARD_PROC_SYMBOL(public_5b40f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcf6f);

#define public_4afeb1 _public_4afeb1
#define public_4afec6 _public_4afec6
#define public_4aff00 _public_4aff00
#define public_4aff6f _public_4aff6f
#define public_4aff87 _public_4aff87
#define public_4affa0 _public_4affa0
#define public_4affe1 _public_4affe1
#define public_4b0014 _public_4b0014
#define public_4b0083 _public_4b0083
#define public_4b009b _public_4b009b
#define public_4b00b0 _public_4b00b0
#define public_4b0103 _public_4b0103
#define public_4b0136 _public_4b0136
#define public_4b01a5 _public_4b01a5
#define public_4b01bd _public_4b01bd
#define public_4b01d2 _public_4b01d2
#define public_4b0222 _public_4b0222
#define public_4b0237 _public_4b0237
#define public_4b0251 _public_4b0251
#define public_4b02ec _public_4b02ec
#define public_4b02fd _public_4b02fd
#define public_4b030e _public_4b030e
#define public_4b0331 _public_4b0331

PROC_DECLARE(0x4afe30, internal_4afe30, public_4afe30);
extern "C" NAKED register_t __cdecl internal_4afe30()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bcf6f @0x4afe38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcf6f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1600
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c605c]
        mov ebp, dword ptr ss : [esp+0x1620]
        xor ebx, ebx
        push ebx
        push ebp
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x1620], ebx
        call dword ptr ds : [public_5c6058]
        or esi, 0xFFFFFFFF
        cmp al, bl
        mov byte ptr ss : [esp+0x17], al
        jne public_4afeb1
        push ebp
        push 0x9F5
/*FIXUP push offset public_5d50e8 @0x4afe92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d50e8
        mov eax, 0x100001
/*FIXUP push offset public_5d50c0 @0x4afe9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d50c0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_4b0251
        public_4afeb1 : nop
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_4b0237
/*FIXUP public_4afec6 : nop
        push offset public_5d5158 @0x4afec6*/
  FIXUP public_4afec6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5158
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4affe1
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4aff87
        lea esp, ss:[esp]
/*FIXUP public_4aff00 : nop
        push offset public_5d5150 @0x4aff00*/
  FIXUP public_4aff00 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5150
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4aff6f
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x32E]
        lea edx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x54], esi
        mov dword ptr ss : [esp+0x58], esi
        mov byte ptr ss : [esp+0x5C], bl
        push ecx
        push edx
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x65], bl
        mov byte ptr ss : [esp+0x66], bl
        mov dword ptr ss : [esp+0x58], esi
        call public_4afd80
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ds:[edi+0x504]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_4a3680
        public_4aff6f : nop
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4aff00
        cmp dword ptr ss : [esp+0x10], 0xE
        jg public_4affe1
        public_4aff87 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xF
        sub eax, ecx
        lea ebp, ds:[edi+0x504]
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_4affa0 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x60]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x6C], esi
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x78], esi
        mov dword ptr ss : [esp+0x7C], esi
        mov byte ptr ss : [esp+0x80], bl
        mov byte ptr ss : [esp+0x81], bl
        mov byte ptr ss : [esp+0x82], bl
        mov dword ptr ss : [esp+0x74], esi
        call public_4a3680
        dec dword ptr ss : [esp+0x10]
        jne public_4affa0
/*FIXUP public_4affe1 : nop
        push offset public_5d5148 @0x4affe1*/
  FIXUP public_4affe1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5148
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4b0103
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4b009b
/*FIXUP public_4b0014 : nop
        push offset public_5d5150 @0x4b0014*/
  FIXUP public_4b0014 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5150
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4b0083
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x32E]
        lea eax, ss:[esp+0xA8]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        push edx
        push eax
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], bl
        mov byte ptr ss : [esp+0x4E], bl
        mov dword ptr ss : [esp+0x40], esi
        call public_4afd80
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ds:[edi+0x524]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_4a3680
        public_4b0083 : nop
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4b0014
        cmp dword ptr ss : [esp+0x10], 0xE
        jg public_4b0103
        public_4b009b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xF
        sub eax, ecx
        lea ebp, ds:[edi+0x524]
        mov dword ptr ss : [esp+0x10], eax
        public_4b00b0 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x90]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x9C], esi
        mov dword ptr ss : [esp+0xA0], esi
        mov dword ptr ss : [esp+0xA8], esi
        mov dword ptr ss : [esp+0xAC], esi
        mov byte ptr ss : [esp+0xB0], bl
        mov byte ptr ss : [esp+0xB1], bl
        mov byte ptr ss : [esp+0xB2], bl
        mov dword ptr ss : [esp+0xA4], esi
        call public_4a3680
        dec dword ptr ss : [esp+0x10]
        jne public_4b00b0
/*FIXUP public_4b0103 : nop
        push offset public_5d5140 @0x4b0103*/
  FIXUP public_4b0103 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5140
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4b0222
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4b01bd
/*FIXUP public_4b0136 : nop
        push offset public_5d5150 @0x4b0136*/
  FIXUP public_4b0136 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5150
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4b01a5
        xor edx, edx
        mov dl, byte ptr ds : [edi+0x32E]
        lea eax, ss:[esp+0xA8]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        push edx
        push eax
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov dword ptr ss : [esp+0x28], esi
        call public_4afd80
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[edi+0x544]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_4a3680
        public_4b01a5 : nop
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4b0136
        cmp dword ptr ss : [esp+0x10], 0xE
        jg public_4b0222
        public_4b01bd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0xF
        sub eax, ecx
        lea ebp, ds:[edi+0x544]
        mov dword ptr ss : [esp+0x10], eax
        public_4b01d2 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x78]
        push ecx
        push 1
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x84], esi
        mov dword ptr ss : [esp+0x88], esi
        mov dword ptr ss : [esp+0x90], esi
        mov dword ptr ss : [esp+0x94], esi
        mov byte ptr ss : [esp+0x98], bl
        mov byte ptr ss : [esp+0x99], bl
        mov byte ptr ss : [esp+0x9A], bl
        mov dword ptr ss : [esp+0x8C], esi
        call public_4a3680
        dec dword ptr ss : [esp+0x10]
        jne public_4b01d2
        public_4b0222 : nop
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4afec6
        public_4b0237 : nop
        lea ecx, ss:[esp+0xA8]
        call dword ptr ds : [public_5c6400]
        cmp byte ptr ds : [edi+0x32E], bl
        je public_4b0251
        call public_5b40f0
        public_4b0251 : nop
        lea edx, ss:[esp+0x14D0]
        mov dword ptr ss : [esp+0x1618], 1
        mov dword ptr ss : [esp+0x10], edx
        lea ecx, ss:[esp+0x14D0]
        mov byte ptr ss : [esp+0x1618], 2
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x14D4]
        mov byte ptr ss : [esp+0x161C], 1
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x1620], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0xB8], esi
        je public_4b030e
        cmp dword ptr ss : [esp+0xBC], ebx
        mov edi, dword ptr ds : [public_5c6ef8]
        je public_4b02fd
        mov eax, dword ptr ss : [esp+0xC0]
        cmp eax, ebx
        je public_4b02ec
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0xC0], ebx
        mov dword ptr ss : [esp+0xC4], ebx
        public_4b02ec : nop
        mov edx, dword ptr ss : [esp+0xBC]
        push edx
        call edi
        mov dword ptr ss : [esp+0xBC], ebx
        public_4b02fd : nop
        mov eax, dword ptr ss : [esp+0xB8]
        push eax
        call edi
        mov dword ptr ss : [esp+0xB8], esi
        public_4b030e : nop
        mov eax, dword ptr ss : [esp+0xC0]
        cmp eax, ebx
        je public_4b0331
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0xC0], ebx
        mov dword ptr ss : [esp+0xC4], ebx
        public_4b0331 : nop
        push 1
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0xCC], ebx
        mov dword ptr ss : [esp+0x161C], esi
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x1610]
        mov al, byte ptr ss : [esp+0x17]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x160C
        ret 4
        UNREACHABLE_TRAP(0x4afe30)
    }
}

#undef public_4afeb1
#undef public_4afec6
#undef public_4aff00
#undef public_4aff6f
#undef public_4aff87
#undef public_4affa0
#undef public_4affe1
#undef public_4b0014
#undef public_4b0083
#undef public_4b009b
#undef public_4b00b0
#undef public_4b0103
#undef public_4b0136
#undef public_4b01a5
#undef public_4b01bd
#undef public_4b01d2
#undef public_4b0222
#undef public_4b0237
#undef public_4b0251
#undef public_4b02ec
#undef public_4b02fd
#undef public_4b030e
#undef public_4b0331
