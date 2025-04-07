#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f85de1 _public_6f85de1
#define public_6f85de8 _public_6f85de8
#define public_6f85e06 _public_6f85e06
#define public_6f85e10 _public_6f85e10
#define public_6f85e2a _public_6f85e2a
#define public_6f85e32 _public_6f85e32
#define public_6f85e3d _public_6f85e3d
#define public_6f85e45 _public_6f85e45
#define public_6f85e75 _public_6f85e75
#define public_6f85ec7 _public_6f85ec7
#define public_6f85eef _public_6f85eef
#define public_6f85f15 _public_6f85f15
#define public_6f85f18 _public_6f85f18
#define public_6f85f23 _public_6f85f23
#define public_6f85f30 _public_6f85f30
#define public_6f85f4f _public_6f85f4f
#define public_6f85f59 _public_6f85f59

PROC_DECLARE(0x6f85d90, internal_6f85d90, public_6f85d90);
extern "C" NAKED register_t __cdecl internal_6f85d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, ecx
        lea ecx, ss:[ebp+0x50]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x48], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        mov dword ptr ds : [ecx+4], eax
        push edi
        mov dword ptr ds : [ecx+8], edx
        lea edi, ss:[ebp+4]
        mov ecx, edi
        mov dword ptr ss : [ebp+0x4C], 0
        mov dword ptr ss : [ebp+0x6C], ebx
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov edi, dword ptr ss : [ebp+0x60]
        cmp edi, dword ptr ss : [ebp+0x64]
        je public_6f85e10
        mov eax, dword ptr ds : [ebx+8]
        public_6f85de1 : nop
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, eax
        je public_6f85e06
        public_6f85de8 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+0xC]
        push 0
        push eax
        push edx
        call dword ptr ds : [public_6fb34cc]
        mov eax, dword ptr ds : [ebx+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f85de8
        public_6f85e06 : nop
        mov ecx, dword ptr ss : [ebp+0x64]
        add edi, 4
        cmp edi, ecx
        jne public_6f85de1
        public_6f85e10 : nop
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ss:[ebp+0x5C]
        cmp esi, edi
        je public_6f85f18
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        jne public_6f85e2a
        xor edx, edx
        jmp public_6f85e32
        public_6f85e2a : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebp
        sar edx, 2
        public_6f85e32 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f85e3d
        xor eax, eax
        jmp public_6f85e45
        public_6f85e3d : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f85e45 : nop
        cmp edx, eax
        ja public_6f85e75
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push ebp
        call public_6f6a640
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f85f15
        public_6f85e75 : nop
        mov ecx, esi
        call public_6eb6b30
        mov ecx, edi
        mov ebp, eax
        call public_6fa3db0
        cmp eax, ebp
        ja public_6f85ec7
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        push ecx
        lea ebp, ss:[ebp+eax*4]
        push ebp
        push edx
        call public_6f6a640
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f85f15
        public_6f85ec7 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f85eef
        xor eax, eax
        public_6f85eef : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        public_6f85f15 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f85f18 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [edi+8]
        je public_6f85f59
        mov eax, dword ptr ds : [ebx+8]
        public_6f85f23 : nop
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, eax
        je public_6f85f4f
        lea ebx, ds:[ebx]
        public_6f85f30 : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0xC]
        push 1
        push edx
        push ecx
        call dword ptr ds : [public_6fb34cc]
        mov eax, dword ptr ds : [ebx+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f85f30
        public_6f85f4f : nop
        mov ecx, dword ptr ds : [edi+8]
        add ebp, 4
        cmp ebp, ecx
        jne public_6f85f23
        public_6f85f59 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6f85d90)
    }
}

#undef public_6f85de1
#undef public_6f85de8
#undef public_6f85e06
#undef public_6f85e10
#undef public_6f85e2a
#undef public_6f85e32
#undef public_6f85e3d
#undef public_6f85e45
#undef public_6f85e75
#undef public_6f85ec7
#undef public_6f85eef
#undef public_6f85f15
#undef public_6f85f18
#undef public_6f85f23
#undef public_6f85f30
#undef public_6f85f4f
#undef public_6f85f59
