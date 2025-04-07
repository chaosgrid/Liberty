#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eca0);

#define public_6d317cf _public_6d317cf
#define public_6d317d7 _public_6d317d7
#define public_6d317e2 _public_6d317e2
#define public_6d317ea _public_6d317ea
#define public_6d317fd _public_6d317fd
#define public_6d31805 _public_6d31805
#define public_6d31813 _public_6d31813
#define public_6d3181b _public_6d3181b
#define public_6d31840 _public_6d31840
#define public_6d31848 _public_6d31848
#define public_6d31853 _public_6d31853
#define public_6d31868 _public_6d31868
#define public_6d3186d _public_6d3186d
#define public_6d31876 _public_6d31876

PROC_DECLARE(0x6d317c0, internal_6d317c0, public_6d317c0);
extern "C" NAKED register_t __cdecl internal_6d317c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        push esi
        lea esi, ds:[ecx+0x2C]
        jne public_6d317cf
        xor ecx, ecx
        jmp public_6d317d7
        public_6d317cf : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6d317d7 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6d317e2
        xor eax, eax
        jmp public_6d317ea
        public_6d317e2 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6d317ea : nop
        cmp ecx, eax
        jne public_6d31876
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d317fd
        xor eax, eax
        jmp public_6d31805
        public_6d317fd : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6d31805 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea edx, ds:[eax+5]
        jne public_6d31813
        xor eax, eax
        jmp public_6d3181b
        public_6d31813 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6d3181b : nop
        cmp eax, edx
        jae public_6d31876
        mov ecx, dword ptr ds : [esi]
        push ebx
        push edi
        lea ebx, ds:[edx*4]
        push ebx
        call public_6d1baa0
        mov edi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        mov edx, eax
        je public_6d31853
        push ebp
        lea ecx, ds:[ecx]
        public_6d31840 : nop
        test edx, edx
        je public_6d31848
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        public_6d31848 : nop
        add ecx, 4
        add edx, 4
        cmp ecx, edi
        jne public_6d31840
        pop ebp
        public_6d31853 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        add ebx, eax
        test edx, edx
        pop edi
        mov dword ptr ds : [esi+0xC], ebx
        pop ebx
        jne public_6d31868
        xor ecx, ecx
        jmp public_6d3186d
        public_6d31868 : nop
        sub ecx, edx
        sar ecx, 2
        public_6d3186d : nop
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], eax
        public_6d31876 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+8]
        push edx
        push 1
        push eax
        mov ecx, esi
        call public_6d3eca0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d317c0)
    }
}

#undef public_6d317cf
#undef public_6d317d7
#undef public_6d317e2
#undef public_6d317ea
#undef public_6d317fd
#undef public_6d31805
#undef public_6d31813
#undef public_6d3181b
#undef public_6d31840
#undef public_6d31848
#undef public_6d31853
#undef public_6d31868
#undef public_6d3186d
#undef public_6d31876
