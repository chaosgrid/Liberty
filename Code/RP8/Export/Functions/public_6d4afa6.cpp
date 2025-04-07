#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ae5e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4af48);
CLANG_FORWARD_PROC_SYMBOL(public_6d4afa6);

#define public_6d4afd7 _public_6d4afd7
#define public_6d4b023 _public_6d4b023
#define public_6d4b082 _public_6d4b082
#define public_6d4b0ac _public_6d4b0ac
#define public_6d4b0af _public_6d4b0af
#define public_6d4b0d1 _public_6d4b0d1
#define public_6d4b0f6 _public_6d4b0f6
#define public_6d4b12a _public_6d4b12a
#define public_6d4b12c _public_6d4b12c
#define public_6d4b156 _public_6d4b156
#define public_6d4b186 _public_6d4b186
#define public_6d4b1ad _public_6d4b1ad
#define public_6d4b1b0 _public_6d4b1b0
#define public_6d4b1d0 _public_6d4b1d0
#define public_6d4b201 _public_6d4b201
#define public_6d4b22b _public_6d4b22b
#define public_6d4b22d _public_6d4b22d
#define public_6d4b240 _public_6d4b240
#define public_6d4b24c _public_6d4b24c
#define public_6d4b25e _public_6d4b25e
#define public_6d4b265 _public_6d4b265
#define public_6d4b295 _public_6d4b295
#define public_6d4b2bc _public_6d4b2bc
#define public_6d4b2bf _public_6d4b2bf
#define public_6d4b2df _public_6d4b2df
#define public_6d4b309 _public_6d4b309
#define public_6d4b30d _public_6d4b30d
#define public_6d4b315 _public_6d4b315
#define public_6d4b322 _public_6d4b322
#define public_6d4b33b _public_6d4b33b
#define public_6d4b36a _public_6d4b36a
#define public_6d4b36c _public_6d4b36c
#define public_6d4b36f _public_6d4b36f

