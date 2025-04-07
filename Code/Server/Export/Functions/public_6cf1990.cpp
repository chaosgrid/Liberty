#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);

#define public_6cf1a1d _public_6cf1a1d
#define public_6cf1a26 _public_6cf1a26
#define public_6cf1a38 _public_6cf1a38

PROC_DECLARE(0x6cf1990, internal_6cf1990, public_6cf1990);
extern "C" NAKED register_t __cdecl internal_6cf1990()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        jbe public_6cf1a38
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ss:[ebp-1]
        cmp eax, ecx
        jae public_6cf1a38
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf1a38
        mov eax, ebp
        imul eax, 0x418
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+ecx-0x4C]
        push esi
        mov esi, dword ptr ds : [eax]
        test esi, esi
        je public_6cf1a26
        push edi
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        mov dword ptr ds : [eax], 0
        je public_6cf1a1d
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6cf1a1d
        mov eax, dword ptr ds : [public_6d90260]
        mov edx, edi
        imul edx, 0x418
        mov dword ptr ds : [edx+eax-0x4C], 0
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [eax+0x198]
        public_6cf1a1d : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        public_6cf1a26 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [eax+0x198]
        pop esi
        pop ebx
        public_6cf1a38 : nop
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6cf1990)
    }
}

#undef public_6cf1a1d
#undef public_6cf1a26
#undef public_6cf1a38
