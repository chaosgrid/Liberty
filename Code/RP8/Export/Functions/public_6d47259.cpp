#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46f8a);
CLANG_FORWARD_PROC_SYMBOL(public_6d46ffb);
CLANG_FORWARD_PROC_SYMBOL(public_6d471ea);
CLANG_FORWARD_PROC_SYMBOL(public_6d47259);
CLANG_FORWARD_PROC_SYMBOL(public_6d49e96);
CLANG_FORWARD_PROC_SYMBOL(public_6d4aad2);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b4a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c050);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c268);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c503);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c9c2);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d14d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d746);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e6bb);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f14d);

#define public_6d47294 _public_6d47294
#define public_6d4729d _public_6d4729d
#define public_6d472b5 _public_6d472b5
#define public_6d472c4 _public_6d472c4
#define public_6d472c8 _public_6d472c8
#define public_6d472dd _public_6d472dd
#define public_6d472e7 _public_6d472e7
#define public_6d472f7 _public_6d472f7
#define public_6d47309 _public_6d47309
#define public_6d47314 _public_6d47314
#define public_6d4731f _public_6d4731f
#define public_6d4732b _public_6d4732b
#define public_6d4733a _public_6d4733a
#define public_6d47359 _public_6d47359
#define public_6d47368 _public_6d47368
#define public_6d4736d _public_6d4736d
#define public_6d47381 _public_6d47381
#define public_6d47385 _public_6d47385
#define public_6d4739e _public_6d4739e
#define public_6d473d7 _public_6d473d7
#define public_6d47402 _public_6d47402

PROC_DECLARE(0x6d47259, internal_6d47259, public_6d47259);
extern "C" NAKED register_t __cdecl internal_6d47259()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push edi
        mov edi, dword ptr ds : [esi+0x17C]
        push esi
        call public_6d46ffb
        pop ecx
        mov eax, esi
        call public_6d471ea
        xor ebx, ebx
        mov edx, esi
        mov dword ptr ds : [edi+0xC], ebx
        call public_6d46f8a
        mov byte ptr ds : [edi+0x10], al
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov al, byte ptr ds : [esi+0x4A]
        cmp al, bl
        je public_6d47294
        cmp byte ptr ds : [esi+0x40], bl
        jne public_6d4729d
        public_6d47294 : nop
        mov byte ptr ds : [esi+0x58], bl
        mov byte ptr ds : [esi+0x59], bl
        mov byte ptr ds : [esi+0x5A], bl
        public_6d4729d : nop
        cmp al, bl
        je public_6d472f7
        cmp byte ptr ds : [esi+0x41], bl
        je public_6d472b5
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2E
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d472b5 : nop
        cmp dword ptr ds : [esi+0x64], 3
        je public_6d47309
        mov byte ptr ds : [esi+0x59], bl
        mov byte ptr ds : [esi+0x5A], bl
        mov dword ptr ds : [esi+0x74], ebx
        public_6d472c4 : nop
        mov byte ptr ds : [esi+0x58], 1
        public_6d472c8 : nop
        cmp byte ptr ds : [esi+0x58], bl
        je public_6d472dd
        push esi
        call public_6d4f14d
        mov eax, dword ptr ds : [esi+0x1A4]
        pop ecx
        mov dword ptr ds : [edi+0x14], eax
        public_6d472dd : nop
        cmp byte ptr ds : [esi+0x5A], bl
        jne public_6d472e7
        cmp byte ptr ds : [esi+0x59], bl
        je public_6d472f7
        public_6d472e7 : nop
        push esi
        call public_6d4e6bb
        mov eax, dword ptr ds : [esi+0x1A4]
        pop ecx
        mov dword ptr ds : [edi+0x18], eax
        public_6d472f7 : nop
        cmp byte ptr ds : [esi+0x41], bl
        jne public_6d4733a
        cmp byte ptr ds : [edi+0x10], bl
        push esi
        je public_6d4731f
        call public_6d4d746
        jmp public_6d4732b
        public_6d47309 : nop
        cmp dword ptr ds : [esi+0x74], ebx
        je public_6d47314
        mov byte ptr ds : [esi+0x59], 1
        jmp public_6d472c8
        public_6d47314 : nop
        cmp byte ptr ds : [esi+0x50], bl
        je public_6d472c4
        mov byte ptr ds : [esi+0x5A], 1
        jmp public_6d472c8
        public_6d4731f : nop
        call public_6d4d14d
        push esi
        call public_6d4c9c2
        pop ecx
        public_6d4732b : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0x5A]
        pop ecx
        push eax
        push esi
        call public_6d4c503
        pop ecx
        pop ecx
        public_6d4733a : nop
        push esi
        call public_6d4c268
        cmp byte ptr ds : [esi+0xC9], bl
        pop ecx
        push esi
        je public_6d47359
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 1
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        jmp public_6d4736d
        public_6d47359 : nop
        cmp byte ptr ds : [esi+0xC8], bl
        je public_6d47368
        call public_6d4c050
        jmp public_6d4736d
        public_6d47368 : nop
        call public_6d4b4a2
        public_6d4736d : nop
        mov eax, dword ptr ds : [esi+0x18C]
        cmp byte ptr ds : [eax+0x10], bl
        pop ecx
        jne public_6d47381
        cmp byte ptr ds : [esi+0x40], bl
        mov byte ptr ss : [ebp-4], bl
        je public_6d47385
        public_6d47381 : nop
        mov byte ptr ss : [ebp-4], 1
        public_6d47385 : nop
        push dword ptr ss : [ebp-4]
        push esi
        call public_6d4aad2
        cmp byte ptr ds : [esi+0x41], bl
        pop ecx
        pop ecx
        jne public_6d4739e
        push ebx
        push esi
        call public_6d49e96
        pop ecx
        pop ecx
        public_6d4739e : nop
        mov eax, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax+8]
        pop ecx
        pop ecx
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6d47402
        cmp byte ptr ds : [esi+0x40], bl
        jne public_6d47402
        mov eax, dword ptr ds : [esi+0x18C]
        cmp byte ptr ds : [eax+0x10], bl
        je public_6d47402
        cmp byte ptr ds : [esi+0xC8], bl
        mov eax, dword ptr ds : [esi+0x20]
        je public_6d473d7
        lea eax, ds:[eax+eax*2+2]
        public_6d473d7 : nop
        mov dword ptr ds : [ecx+4], ebx
        mov ecx, dword ptr ds : [esi+0x118]
        imul ecx, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+0xC], ebx
        mov ecx, dword ptr ds : [esi+8]
        xor eax, eax
        cmp byte ptr ds : [esi+0x5A], bl
        setne al
        inc eax
        inc eax
        mov dword ptr ds : [ecx+0x10], eax
        inc dword ptr ds : [edi+0xC]
        public_6d47402 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d47259)
    }
}

#undef public_6d47294
#undef public_6d4729d
#undef public_6d472b5
#undef public_6d472c4
#undef public_6d472c8
#undef public_6d472dd
#undef public_6d472e7
#undef public_6d472f7
#undef public_6d47309
#undef public_6d47314
#undef public_6d4731f
#undef public_6d4732b
#undef public_6d4733a
#undef public_6d47359
#undef public_6d47368
#undef public_6d4736d
#undef public_6d47381
#undef public_6d47385
#undef public_6d4739e
#undef public_6d473d7
#undef public_6d47402