PROC_DECLARE(0x6d4afa6, internal_6d4afa6, public_6d4afa6);
extern "C" NAKED register_t __cdecl internal_6d4afa6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0xFC], 0
        push ebx
        mov ebx, dword ptr ds : [ecx+0x194]
        je public_6d4afd7
        cmp dword ptr ds : [ebx+0x30], 0
        jne public_6d4afd7
        push ecx
        call public_6d4af48
        test al, al
        pop ecx
        je public_6d4b36c
        mov ecx, dword ptr ss : [ebp+8]
        public_6d4afd7 : nop
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        and dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ds : [ecx+0x13C], 0
        push esi
        push edi
        lea esi, ds:[ebx+0x18]
        mov dword ptr ss : [ebp-0x34], esi
        lea esi, ds:[ebx+0x20]
        lea edi, ss:[ebp-0x2C]
        movsd 
        movsd 
        mov dword ptr ss : [ebp-0x50], eax
        mov eax, dword ptr ds : [ecx+0x178]
        movsd 
        mov dword ptr ss : [ebp-0x54], edx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp-0x4C], eax
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp-0x38], ecx
        movsd 
        jle public_6d4b33b
        lea esi, ds:[ecx+0x140]
        mov dword ptr ss : [ebp-0x10], esi
        public_6d4b023 : nop
        cmp eax, 8
        mov edi, dword ptr ss : [ebp-0xC]
        mov esi, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [esi+edi*4]
        mov dword ptr ss : [ebp-0x18], esi
        mov esi, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ecx+esi*4+0x124]
        mov ecx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [ebx+ecx*4+0x34]
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [ebx+ecx*4+0x44]
        mov dword ptr ss : [ebp-0x1C], esi
        mov dword ptr ss : [ebp-0x14], edi
        mov dword ptr ss : [ebp-8], ecx
        jge public_6d4b082
        push 0
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b36f
        mov eax, dword ptr ss : [ebp-0x3C]
        cmp eax, 8
        mov edx, dword ptr ss : [ebp-0x48]
        jge public_6d4b082
        xor ecx, ecx
        inc ecx
        jmp public_6d4b0af
        public_6d4b082 : nop
        lea ecx, ds:[eax-8]
        mov esi, edx
        sar esi, cl
        mov ecx, dword ptr ss : [ebp-4]
        and esi, 0xFF
        mov ecx, dword ptr ds : [ecx+esi*4+0xD4]
        test ecx, ecx
        je public_6d4b0ac
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp-4]
        movzx esi, byte ptr ds : [esi+ecx+0x4D4]
        jmp public_6d4b0d1
        public_6d4b0ac : nop
        push 9
        pop ecx
        public_6d4b0af : nop
        push ecx
        push dword ptr ss : [ebp-4]
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ae5e
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jl public_6d4b36f
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6d4b0d1 : nop
        test esi, esi
        je public_6d4b12c
        cmp eax, esi
        jge public_6d4b0f6
        push esi
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b36f
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6d4b0f6 : nop
        sub eax, esi
        mov ecx, esi
        mov dword ptr ss : [ebp-4], 1
        shl dword ptr ss : [ebp-4], cl
        dec dword ptr ss : [ebp-4]
        mov ecx, eax
        mov edi, edx
        sar edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        shl esi, 2
        and ecx, edi
        cmp ecx, dword ptr ds : [esi+public_6d61e80]
        mov edi, dword ptr ss : [ebp-0x14]
        jge public_6d4b12a
        mov esi, dword ptr ds : [esi+public_6d61ec0]
        add esi, ecx
        jmp public_6d4b12c
        public_6d4b12a : nop
        mov esi, ecx
        public_6d4b12c : nop
        cmp byte ptr ds : [edi+0x30], 0
        je public_6d4b25e
        mov ecx, dword ptr ss : [ebp-0x1C]
        lea ecx, ss:[ebp+ecx*4-0x2C]
        add dword ptr ds : [ecx], esi
        mov ecx, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [ebp-0x18]
        mov word ptr ds : [esi], cx
        xor ecx, ecx
        inc ecx
        cmp dword ptr ds : [edi+0x24], ecx
        jle public_6d4b25e
        mov dword ptr ss : [ebp-4], ecx
        public_6d4b156 : nop
        cmp eax, 8
        jge public_6d4b186
        push 0
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b36f
        mov eax, dword ptr ss : [ebp-0x3C]
        cmp eax, 8
        mov edx, dword ptr ss : [ebp-0x48]
        jge public_6d4b186
        mov ecx, dword ptr ss : [ebp-8]
        xor esi, esi
        inc esi
        jmp public_6d4b1b0
        public_6d4b186 : nop
        lea ecx, ds:[eax-8]
        mov esi, edx
        sar esi, cl
        mov ecx, dword ptr ss : [ebp-8]
        and esi, 0xFF
        mov edi, dword ptr ds : [ecx+esi*4+0xD4]
        test edi, edi
        je public_6d4b1ad
        sub eax, edi
        movzx edi, byte ptr ds : [esi+ecx+0x4D4]
        jmp public_6d4b1d0
        public_6d4b1ad : nop
        push 9
        pop esi
        public_6d4b1b0 : nop
        push esi
        push ecx
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ae5e
        mov edi, eax
        add esp, 0x14
        test edi, edi
        jl public_6d4b36f
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6d4b1d0 : nop
        mov ecx, edi
        sar ecx, 4
        and edi, 0xF
        mov dword ptr ss : [ebp-0x1C], edi
        je public_6d4b240
        add dword ptr ss : [ebp-4], ecx
        cmp eax, edi
        jge public_6d4b201
        push edi
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b36f
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6d4b201 : nop
        xor esi, esi
        sub eax, edi
        inc esi
        mov ecx, edi
        shl esi, cl
        mov ecx, eax
        mov edi, edx
        sar edi, cl
        mov ecx, dword ptr ss : [ebp-0x1C]
        dec esi
        shl ecx, 2
        and esi, edi
        cmp esi, dword ptr ds : [ecx+public_6d61e80]
        jge public_6d4b22b
        mov ecx, dword ptr ds : [ecx+public_6d61ec0]
        add ecx, esi
        jmp public_6d4b22d
        public_6d4b22b : nop
        mov ecx, esi
        public_6d4b22d : nop
        mov esi, dword ptr ss : [ebp-4]
        mov esi, dword ptr ds : [esi*4+public_6d61270]
        mov edi, dword ptr ss : [ebp-0x18]
        mov word ptr ds : [edi+esi*2], cx
        jmp public_6d4b24c
        public_6d4b240 : nop
        cmp ecx, 0xF
        jne public_6d4b322
        add dword ptr ss : [ebp-4], ecx
        public_6d4b24c : nop
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], 0x40
        jl public_6d4b156
        jmp public_6d4b322
        public_6d4b25e : nop
        mov dword ptr ss : [ebp-4], 1
        public_6d4b265 : nop
        cmp eax, 8
        jge public_6d4b295
        push 0
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b36f
        mov eax, dword ptr ss : [ebp-0x3C]
        cmp eax, 8
        mov edx, dword ptr ss : [ebp-0x48]
        jge public_6d4b295
        mov ecx, dword ptr ss : [ebp-8]
        xor esi, esi
        inc esi
        jmp public_6d4b2bf
        public_6d4b295 : nop
        lea ecx, ds:[eax-8]
        mov esi, edx
        sar esi, cl
        mov ecx, dword ptr ss : [ebp-8]
        and esi, 0xFF
        mov edi, dword ptr ds : [ecx+esi*4+0xD4]
        test edi, edi
        je public_6d4b2bc
        movzx esi, byte ptr ds : [esi+ecx+0x4D4]
        sub eax, edi
        jmp public_6d4b2df
        public_6d4b2bc : nop
        push 9
        pop esi
        public_6d4b2bf : nop
        push esi
        push ecx
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ae5e
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jl public_6d4b36f
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6d4b2df : nop
        mov ecx, esi
        sar ecx, 4
        and esi, 0xF
        je public_6d4b30d
        add dword ptr ss : [ebp-4], ecx
        cmp eax, esi
        jge public_6d4b309
        push esi
        push eax
        push edx
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b36f
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6d4b309 : nop
        sub eax, esi
        jmp public_6d4b315
        public_6d4b30d : nop
        cmp ecx, 0xF
        jne public_6d4b322
        add dword ptr ss : [ebp-4], ecx
        public_6d4b315 : nop
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], 0x40
        jl public_6d4b265
        public_6d4b322 : nop
        inc dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-0x10], 4
        cmp esi, dword ptr ds : [ecx+0x13C]
        jl public_6d4b023
        public_6d4b33b : nop
        mov esi, dword ptr ds : [ecx+0x14]
        mov edi, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [ecx+0x14]
        mov edi, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [esi+4], edi
        mov esi, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [ecx+0x178], esi
        dec dword ptr ds : [ebx+0x30]
        lea esi, ss:[ebp-0x2C]
        lea edi, ds:[ebx+0x20]
        movsd 
        movsd 
        movsd 
        mov dword ptr ds : [ebx+0x14], eax
        mov dword ptr ds : [ebx+0x10], edx
        movsd 
        mov al, 1
        public_6d4b36a : nop
        pop edi
        pop esi
        public_6d4b36c : nop
        pop ebx
        leave 
        ret 
        public_6d4b36f : nop
        xor al, al
        jmp public_6d4b36a
        UNREACHABLE_TRAP(0x6d4afa6)
    }
}

#undef public_6d4afd7
#undef public_6d4b023
#undef public_6d4b082
#undef public_6d4b0ac
#undef public_6d4b0af
#undef public_6d4b0d1
#undef public_6d4b0f6
#undef public_6d4b12a
#undef public_6d4b12c
#undef public_6d4b156
#undef public_6d4b186
#undef public_6d4b1ad
#undef public_6d4b1b0
#undef public_6d4b1d0
#undef public_6d4b201
#undef public_6d4b22b
#undef public_6d4b22d
#undef public_6d4b240
#undef public_6d4b24c
#undef public_6d4b25e
#undef public_6d4b265
#undef public_6d4b295
#undef public_6d4b2bc
#undef public_6d4b2bf
#undef public_6d4b2df
#undef public_6d4b309
#undef public_6d4b30d
#undef public_6d4b315
#undef public_6d4b322
#undef public_6d4b33b
#undef public_6d4b36a
#undef public_6d4b36c
#undef public_6d4b36f
