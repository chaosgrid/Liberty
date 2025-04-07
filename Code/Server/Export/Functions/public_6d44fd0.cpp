#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d177b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17a10);
CLANG_FORWARD_PROC_SYMBOL(public_6d17ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17b40);
CLANG_FORWARD_PROC_SYMBOL(public_6d543c0);

#define public_6d45042 _public_6d45042
#define public_6d45071 _public_6d45071
#define public_6d4507d _public_6d4507d

PROC_DECLARE(0x6d44fd0, internal_6d44fd0, public_6d44fd0);
extern "C" NAKED register_t __cdecl internal_6d44fd0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        jbe public_6d4507d
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, ecx
        jae public_6d4507d
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d4507d
        push esi
        mov esi, edi
        imul esi, 0x418
        mov eax, dword ptr ds : [esi+ecx-0x20]
        test eax, 0x3FFFFFFF
        je public_6d45042
        push 0
        push edi
        push eax
        mov ecx, offset public_6d8facc
        call public_6d17b40
        mov eax, dword ptr ds : [public_6d90260]
        mov ecx, dword ptr ds : [esi+eax-0x20]
        push edi
        push ecx
        mov ecx, offset public_6d8facc
        call public_6d17a10
        mov ecx, dword ptr ds : [public_6d90260]
        public_6d45042 : nop
        mov eax, dword ptr ds : [esi+ecx-0x2C]
        test eax, 0x3FFFFFFF
        je public_6d45071
        push 0
        push edi
        push eax
        mov ecx, offset public_6d8facc
        call public_6d17ad0
        mov edx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [esi+edx-0x2C]
        push edi
        push eax
        mov ecx, offset public_6d8facc
        call public_6d177b0
        public_6d45071 : nop
        push edi
        mov ecx, offset public_6d90260
        call public_6d543c0
        pop esi
        public_6d4507d : nop
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x6d44fd0)
    }
}

#undef public_6d45042
#undef public_6d45071
#undef public_6d4507d
