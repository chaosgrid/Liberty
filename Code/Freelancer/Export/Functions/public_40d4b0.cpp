#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_40dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_40e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_40e200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40d4d2 _public_40d4d2
#define public_40d4ea _public_40d4ea
#define public_40d4f5 _public_40d4f5
#define public_40d50b _public_40d50b
#define public_40d520 _public_40d520
#define public_40d532 _public_40d532
#define public_40d540 _public_40d540
#define public_40d554 _public_40d554
#define public_40d56f _public_40d56f
#define public_40d59d _public_40d59d
#define public_40d5a5 _public_40d5a5
#define public_40d5bd _public_40d5bd
#define public_40d5c5 _public_40d5c5
#define public_40d5db _public_40d5db
#define public_40d5eb _public_40d5eb
#define public_40d601 _public_40d601
#define public_40d610 _public_40d610
#define public_40d622 _public_40d622
#define public_40d636 _public_40d636
#define public_40d652 _public_40d652
#define public_40d66d _public_40d66d
#define public_40d69b _public_40d69b
#define public_40d6a4 _public_40d6a4
#define public_40d6b2 _public_40d6b2
#define public_40d6c9 _public_40d6c9
#define public_40d6df _public_40d6df
#define public_40d6e7 _public_40d6e7
#define public_40d705 _public_40d705
#define public_40d719 _public_40d719
#define public_40d72b _public_40d72b

PROC_DECLARE(0x40d4b0, internal_40d4b0, public_40d4b0);
extern "C" NAKED register_t __cdecl internal_40d4b0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_40d72b
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_40d4d2
        xor edi, edi
        jmp public_40d4ea
        public_40d4d2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_40d4ea : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_40d4f5
        xor edx, edx
        jmp public_40d50b
        public_40d4f5 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_40d50b : nop
        cmp edi, edx
        ja public_40d59d
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_40d532
        lea esp, ss:[esp]
        public_40d520 : nop
        push esi
        mov ecx, edi
        call public_40e0a0
        add esi, 0x24
        add edi, 0x24
        cmp esi, ebx
        jne public_40d520
        public_40d532 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_40d554
        nop 
        public_40d540 : nop
        push 0
        mov ecx, esi
        call public_40e200
        add esi, 0x24
        cmp esi, ebx
        jne public_40d540
        mov eax, dword ptr ss : [esp+0x10]
        public_40d554 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_40d56f
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[ecx+edx*4]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_40d56f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x38E38E39
        imul ecx
        mov eax, dword ptr ss : [esp+0x10]
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[ecx+edx*4]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_40d59d : nop
        test esi, esi
        jne public_40d5a5
        xor edi, edi
        jmp public_40d5bd
        public_40d5a5 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_40d5bd : nop
        test ecx, ecx
        jne public_40d5c5
        xor edx, edx
        jmp public_40d5db
        public_40d5c5 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_40d5db : nop
        cmp edi, edx
        ja public_40d69b
        test ecx, ecx
        jne public_40d5eb
        xor edx, edx
        jmp public_40d601
        public_40d5eb : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_40d601 : nop
        lea edx, ds:[edx+edx*8]
        lea edi, ds:[esi+edx*4]
        cmp esi, edi
        mov ebx, ecx
        je public_40d622
        lea ecx, ds:[ecx]
        public_40d610 : nop
        push esi
        mov ecx, ebx
        call public_40e0a0
        add esi, 0x24
        add ebx, 0x24
        cmp esi, edi
        jne public_40d610
        public_40d622 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_40d652
        public_40d636 : nop
        push esi
        push ebx
        call public_40dfa0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x24
        add esp, 8
        add ebx, 0x24
        cmp esi, eax
        jne public_40d636
        mov eax, dword ptr ss : [esp+0x10]
        public_40d652 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_40d66d
        pop edi
        lea ecx, ds:[edx+edx*8]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_40d66d : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        lea ecx, ds:[edx+edx*8]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_40d69b : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_40d6b2
        public_40d6a4 : nop
        mov ecx, esi
        call public_407000
        add esi, 0x24
        cmp esi, edi
        jne public_40d6a4
        public_40d6b2 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_40d6c9
        xor edx, edx
        jmp public_40d6df
        public_40d6c9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_40d6df : nop
        test edx, edx
        mov eax, edx
        jge public_40d6e7
        xor eax, eax
        public_40d6e7 : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_40d719
        public_40d705 : nop
        push esi
        push edi
        call public_40dfa0
        add esi, 0x24
        add esp, 8
        add edi, 0x24
        cmp esi, ebx
        jne public_40d705
        public_40d719 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_40d72b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x40d4b0)
    }
}

#undef public_40d4d2
#undef public_40d4ea
#undef public_40d4f5
#undef public_40d50b
#undef public_40d520
#undef public_40d532
#undef public_40d540
#undef public_40d554
#undef public_40d56f
#undef public_40d59d
#undef public_40d5a5
#undef public_40d5bd
#undef public_40d5c5
#undef public_40d5db
#undef public_40d5eb
#undef public_40d601
#undef public_40d610
#undef public_40d622
#undef public_40d636
#undef public_40d652
#undef public_40d66d
#undef public_40d69b
#undef public_40d6a4
#undef public_40d6b2
#undef public_40d6c9
#undef public_40d6df
#undef public_40d6e7
#undef public_40d705
#undef public_40d719
#undef public_40d72b
