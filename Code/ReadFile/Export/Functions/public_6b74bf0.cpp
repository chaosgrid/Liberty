#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76470);
CLANG_FORWARD_PROC_SYMBOL(public_6b766f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b74c44 _public_6b74c44
#define public_6b74c50 _public_6b74c50
#define public_6b74c5d _public_6b74c5d
#define public_6b74cb2 _public_6b74cb2
#define public_6b74cc1 _public_6b74cc1
#define public_6b74ccd _public_6b74ccd
#define public_6b74ce7 _public_6b74ce7
#define public_6b74d19 _public_6b74d19
#define public_6b74d21 _public_6b74d21
#define public_6b74d3d _public_6b74d3d
#define public_6b74d42 _public_6b74d42
#define public_6b74d4a _public_6b74d4a

PROC_DECLARE(0x6b74bf0, internal_6b74bf0, public_6b74bf0);
extern "C" NAKED register_t __cdecl internal_6b74bf0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        test ecx, ecx
        je public_6b74d4a
        cmp ecx, dword ptr ds : [esi+0x130]
        je public_6b74d4a
        mov eax, dword ptr ds : [esi+0x120]
        test eax, eax
        je public_6b74c44
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov edi, eax
        test edi, edi
        jne public_6b74d42
        mov eax, dword ptr ds : [esi+0x120]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [esi+0x11C], eax
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6b74c44 : nop
        mov edx, dword ptr ds : [esi+0x14C]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6b74c5d
        public_6b74c50 : nop
        lea edi, ds:[eax+8]
        cmp edi, ecx
        je public_6b74cc1
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6b74c50
        public_6b74c5d : nop
        lea edx, ss:[esp+0x10]
        lea edi, ds:[esi+0x134]
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        push eax
        mov ecx, edi
        call public_6b76470
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_6b74d4a
        lea esi, ds:[eax+0x10]
        push ebx
        mov ebx, dword ptr ds : [eax+0xC]
        push ebp
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [public_6b79014]
        test eax, eax
        je public_6b74d19
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6b74cb2
        push eax
        call dword ptr ds : [public_6b79010]
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6b74cb2 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call ebp
        mov dword ptr ds : [esi+4], 0
        jmp public_6b74d21
        public_6b74cc1 : nop
        mov edx, dword ptr ds : [esi+0x14C]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6b74d3d
        public_6b74ccd : nop
        lea edi, ds:[eax+8]
        cmp edi, ecx
        je public_6b74ce7
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6b74ccd
        mov edi, 1
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6b74ce7 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        call public_6b782a0
        mov eax, dword ptr ds : [esi+0x150]
        add esp, 4
        dec eax
        mov edi, 1
        mov dword ptr ds : [esi+0x150], eax
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6b74d19 : nop
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6b74d21 : nop
        push ebx
        mov dword ptr ds : [esi], 0xFFFFFFFF
        call ebp
        lea eax, ss:[esp+0x10]
        mov ecx, edi
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        call public_6b766f0
        pop ebp
        pop ebx
        public_6b74d3d : nop
        mov edi, 1
        public_6b74d42 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6b74d4a : nop
        mov dword ptr ds : [esi+0x11C], 6
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b74bf0)
    }
}

#undef public_6b74c44
#undef public_6b74c50
#undef public_6b74c5d
#undef public_6b74cb2
#undef public_6b74cc1
#undef public_6b74ccd
#undef public_6b74ce7
#undef public_6b74d19
#undef public_6b74d21
#undef public_6b74d3d
#undef public_6b74d42
#undef public_6b74d4a
