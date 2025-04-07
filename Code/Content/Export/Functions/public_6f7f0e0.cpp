#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7f102 _public_6f7f102
#define public_6f7f119 _public_6f7f119
#define public_6f7f124 _public_6f7f124
#define public_6f7f139 _public_6f7f139
#define public_6f7f146 _public_6f7f146
#define public_6f7f168 _public_6f7f168
#define public_6f7f187 _public_6f7f187
#define public_6f7f1b2 _public_6f7f1b2
#define public_6f7f1ba _public_6f7f1ba
#define public_6f7f1d1 _public_6f7f1d1
#define public_6f7f1d9 _public_6f7f1d9
#define public_6f7f1ee _public_6f7f1ee
#define public_6f7f1fe _public_6f7f1fe
#define public_6f7f213 _public_6f7f213
#define public_6f7f220 _public_6f7f220
#define public_6f7f242 _public_6f7f242
#define public_6f7f250 _public_6f7f250
#define public_6f7f26c _public_6f7f26c
#define public_6f7f276 _public_6f7f276
#define public_6f7f295 _public_6f7f295
#define public_6f7f2c0 _public_6f7f2c0
#define public_6f7f2d4 _public_6f7f2d4
#define public_6f7f2e9 _public_6f7f2e9
#define public_6f7f2f1 _public_6f7f2f1
#define public_6f7f310 _public_6f7f310
#define public_6f7f328 _public_6f7f328
#define public_6f7f332 _public_6f7f332
#define public_6f7f338 _public_6f7f338

PROC_DECLARE(0x6f7f0e0, internal_6f7f0e0, public_6f7f0e0);
extern "C" NAKED register_t __cdecl internal_6f7f0e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        cmp ebp, esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f7f338
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        jne public_6f7f102
        xor ebx, ebx
        jmp public_6f7f119
        public_6f7f102 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6f7f119 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6f7f124
        xor edx, edx
        jmp public_6f7f139
        public_6f7f124 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7f139 : nop
        cmp ebx, edx
        ja public_6f7f1b2
        mov edx, dword ptr ds : [esi+8]
        mov eax, edi
        cmp eax, edx
        je public_6f7f168
        public_6f7f146 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        mov dword ptr ds : [ebx+8], edi
        jne public_6f7f146
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f7f168 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f7f187
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        pop edi
        lea edx, ds:[edx+edx*2]
        lea ecx, ds:[eax+edx*4]
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f187 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x2AAAAAAB
        imul esi
        mov eax, dword ptr ss : [ebp+4]
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        pop edi
        lea edx, ds:[edx+edx*2]
        lea ecx, ds:[eax+edx*4]
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f1b2 : nop
        test edi, edi
        jne public_6f7f1ba
        xor ebx, ebx
        jmp public_6f7f1d1
        public_6f7f1ba : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6f7f1d1 : nop
        test ecx, ecx
        jne public_6f7f1d9
        xor edx, edx
        jmp public_6f7f1ee
        public_6f7f1d9 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7f1ee : nop
        cmp ebx, edx
        ja public_6f7f2c0
        test ecx, ecx
        jne public_6f7f1fe
        xor edx, edx
        jmp public_6f7f213
        public_6f7f1fe : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7f213 : nop
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[edi+edx*4]
        mov eax, edi
        cmp eax, edx
        je public_6f7f242
        nop 
        public_6f7f220 : nop
        mov edi, eax
        mov ebp, dword ptr ds : [edi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        mov dword ptr ds : [ebx+8], edi
        jne public_6f7f220
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f7f242 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edx, edi
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, edx
        je public_6f7f276
        mov edi, edi
        public_6f7f250 : nop
        test ecx, ecx
        je public_6f7f26c
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+8], edx
        public_6f7f26c : nop
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edi
        jne public_6f7f250
        public_6f7f276 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f7f295
        xor edx, edx
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        lea eax, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f295 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        lea eax, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f2c0 : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        jne public_6f7f2d4
        xor edx, edx
        jmp public_6f7f2e9
        public_6f7f2d4 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7f2e9 : nop
        test edx, edx
        mov eax, edx
        jge public_6f7f2f1
        xor eax, eax
        public_6f7f2f1 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f7f332
        nop 
        public_6f7f310 : nop
        test ecx, ecx
        je public_6f7f328
        mov esi, eax
        mov ebx, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_6f7f328 : nop
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        jne public_6f7f310
        public_6f7f332 : nop
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ss : [ebp+8], ecx
        public_6f7f338 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7f0e0)
    }
}

#undef public_6f7f102
#undef public_6f7f119
#undef public_6f7f124
#undef public_6f7f139
#undef public_6f7f146
#undef public_6f7f168
#undef public_6f7f187
#undef public_6f7f1b2
#undef public_6f7f1ba
#undef public_6f7f1d1
#undef public_6f7f1d9
#undef public_6f7f1ee
#undef public_6f7f1fe
#undef public_6f7f213
#undef public_6f7f220
#undef public_6f7f242
#undef public_6f7f250
#undef public_6f7f26c
#undef public_6f7f276
#undef public_6f7f295
#undef public_6f7f2c0
#undef public_6f7f2d4
#undef public_6f7f2e9
#undef public_6f7f2f1
#undef public_6f7f310
#undef public_6f7f328
#undef public_6f7f332
#undef public_6f7f338
