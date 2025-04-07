#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);
CLANG_FORWARD_PROC_SYMBOL(public_65de2cc);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65df222);

#define public_65de2e4 _public_65de2e4
#define public_65de2fc _public_65de2fc
#define public_65de30b _public_65de30b
#define public_65de314 _public_65de314
#define public_65de322 _public_65de322
#define public_65de327 _public_65de327
#define public_65de32d _public_65de32d
#define public_65de35f _public_65de35f
#define public_65de372 _public_65de372
#define public_65de375 _public_65de375
#define public_65de389 _public_65de389
#define public_65de391 _public_65de391
#define public_65de3a1 _public_65de3a1
#define public_65de3b9 _public_65de3b9
#define public_65de3c4 _public_65de3c4
#define public_65de3d0 _public_65de3d0
#define public_65de3e4 _public_65de3e4
#define public_65de3ef _public_65de3ef
#define public_65de402 _public_65de402
#define public_65de421 _public_65de421
#define public_65de427 _public_65de427
#define public_65de430 _public_65de430
#define public_65de43d _public_65de43d
#define public_65de454 _public_65de454
#define public_65de45a _public_65de45a
#define public_65de475 _public_65de475
#define public_65de47e _public_65de47e
#define public_65de495 _public_65de495
#define public_65de4a5 _public_65de4a5
#define public_65de4ae _public_65de4ae
#define public_65de4bc _public_65de4bc
#define public_65de4c1 _public_65de4c1
#define public_65de4ca _public_65de4ca
#define public_65de4cc _public_65de4cc

