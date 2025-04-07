#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7e990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7e9b2 _public_6f7e9b2
#define public_6f7e9ba _public_6f7e9ba
#define public_6f7e9c5 _public_6f7e9c5
#define public_6f7e9cd _public_6f7e9cd
#define public_6f7e9e0 _public_6f7e9e0
#define public_6f7ea08 _public_6f7ea08
#define public_6f7ea2a _public_6f7ea2a
#define public_6f7ea32 _public_6f7ea32
#define public_6f7ea3a _public_6f7ea3a
#define public_6f7ea42 _public_6f7ea42
#define public_6f7ea4a _public_6f7ea4a
#define public_6f7ea5a _public_6f7ea5a
#define public_6f7ea62 _public_6f7ea62
#define public_6f7ea70 _public_6f7ea70
#define public_6f7ea98 _public_6f7ea98
#define public_6f7eaa2 _public_6f7eaa2
#define public_6f7eac4 _public_6f7eac4
#define public_6f7eace _public_6f7eace
#define public_6f7eaec _public_6f7eaec
#define public_6f7eb09 _public_6f7eb09
#define public_6f7eb1d _public_6f7eb1d
#define public_6f7eb25 _public_6f7eb25
#define public_6f7eb2b _public_6f7eb2b
#define public_6f7eb46 _public_6f7eb46
#define public_6f7eb64 _public_6f7eb64
#define public_6f7eb6e _public_6f7eb6e
#define public_6f7eb74 _public_6f7eb74

PROC_DECLARE(0x6f7e990, internal_6f7e990, public_6f7e990);
extern "C" NAKED register_t __cdecl internal_6f7e990()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f7eb74
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f7e9b2
        xor esi, esi
        jmp public_6f7e9ba
        public_6f7e9b2 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, ecx
        sar esi, 4
        public_6f7e9ba : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6f7e9c5
        xor eax, eax
        jmp public_6f7e9cd
        public_6f7e9c5 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, edx
        sar eax, 4
        public_6f7e9cd : nop
        cmp esi, eax
        ja public_6f7ea2a
        mov esi, dword ptr ds : [edi+8]
        mov eax, ecx
        cmp eax, esi
        je public_6f7ea08
        lea ebx, ds:[ebx]
        public_6f7e9e0 : nop
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [ecx+0xC]
        add eax, 0x10
        add edx, 0x10
        cmp eax, esi
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6f7e9e0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f7ea08 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f7eaec
        mov ecx, dword ptr ds : [ebx+4]
        xor eax, eax
        pop edi
        shl eax, 4
        add eax, ecx
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7ea2a : nop
        test ecx, ecx
        jne public_6f7ea32
        xor esi, esi
        jmp public_6f7ea3a
        public_6f7ea32 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, ecx
        sar esi, 4
        public_6f7ea3a : nop
        test edx, edx
        jne public_6f7ea42
        xor eax, eax
        jmp public_6f7ea4a
        public_6f7ea42 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, edx
        sar eax, 4
        public_6f7ea4a : nop
        cmp esi, eax
        ja public_6f7eb09
        test edx, edx
        jne public_6f7ea5a
        xor eax, eax
        jmp public_6f7ea62
        public_6f7ea5a : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, edx
        sar eax, 4
        public_6f7ea62 : nop
        shl eax, 4
        add eax, ecx
        cmp ecx, eax
        je public_6f7ea98
        nop 
        lea esp, ss:[esp]
        public_6f7ea70 : nop
        mov esi, ecx
        mov ebp, dword ptr ds : [esi]
        mov ebx, edx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add ecx, 0x10
        add edx, 0x10
        cmp ecx, eax
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6f7ea70
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f7ea98 : nop
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        mov ecx, dword ptr ds : [ebx+8]
        je public_6f7eace
        public_6f7eaa2 : nop
        test ecx, ecx
        je public_6f7eac4
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f7eac4 : nop
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        jne public_6f7eaa2
        public_6f7eace : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f7eaec
        mov ecx, dword ptr ds : [ebx+4]
        xor eax, eax
        pop edi
        shl eax, 4
        add eax, ecx
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7eaec : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [ebx+4]
        sar eax, 4
        pop edi
        shl eax, 4
        add eax, ecx
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7eb09 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f7eb1d
        xor eax, eax
        jmp public_6f7eb25
        public_6f7eb1d : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 4
        public_6f7eb25 : nop
        test eax, eax
        jge public_6f7eb2b
        xor eax, eax
        public_6f7eb2b : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, edx
        je public_6f7eb6e
        public_6f7eb46 : nop
        test ecx, ecx
        je public_6f7eb64
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], esi
        public_6f7eb64 : nop
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        jne public_6f7eb46
        public_6f7eb6e : nop
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        public_6f7eb74 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7e990)
    }
}

#undef public_6f7e9b2
#undef public_6f7e9ba
#undef public_6f7e9c5
#undef public_6f7e9cd
#undef public_6f7e9e0
#undef public_6f7ea08
#undef public_6f7ea2a
#undef public_6f7ea32
#undef public_6f7ea3a
#undef public_6f7ea42
#undef public_6f7ea4a
#undef public_6f7ea5a
#undef public_6f7ea62
#undef public_6f7ea70
#undef public_6f7ea98
#undef public_6f7eaa2
#undef public_6f7eac4
#undef public_6f7eace
#undef public_6f7eaec
#undef public_6f7eb09
#undef public_6f7eb1d
#undef public_6f7eb25
#undef public_6f7eb2b
#undef public_6f7eb46
#undef public_6f7eb64
#undef public_6f7eb6e
#undef public_6f7eb74
