#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1d7d2 _public_6f1d7d2
#define public_6f1d7ea _public_6f1d7ea
#define public_6f1d7f5 _public_6f1d7f5
#define public_6f1d80b _public_6f1d80b
#define public_6f1d820 _public_6f1d820
#define public_6f1d838 _public_6f1d838
#define public_6f1d845 _public_6f1d845
#define public_6f1d85b _public_6f1d85b
#define public_6f1d878 _public_6f1d878
#define public_6f1d88e _public_6f1d88e
#define public_6f1d892 _public_6f1d892
#define public_6f1d8a8 _public_6f1d8a8
#define public_6f1d8b0 _public_6f1d8b0
#define public_6f1d8c8 _public_6f1d8c8
#define public_6f1d8d0 _public_6f1d8d0
#define public_6f1d8e6 _public_6f1d8e6
#define public_6f1d8f6 _public_6f1d8f6
#define public_6f1d90c _public_6f1d90c
#define public_6f1d920 _public_6f1d920
#define public_6f1d938 _public_6f1d938
#define public_6f1d950 _public_6f1d950
#define public_6f1d972 _public_6f1d972
#define public_6f1d998 _public_6f1d998
#define public_6f1d9a1 _public_6f1d9a1
#define public_6f1d9b3 _public_6f1d9b3
#define public_6f1d9ca _public_6f1d9ca
#define public_6f1d9e0 _public_6f1d9e0
#define public_6f1d9e8 _public_6f1d9e8
#define public_6f1da06 _public_6f1da06
#define public_6f1da20 _public_6f1da20
#define public_6f1da32 _public_6f1da32

PROC_DECLARE(0x6f1d7b0, internal_6f1d7b0, public_6f1d7b0);
extern "C" NAKED register_t __cdecl internal_6f1d7b0()
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
        je public_6f1da32
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6f1d7d2
        xor edi, edi
        jmp public_6f1d7ea
        public_6f1d7d2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f1d7ea : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f1d7f5
        xor edx, edx
        jmp public_6f1d80b
        public_6f1d7f5 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f1d80b : nop
        cmp edi, edx
        ja public_6f1d8a8
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6f1d838
        lea esp, ss:[esp]
        public_6f1d820 : nop
        push esi
        mov ecx, edi
        call public_6ed34e0
        add esi, 0x88
        add edi, 0x88
        cmp esi, ebx
        jne public_6f1d820
        public_6f1d838 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_6f1d85b
        public_6f1d845 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x88
        cmp esi, ebx
        jne public_6f1d845
        mov eax, dword ptr ss : [esp+0x10]
        public_6f1d85b : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6f1d878
        mov ecx, dword ptr ds : [eax+4]
        imul edx, 0x88
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6f1d878 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f1d88e : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6f1d892 : nop
        mov ecx, dword ptr ds : [eax+4]
        imul edx, 0x88
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6f1d8a8 : nop
        test esi, esi
        jne public_6f1d8b0
        xor edi, edi
        jmp public_6f1d8c8
        public_6f1d8b0 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f1d8c8 : nop
        test ecx, ecx
        jne public_6f1d8d0
        xor edx, edx
        jmp public_6f1d8e6
        public_6f1d8d0 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f1d8e6 : nop
        cmp edi, edx
        ja public_6f1d998
        test ecx, ecx
        jne public_6f1d8f6
        xor edx, edx
        jmp public_6f1d90c
        public_6f1d8f6 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f1d90c : nop
        imul edx, 0x88
        add edx, esi
        mov edi, edx
        cmp esi, edi
        mov ebx, ecx
        je public_6f1d938
        lea esp, ss:[esp]
        public_6f1d920 : nop
        push esi
        mov ecx, ebx
        call public_6ed34e0
        add esi, 0x88
        add ebx, 0x88
        cmp esi, edi
        jne public_6f1d920
        public_6f1d938 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_6f1d972
        lea esp, ss:[esp]
        public_6f1d950 : nop
        push esi
        push ebx
        call public_6ed2a60
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x88
        add esp, 8
        add ebx, 0x88
        cmp esi, eax
        jne public_6f1d950
        mov eax, dword ptr ss : [esp+0x10]
        public_6f1d972 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6f1d892
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        jmp public_6f1d88e
        public_6f1d998 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_6f1d9b3
        public_6f1d9a1 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x88
        cmp esi, edi
        jne public_6f1d9a1
        public_6f1d9b3 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6f1d9ca
        xor edx, edx
        jmp public_6f1d9e0
        public_6f1d9ca : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f1d9e0 : nop
        test edx, edx
        mov eax, edx
        jge public_6f1d9e8
        xor eax, eax
        public_6f1d9e8 : nop
        imul eax, 0x88
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f1da20
        public_6f1da06 : nop
        push esi
        push edi
        call public_6ed2a60
        add esi, 0x88
        add esp, 8
        add edi, 0x88
        cmp esi, ebx
        jne public_6f1da06
        public_6f1da20 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f1da32 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f1d7b0)
    }
}

#undef public_6f1d7d2
#undef public_6f1d7ea
#undef public_6f1d7f5
#undef public_6f1d80b
#undef public_6f1d820
#undef public_6f1d838
#undef public_6f1d845
#undef public_6f1d85b
#undef public_6f1d878
#undef public_6f1d88e
#undef public_6f1d892
#undef public_6f1d8a8
#undef public_6f1d8b0
#undef public_6f1d8c8
#undef public_6f1d8d0
#undef public_6f1d8e6
#undef public_6f1d8f6
#undef public_6f1d90c
#undef public_6f1d920
#undef public_6f1d938
#undef public_6f1d950
#undef public_6f1d972
#undef public_6f1d998
#undef public_6f1d9a1
#undef public_6f1d9b3
#undef public_6f1d9ca
#undef public_6f1d9e0
#undef public_6f1d9e8
#undef public_6f1da06
#undef public_6f1da20
#undef public_6f1da32
