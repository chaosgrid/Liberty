#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d127d0);

#define public_6d127f3 _public_6d127f3
#define public_6d127f7 _public_6d127f7
#define public_6d12800 _public_6d12800
#define public_6d12802 _public_6d12802
#define public_6d12832 _public_6d12832
#define public_6d1283d _public_6d1283d

PROC_DECLARE(0x6d127d0, internal_6d127d0, public_6d127d0);
extern "C" NAKED register_t __cdecl internal_6d127d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+0x178]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx+eax*4]
        push ebx
        mov ebx, dword ptr ds : [edx]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        xor edi, edi
        jmp public_6d127f7
        public_6d127f3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d127f7 : nop
        test edi, edi
        jne public_6d12800
        mov edi, dword ptr ds : [ecx+0x14]
        jmp public_6d12802
        public_6d12800 : nop
        mov edi, dword ptr ds : [edi]
        public_6d12802 : nop
        test edi, edi
        je public_6d1283d
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6d127f7
        test ebx, ebx
        je public_6d127f7
        push ebx
        push eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6d127f3
        test ebp, ebp
        mov eax, dword ptr ds : [esi+4]
        je public_6d12832
        test eax, eax
        je public_6d12832
        cmp eax, ebp
        jne public_6d127f3
        public_6d12832 : nop
        mov eax, dword ptr ds : [esi+0xC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6d1283d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d127d0)
    }
}

#undef public_6d127f3
#undef public_6d127f7
#undef public_6d12800
#undef public_6d12802
#undef public_6d12832
#undef public_6d1283d
