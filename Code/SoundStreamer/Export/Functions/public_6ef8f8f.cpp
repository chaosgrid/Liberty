#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8f8f);
CLANG_FORWARD_PROC_SYMBOL(public_6ef948e);
CLANG_FORWARD_PROC_SYMBOL(public_6efa6ce);

#define public_6ef8fa7 _public_6ef8fa7
#define public_6ef8fbf _public_6ef8fbf
#define public_6ef8fce _public_6ef8fce
#define public_6ef8fd7 _public_6ef8fd7
#define public_6ef8fe5 _public_6ef8fe5
#define public_6ef8fea _public_6ef8fea
#define public_6ef8ff0 _public_6ef8ff0
#define public_6ef9022 _public_6ef9022
#define public_6ef9035 _public_6ef9035
#define public_6ef9038 _public_6ef9038
#define public_6ef904c _public_6ef904c
#define public_6ef9054 _public_6ef9054
#define public_6ef9064 _public_6ef9064
#define public_6ef907c _public_6ef907c
#define public_6ef9087 _public_6ef9087
#define public_6ef9093 _public_6ef9093
#define public_6ef90a7 _public_6ef90a7
#define public_6ef90b2 _public_6ef90b2
#define public_6ef90c5 _public_6ef90c5
#define public_6ef90e4 _public_6ef90e4
#define public_6ef90ea _public_6ef90ea
#define public_6ef90f3 _public_6ef90f3
#define public_6ef9100 _public_6ef9100
#define public_6ef9118 _public_6ef9118
#define public_6ef911e _public_6ef911e
#define public_6ef913b _public_6ef913b
#define public_6ef9144 _public_6ef9144
#define public_6ef915a _public_6ef915a
#define public_6ef916b _public_6ef916b
#define public_6ef9174 _public_6ef9174
#define public_6ef9182 _public_6ef9182
#define public_6ef9187 _public_6ef9187
#define public_6ef9190 _public_6ef9190
#define public_6ef9192 _public_6ef9192