PROC_DECLARE(0x65de2cc, internal_65de2cc, public_65de2cc);
extern "C" NAKED register_t __cdecl internal_65de2cc()
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
        public_65de2e4 : nop
        cmp dword ptr ds : [public_65e5be0], 1
        jle public_65de2fc
        movzx eax, bl
        push 8
        push eax
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65de30b
        public_65de2fc : nop
        mov ecx, dword ptr ds : [public_65e59d0]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 8
        public_65de30b : nop
        test eax, eax
        je public_65de314
        mov bl, byte ptr ds : [esi]
        inc esi
        jmp public_65de2e4
        public_65de314 : nop
        cmp bl, 0x2D
        mov dword ptr ss : [ebp-4], esi
        jne public_65de322
        or dword ptr ss : [ebp+0x14], 2
        jmp public_65de327
        public_65de322 : nop
        cmp bl, 0x2B
        jne public_65de32d
        public_65de327 : nop
        mov bl, byte ptr ds : [esi]
        inc esi
        mov dword ptr ss : [ebp-4], esi
        public_65de32d : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jl public_65de4c1
        cmp eax, 1
        je public_65de4c1
        cmp eax, 0x24
        jg public_65de4c1
        push 0x10
        test eax, eax
        pop ecx
        jne public_65de375
        cmp bl, 0x30
        je public_65de35f
        mov dword ptr ss : [ebp+0x10], 0xA
        jmp public_65de391
        public_65de35f : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x78
        je public_65de372
        cmp al, 0x58
        je public_65de372
        mov dword ptr ss : [ebp+0x10], 8
        jmp public_65de391
        public_65de372 : nop
        mov dword ptr ss : [ebp+0x10], ecx
        public_65de375 : nop
        cmp dword ptr ss : [ebp+0x10], ecx
        jne public_65de391
        cmp bl, 0x30
        jne public_65de391
        mov al, byte ptr ds : [esi]
        cmp al, 0x78
        je public_65de389
        cmp al, 0x58
        jne public_65de391
        public_65de389 : nop
        mov bl, byte ptr ds : [esi+1]
        inc esi
        inc esi
        mov dword ptr ss : [ebp-4], esi
        public_65de391 : nop
        or eax, 0xFFFFFFFF
        xor edx, edx
        div dword ptr ss : [ebp+0x10]
        mov edi, 0x103
        mov dword ptr ss : [ebp-0xC], eax
        public_65de3a1 : nop
        cmp dword ptr ds : [public_65e5be0], 1
        movzx esi, bl
        jle public_65de3b9
        push 4
        push esi
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65de3c4
        public_65de3b9 : nop
        mov eax, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [eax+esi*2]
        and eax, 4
        public_65de3c4 : nop
        test eax, eax
        je public_65de3d0
        movsx ecx, bl
        sub ecx, 0x30
        jmp public_65de402
        public_65de3d0 : nop
        cmp dword ptr ds : [public_65e5be0], 1
        jle public_65de3e4
        push edi
        push esi
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65de3ef
        public_65de3e4 : nop
        mov eax, dword ptr ds : [public_65e59d0]
        mov ax, word ptr ds : [eax+esi*2]
        and eax, edi
        public_65de3ef : nop
        test eax, eax
        je public_65de43d
        movsx eax, bl
        push eax
        call public_65df222
        pop ecx
        mov ecx, eax
        sub ecx, 0x37
        public_65de402 : nop
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_65de43d
        mov esi, dword ptr ss : [ebp-8]
        or dword ptr ss : [ebp+0x14], 8
        cmp esi, dword ptr ss : [ebp-0xC]
        jb public_65de427
        jne public_65de421
        or eax, 0xFFFFFFFF
        xor edx, edx
        div dword ptr ss : [ebp+0x10]
        cmp ecx, edx
        jbe public_65de427
        public_65de421 : nop
        or dword ptr ss : [ebp+0x14], 4
        jmp public_65de430
        public_65de427 : nop
        imul esi, dword ptr ss : [ebp+0x10]
        add esi, ecx
        mov dword ptr ss : [ebp-8], esi
        public_65de430 : nop
        mov eax, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        mov bl, byte ptr ds : [eax]
        jmp public_65de3a1
        public_65de43d : nop
        mov eax, dword ptr ss : [ebp+0x14]
        dec dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp+0xC]
        test al, 8
        jne public_65de45a
        test ebx, ebx
        je public_65de454
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        public_65de454 : nop
        and dword ptr ss : [ebp-8], 0
        jmp public_65de4a5
        public_65de45a : nop
        test al, 4
        mov esi, 0x7FFFFFFF
        jne public_65de47e
        test al, 1
        jne public_65de4a5
        and eax, 2
        je public_65de475
        cmp dword ptr ss : [ebp-8], 0x80000000
        ja public_65de47e
        public_65de475 : nop
        test eax, eax
        jne public_65de4a5
        cmp dword ptr ss : [ebp-8], esi
        jbe public_65de4a5
        public_65de47e : nop
        call public_65de88a
        test byte ptr ss : [ebp+0x14], 1
        mov dword ptr ds : [eax], 0x22
        je public_65de495
        or dword ptr ss : [ebp-8], 0xFFFFFFFF
        jmp public_65de4a5
        public_65de495 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        and al, 2
        neg al
        sbb eax, eax
        neg eax
        add eax, esi
        mov dword ptr ss : [ebp-8], eax
        public_65de4a5 : nop
        test ebx, ebx
        je public_65de4ae
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx], eax
        public_65de4ae : nop
        test byte ptr ss : [ebp+0x14], 2
        je public_65de4bc
        mov eax, dword ptr ss : [ebp-8]
        neg eax
        mov dword ptr ss : [ebp-8], eax
        public_65de4bc : nop
        mov eax, dword ptr ss : [ebp-8]
        jmp public_65de4cc
        public_65de4c1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_65de4ca
        mov dword ptr ds : [eax], edi
        public_65de4ca : nop
        xor eax, eax
        public_65de4cc : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65de2cc)
    }
}

#undef public_65de2e4
#undef public_65de2fc
#undef public_65de30b
#undef public_65de314
#undef public_65de322
#undef public_65de327
#undef public_65de32d
#undef public_65de35f
#undef public_65de372
#undef public_65de375
#undef public_65de389
#undef public_65de391
#undef public_65de3a1
#undef public_65de3b9
#undef public_65de3c4
#undef public_65de3d0
#undef public_65de3e4
#undef public_65de3ef
#undef public_65de402
#undef public_65de421
#undef public_65de427
#undef public_65de430
#undef public_65de43d
#undef public_65de454
#undef public_65de45a
#undef public_65de475
#undef public_65de47e
#undef public_65de495
#undef public_65de4a5
#undef public_65de4ae
#undef public_65de4bc
#undef public_65de4c1
#undef public_65de4ca
#undef public_65de4cc
