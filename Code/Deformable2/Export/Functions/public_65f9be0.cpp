#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9be0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f9bfc _public_65f9bfc
#define public_65f9c04 _public_65f9c04
#define public_65f9c0f _public_65f9c0f
#define public_65f9c17 _public_65f9c17
#define public_65f9c22 _public_65f9c22
#define public_65f9c30 _public_65f9c30
#define public_65f9c4a _public_65f9c4a
#define public_65f9c63 _public_65f9c63
#define public_65f9c6b _public_65f9c6b
#define public_65f9c73 _public_65f9c73
#define public_65f9c7b _public_65f9c7b
#define public_65f9c83 _public_65f9c83
#define public_65f9c93 _public_65f9c93
#define public_65f9c9b _public_65f9c9b
#define public_65f9ca2 _public_65f9ca2
#define public_65f9cb0 _public_65f9cb0
#define public_65f9cc0 _public_65f9cc0
#define public_65f9cc8 _public_65f9cc8
#define public_65f9cd2 _public_65f9cd2
#define public_65f9cec _public_65f9cec
#define public_65f9d05 _public_65f9d05
#define public_65f9d19 _public_65f9d19
#define public_65f9d21 _public_65f9d21
#define public_65f9d27 _public_65f9d27
#define public_65f9d46 _public_65f9d46
#define public_65f9d4e _public_65f9d4e
#define public_65f9d58 _public_65f9d58
#define public_65f9d5e _public_65f9d5e

PROC_DECLARE(0x65f9be0, internal_65f9be0, public_65f9be0);
extern "C" NAKED register_t __cdecl internal_65f9be0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_65f9d5e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_65f9bfc
        xor edi, edi
        jmp public_65f9c04
        public_65f9bfc : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_65f9c04 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_65f9c0f
        xor ecx, ecx
        jmp public_65f9c17
        public_65f9c0f : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_65f9c17 : nop
        cmp edi, ecx
        ja public_65f9c63
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_65f9c30
        public_65f9c22 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_65f9c22
        public_65f9c30 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_65f9c4a
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_65f9c4a : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 2
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_65f9c63 : nop
        test eax, eax
        jne public_65f9c6b
        xor edi, edi
        jmp public_65f9c73
        public_65f9c6b : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_65f9c73 : nop
        test edx, edx
        jne public_65f9c7b
        xor ecx, ecx
        jmp public_65f9c83
        public_65f9c7b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_65f9c83 : nop
        cmp edi, ecx
        ja public_65f9d05
        test edx, edx
        jne public_65f9c93
        xor ecx, ecx
        jmp public_65f9c9b
        public_65f9c93 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_65f9c9b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_65f9cb0
        public_65f9ca2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_65f9ca2
        public_65f9cb0 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_65f9cd2
        lea esp, ss:[esp]
        public_65f9cc0 : nop
        test edx, edx
        je public_65f9cc8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_65f9cc8 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_65f9cc0
        public_65f9cd2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_65f9cec
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_65f9cec : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub esi, eax
        sar esi, 2
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_65f9d05 : nop
        push edx
        call public_6600bb0
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_65f9d19
        xor eax, eax
        jmp public_65f9d21
        public_65f9d19 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_65f9d21 : nop
        test eax, eax
        jge public_65f9d27
        xor eax, eax
        public_65f9d27 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6600bb6
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_65f9d58
        public_65f9d46 : nop
        test ecx, ecx
        je public_65f9d4e
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_65f9d4e : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_65f9d46
        public_65f9d58 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_65f9d5e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65f9be0)
    }
}

#undef public_65f9bfc
#undef public_65f9c04
#undef public_65f9c0f
#undef public_65f9c17
#undef public_65f9c22
#undef public_65f9c30
#undef public_65f9c4a
#undef public_65f9c63
#undef public_65f9c6b
#undef public_65f9c73
#undef public_65f9c7b
#undef public_65f9c83
#undef public_65f9c93
#undef public_65f9c9b
#undef public_65f9ca2
#undef public_65f9cb0
#undef public_65f9cc0
#undef public_65f9cc8
#undef public_65f9cd2
#undef public_65f9cec
#undef public_65f9d05
#undef public_65f9d19
#undef public_65f9d21
#undef public_65f9d27
#undef public_65f9d46
#undef public_65f9d4e
#undef public_65f9d58
#undef public_65f9d5e