PROC_DECLARE(0x6ef8f8f, internal_6ef8f8f, public_6ef8f8f);
extern "C" NAKED register_t __cdecl internal_6ef8f8f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        and dword ptr ss : [ebp-8], 0
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov bl, byte ptr ds : [edi]
        lea esi, ds:[edi+1]
        mov dword ptr ss : [ebp-4], esi
        public_6ef8fa7 : nop
        cmp dword ptr ds : [public_6f00610], 1
        jle public_6ef8fbf
        movzx eax, bl
        push 8
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6ef8fce
        public_6ef8fbf : nop
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 8
        public_6ef8fce : nop
        test eax, eax
        je public_6ef8fd7
        mov bl, byte ptr ds : [esi]
        inc esi
        jmp public_6ef8fa7
        public_6ef8fd7 : nop
        cmp bl, 0x2D
        mov dword ptr ss : [ebp-4], esi
        jne public_6ef8fe5
        or dword ptr ss : [ebp+0x14], 2
        jmp public_6ef8fea
        public_6ef8fe5 : nop
        cmp bl, 0x2B
        jne public_6ef8ff0
        public_6ef8fea : nop
        mov bl, byte ptr ds : [esi]
        inc esi
        mov dword ptr ss : [ebp-4], esi
        public_6ef8ff0 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jl public_6ef9187
        cmp eax, 1
        je public_6ef9187
        cmp eax, 0x24
        jg public_6ef9187
        push 0x10
        test eax, eax
        pop ecx
        jne public_6ef9038
        cmp bl, 0x30
        je public_6ef9022
        mov dword ptr ss : [ebp+0x10], 0xA
        jmp public_6ef9054
        public_6ef9022 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x78
        je public_6ef9035
        cmp al, 0x58
        je public_6ef9035
        mov dword ptr ss : [ebp+0x10], 8
        jmp public_6ef9054
        public_6ef9035 : nop
        mov dword ptr ss : [ebp+0x10], ecx
        public_6ef9038 : nop
        cmp dword ptr ss : [ebp+0x10], ecx
        jne public_6ef9054
        cmp bl, 0x30
        jne public_6ef9054
        mov al, byte ptr ds : [esi]
        cmp al, 0x78
        je public_6ef904c
        cmp al, 0x58
        jne public_6ef9054
        public_6ef904c : nop
        mov bl, byte ptr ds : [esi+1]
        inc esi
        inc esi
        mov dword ptr ss : [ebp-4], esi
        public_6ef9054 : nop
        or eax, 0xFFFFFFFF
        xor edx, edx
        div dword ptr ss : [ebp+0x10]
        mov edi, 0x103
        mov dword ptr ss : [ebp-0xC], eax
        public_6ef9064 : nop
        cmp dword ptr ds : [public_6f00610], 1
        movzx esi, bl
        jle public_6ef907c
        push 4
        push esi
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6ef9087
        public_6ef907c : nop
        mov eax, dword ptr ds : [public_6f0061c]
        mov al, byte ptr ds : [eax+esi*2]
        and eax, 4
        public_6ef9087 : nop
        test eax, eax
        je public_6ef9093
        movsx ecx, bl
        sub ecx, 0x30
        jmp public_6ef90c5
        public_6ef9093 : nop
        cmp dword ptr ds : [public_6f00610], 1
        jle public_6ef90a7
        push edi
        push esi
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6ef90b2
        public_6ef90a7 : nop
        mov eax, dword ptr ds : [public_6f0061c]
        mov ax, word ptr ds : [eax+esi*2]
        and eax, edi
        public_6ef90b2 : nop
        test eax, eax
        je public_6ef9100
        movsx eax, bl
        push eax
        call public_6efa6ce
        pop ecx
        mov ecx, eax
        sub ecx, 0x37
        public_6ef90c5 : nop
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6ef9100
        mov esi, dword ptr ss : [ebp-8]
        or dword ptr ss : [ebp+0x14], 8
        cmp esi, dword ptr ss : [ebp-0xC]
        jb public_6ef90ea
        jne public_6ef90e4
        or eax, 0xFFFFFFFF
        xor edx, edx
        div dword ptr ss : [ebp+0x10]
        cmp ecx, edx
        jbe public_6ef90ea
        public_6ef90e4 : nop
        or dword ptr ss : [ebp+0x14], 4
        jmp public_6ef90f3
        public_6ef90ea : nop
        imul esi, dword ptr ss : [ebp+0x10]
        add esi, ecx
        mov dword ptr ss : [ebp-8], esi
        public_6ef90f3 : nop
        mov eax, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        mov bl, byte ptr ds : [eax]
        jmp public_6ef9064
        public_6ef9100 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        dec dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        test cl, 8
        jne public_6ef911e
        test edx, edx
        je public_6ef9118
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        public_6ef9118 : nop
        and dword ptr ss : [ebp-8], 0
        jmp public_6ef916b
        public_6ef911e : nop
        test cl, 4
        mov eax, 0x7FFFFFFF
        jne public_6ef9144
        test cl, 1
        jne public_6ef916b
        and ecx, 2
        je public_6ef913b
        cmp dword ptr ss : [ebp-8], 0x80000000
        ja public_6ef9144
        public_6ef913b : nop
        test ecx, ecx
        jne public_6ef916b
        cmp dword ptr ss : [ebp-8], eax
        jbe public_6ef916b
        public_6ef9144 : nop
        test byte ptr ss : [ebp+0x14], 1
        mov dword ptr ds : [public_6f010f0], 0x22
        je public_6ef915a
        or dword ptr ss : [ebp-8], 0xFFFFFFFF
        jmp public_6ef916b
        public_6ef915a : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        and cl, 2
        neg cl
        sbb ecx, ecx
        neg ecx
        add ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        public_6ef916b : nop
        test edx, edx
        je public_6ef9174
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        public_6ef9174 : nop
        test byte ptr ss : [ebp+0x14], 2
        je public_6ef9182
        mov eax, dword ptr ss : [ebp-8]
        neg eax
        mov dword ptr ss : [ebp-8], eax
        public_6ef9182 : nop
        mov eax, dword ptr ss : [ebp-8]
        jmp public_6ef9192
        public_6ef9187 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ef9190
        mov dword ptr ds : [eax], edi
        public_6ef9190 : nop
        xor eax, eax
        public_6ef9192 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef8f8f)
    }
}

#undef public_6ef8fa7
#undef public_6ef8fbf
#undef public_6ef8fce
#undef public_6ef8fd7
#undef public_6ef8fe5
#undef public_6ef8fea
#undef public_6ef8ff0
#undef public_6ef9022
#undef public_6ef9035
#undef public_6ef9038
#undef public_6ef904c
#undef public_6ef9054
#undef public_6ef9064
#undef public_6ef907c
#undef public_6ef9087
#undef public_6ef9093
#undef public_6ef90a7
#undef public_6ef90b2
#undef public_6ef90c5
#undef public_6ef90e4
#undef public_6ef90ea
#undef public_6ef90f3
#undef public_6ef9100
#undef public_6ef9118
#undef public_6ef911e
#undef public_6ef913b
#undef public_6ef9144
#undef public_6ef915a
#undef public_6ef916b
#undef public_6ef9174
#undef public_6ef9182
#undef public_6ef9187
#undef public_6ef9190
#undef public_6ef9192
