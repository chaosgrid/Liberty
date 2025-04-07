#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628e0ef _public_628e0ef
#define public_628e0f4 _public_628e0f4
#define public_628e0fc _public_628e0fc
#define public_628e101 _public_628e101
#define public_628e10d _public_628e10d
#define public_628e130 _public_628e130
#define public_628e144 _public_628e144
#define public_628e1af _public_628e1af
#define public_628e1f0 _public_628e1f0
#define public_628e1fd _public_628e1fd
#define public_628e214 _public_628e214
#define public_628e223 _public_628e223
#define public_628e230 _public_628e230
#define public_628e23b _public_628e23b

PROC_DECLARE(0x628e0b0, internal_628e0b0, public_628e0b0);
extern "C" NAKED register_t __cdecl internal_628e0b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_628e1af
        test edx, edx
        je public_628e0ef
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_628e0f4
        public_628e0ef : nop
        mov ecx, 1
        public_628e0f4 : nop
        test edx, edx
        jne public_628e0fc
        xor eax, eax
        jmp public_628e101
        public_628e0fc : nop
        sub eax, edx
        sar eax, 2
        public_628e101 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_628e10d
        xor eax, eax
        public_628e10d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_628e144
        lea ebx, ds:[ebx]
        public_628e130 : nop
        push ebx
        push ebp
        call public_630cd00
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_628e130
        public_628e144 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_630cd00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_626a600
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_628e1af : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_628e1fd
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 2
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_628e23b
        public_628e1f0 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_628e1f0
        jmp public_628e23b
        public_628e1fd : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_628e223
        public_628e214 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_628e214
        public_628e223 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_628e23b
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_628e230 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_628e230
        public_628e23b : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x628e0b0)
    }
}

#undef public_628e0ef
#undef public_628e0f4
#undef public_628e0fc
#undef public_628e101
#undef public_628e10d
#undef public_628e130
#undef public_628e144
#undef public_628e1af
#undef public_628e1f0
#undef public_628e1fd
#undef public_628e214
#undef public_628e223
#undef public_628e230
#undef public_628e23b
