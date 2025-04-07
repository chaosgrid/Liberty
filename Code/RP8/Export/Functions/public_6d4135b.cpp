#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4135b);
CLANG_FORWARD_PROC_SYMBOL(public_6d46f52);

#define public_6d41387 _public_6d41387
#define public_6d413ad _public_6d413ad
#define public_6d413c0 _public_6d413c0
#define public_6d413db _public_6d413db
#define public_6d4142c _public_6d4142c
#define public_6d41449 _public_6d41449
#define public_6d41455 _public_6d41455
#define public_6d41476 _public_6d41476
#define public_6d4149c _public_6d4149c
#define public_6d414a4 _public_6d414a4
#define public_6d414be _public_6d414be
#define public_6d414c4 _public_6d414c4
#define public_6d41500 _public_6d41500
#define public_6d41503 _public_6d41503
#define public_6d4155a _public_6d4155a
#define public_6d41568 _public_6d41568
#define public_6d4157c _public_6d4157c
#define public_6d41580 _public_6d41580

PROC_DECLARE(0x6d4135b, internal_6d4135b, public_6d4135b);
extern "C" NAKED register_t __cdecl internal_6d4135b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        jne public_6d41387
        push ebx
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d41580
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        public_6d41387 : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [esi]
        inc esi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], eax
        jne public_6d413ad
        push ebx
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d41580
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        public_6d413ad : nop
        movzx eax, byte ptr ds : [esi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], eax
        inc esi
        sub dword ptr ss : [ebp-8], 2
        jmp public_6d41568
        public_6d413c0 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d413db
        push ebx
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d41580
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        public_6d413db : nop
        movzx ecx, byte ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        dec dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x14], 0x50
        mov edx, dword ptr ds : [ebx]
        mov eax, ecx
        and ecx, 0xF
        mov dword ptr ds : [edx+0x18], ecx
        sar eax, 4
        mov dword ptr ss : [ebp-0x10], ecx
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ds : [ebx]
        push 1
        push ebx
        inc esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, 4
        pop ecx
        pop ecx
        jl public_6d4142c
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx+0x14], 0x1E
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x10]
        pop ecx
        public_6d4142c : nop
        lea eax, ds:[ebx+eax*4+0x90]
        cmp dword ptr ds : [eax], 0
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d41449
        push ebx
        call public_6d46f52
        pop ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        public_6d41449 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x10], offset public_6d61270
        public_6d41455 : nop
        xor eax, eax
        cmp dword ptr ss : [ebp-0x14], eax
        je public_6d414a4
        cmp dword ptr ss : [ebp-4], eax
        jne public_6d41476
        push ebx
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d41580
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        public_6d41476 : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [esi]
        inc esi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d4149c
        push ebx
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d41580
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        public_6d4149c : nop
        movzx eax, byte ptr ds : [esi]
        add dword ptr ss : [ebp-0xC], eax
        jmp public_6d414c4
        public_6d414a4 : nop
        cmp dword ptr ss : [ebp-4], eax
        jne public_6d414be
        push ebx
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d41580
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-4], eax
        public_6d414be : nop
        movzx eax, byte ptr ds : [esi]
        mov dword ptr ss : [ebp-0xC], eax
        public_6d414c4 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        dec dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-0x10], 4
        mov eax, dword ptr ds : [eax]
        mov dx, word ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0x18]
        inc esi
        cmp dword ptr ss : [ebp-0x10], offset public_6d61370
        mov word ptr ds : [ecx+eax*2], dx
        jl public_6d41455
        mov eax, dword ptr ds : [ebx]
        cmp dword ptr ds : [eax+0x68], 2
        jl public_6d4155a
        add ecx, 4
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0xC], 8
        jmp public_6d41503
        public_6d41500 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        public_6d41503 : nop
        movzx edx, word ptr ds : [ecx-4]
        mov eax, dword ptr ds : [ebx]
        add eax, 0x18
        mov dword ptr ds : [eax], edx
        movzx edx, word ptr ds : [ecx-2]
        mov dword ptr ds : [eax+4], edx
        movzx edx, word ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        movzx edx, word ptr ds : [ecx+2]
        mov dword ptr ds : [eax+0xC], edx
        movzx edx, word ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], edx
        movzx edx, word ptr ds : [ecx+6]
        mov dword ptr ds : [eax+0x14], edx
        movzx edx, word ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x18], edx
        movzx ecx, word ptr ds : [ecx+0xA]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x14], 0x5C
        mov eax, dword ptr ds : [ebx]
        push 2
        push ebx
        call dword ptr ds : [eax+4]
        add dword ptr ss : [ebp-0x10], 0x10
        dec dword ptr ss : [ebp-0xC]
        pop ecx
        pop ecx
        jne public_6d41500
        public_6d4155a : nop
        sub dword ptr ss : [ebp-8], 0x41
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d41568
        sub dword ptr ss : [ebp-8], 0x40
        public_6d41568 : nop
        cmp dword ptr ss : [ebp-8], 0
        jg public_6d413c0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi], esi
        mov al, 1
        public_6d4157c : nop
        pop edi
        pop esi
        leave 
        ret 
        public_6d41580 : nop
        xor al, al
        jmp public_6d4157c
        UNREACHABLE_TRAP(0x6d4135b)
    }
}

#undef public_6d41387
#undef public_6d413ad
#undef public_6d413c0
#undef public_6d413db
#undef public_6d4142c
#undef public_6d41449
#undef public_6d41455
#undef public_6d41476
#undef public_6d4149c
#undef public_6d414a4
#undef public_6d414be
#undef public_6d414c4
#undef public_6d41500
#undef public_6d41503
#undef public_6d4155a
#undef public_6d41568
#undef public_6d4157c
#undef public_6d41580
