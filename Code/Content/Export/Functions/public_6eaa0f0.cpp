#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaa0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eaa154 _public_6eaa154
#define public_6eaa15c _public_6eaa15c
#define public_6eaa168 _public_6eaa168
#define public_6eaa188 _public_6eaa188
#define public_6eaa19c _public_6eaa19c
#define public_6eaa1c1 _public_6eaa1c1
#define public_6eaa1c9 _public_6eaa1c9
#define public_6eaa1da _public_6eaa1da
#define public_6eaa1e5 _public_6eaa1e5
#define public_6eaa20a _public_6eaa20a
#define public_6eaa21d _public_6eaa21d
#define public_6eaa230 _public_6eaa230
#define public_6eaa244 _public_6eaa244

PROC_DECLARE(0x6eaa0f0, internal_6eaa0f0, public_6eaa0f0);
extern "C" NAKED register_t __cdecl internal_6eaa0f0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x48]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_6fb35c8]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 8
        test eax, eax
        je public_6eaa21d
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+0x48]
        mov ebx, eax
        lea eax, ss:[esp+0x14]
        push eax
        push ebx
        push ecx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_6fb35cc]
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6eaa154
        xor edx, edx
        jmp public_6eaa15c
        public_6eaa154 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, eax
        sar edx, 3
        public_6eaa15c : nop
        cmp edx, ecx
        jae public_6eaa1da
        test ecx, ecx
        mov eax, ecx
        jge public_6eaa168
        xor eax, eax
        public_6eaa168 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], eax
        mov ebx, eax
        je public_6eaa19c
        public_6eaa188 : nop
        push edi
        push ebx
        call public_6f305b0
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6eaa188
        public_6eaa19c : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[ecx+edx*8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        test edx, edx
        mov dword ptr ds : [esi+0xC], eax
        jne public_6eaa1c1
        xor eax, eax
        jmp public_6eaa1c9
        public_6eaa1c1 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 3
        public_6eaa1c9 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edx
        public_6eaa1da : nop
        xor edi, edi
        test ecx, ecx
        jle public_6eaa20a
        mov ebp, 1
        public_6eaa1e5 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx+edi*4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebp
        call public_6f96770
        mov eax, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, eax
        jl public_6eaa1e5
        public_6eaa20a : nop
        push ebx
        call public_6fa8fe0
        add esp, 4
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        public_6eaa21d : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        je public_6eaa244
        lea ecx, ds:[ecx]
        public_6eaa230 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6eaa230
        public_6eaa244 : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6eaa0f0)
    }
}

#undef public_6eaa154
#undef public_6eaa15c
#undef public_6eaa168
#undef public_6eaa188
#undef public_6eaa19c
#undef public_6eaa1c1
#undef public_6eaa1c9
#undef public_6eaa1da
#undef public_6eaa1e5
#undef public_6eaa20a
#undef public_6eaa21d
#undef public_6eaa230
#undef public_6eaa244
