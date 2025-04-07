#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d3632c _public_6d3632c
#define public_6d36344 _public_6d36344
#define public_6d36353 _public_6d36353
#define public_6d36397 _public_6d36397
#define public_6d363af _public_6d363af
#define public_6d363bf _public_6d363bf
#define public_6d363db _public_6d363db
#define public_6d363f5 _public_6d363f5
#define public_6d363fa _public_6d363fa
#define public_6d3640a _public_6d3640a
#define public_6d3640e _public_6d3640e
#define public_6d36417 _public_6d36417
#define public_6d3642a _public_6d3642a
#define public_6d36445 _public_6d36445
#define public_6d36451 _public_6d36451
#define public_6d3645d _public_6d3645d

PROC_DECLARE(0x6d362b0, internal_6d362b0, public_6d362b0);
extern "C" NAKED register_t __cdecl internal_6d362b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        xor eax, eax
        cmp ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6d3640e
        cmp dword ptr ds : [ebx+0xC], edi
        je public_6d3640e
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+8]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        push eax
        call public_6d3e6f0
        test al, al
        je public_6d3640a
        add edi, 2
        mov eax, edi
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d36353
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, ebx
        je public_6d3632c
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3632c : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d36344
        cmp dword ptr ds : [eax+8], edi
        jne public_6d36344
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d36344 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d36353 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d3640a
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [ecx+0xC], edi
        je public_6d3640a
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov edx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edx+8]
        ja public_6d363bf
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d36397
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d36397 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d363f5
        public_6d363af : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d363f5
        xor eax, eax
        jmp public_6d363fa
        public_6d363bf : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d363db
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d363f5
        public_6d363db : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d363af
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d363af
        public_6d363f5 : nop
        mov eax, 1
        public_6d363fa : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3640a
        add edi, 2
        jmp public_6d36353
        public_6d3640a : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d3640e : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [ebp+0xC], edx
        ja public_6d3645d
        public_6d36417 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d36445
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d3642a : nop
        jne public_6d36451
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6d3645d
        mov edx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        lea edi, ds:[edi+edx*2]
        jmp public_6d36417
        public_6d36445 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d36451
        cmp dword ptr ds : [ebx+8], edi
        jmp public_6d3642a
        public_6d36451 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3645d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d362b0)
    }
}

#undef public_6d3632c
#undef public_6d36344
#undef public_6d36353
#undef public_6d36397
#undef public_6d363af
#undef public_6d363bf
#undef public_6d363db
#undef public_6d363f5
#undef public_6d363fa
#undef public_6d3640a
#undef public_6d3640e
#undef public_6d36417
#undef public_6d3642a
#undef public_6d36445
#undef public_6d36451
#undef public_6d3645d
