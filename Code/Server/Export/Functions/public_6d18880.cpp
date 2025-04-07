#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d142c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d143e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d18880);

#define public_6d188ba _public_6d188ba
#define public_6d188e1 _public_6d188e1

PROC_DECLARE(0x6d18880, internal_6d18880, public_6d18880);
extern "C" NAKED register_t __cdecl internal_6d18880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d90260]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ebx
        imul esi, 0x418
        mov ecx, dword ptr ds : [esi+eax-0x20]
        push edi
        mov edi, dword ptr ds : [esi+eax-0x2C]
        test edi, 0x3FFFFFFF
        je public_6d188e1
        test ecx, 0x3FFFFFFF
        je public_6d188ba
        push ecx
        push ebx
        call public_6d15650
        mov ecx, eax
        call public_6d143e0
        public_6d188ba : nop
        push edi
        push ebx
        call public_6d15650
        mov ecx, eax
        call public_6d142c0
        mov eax, dword ptr ds : [public_6d90260]
        xor ecx, ecx
        mov dword ptr ds : [esi+eax-0x2C], ecx
        mov edx, dword ptr ds : [public_6d90260]
        pop edi
        mov dword ptr ds : [esi+edx-0x20], ecx
        pop esi
        pop ebx
        ret 
        public_6d188e1 : nop
        xor ecx, ecx
        mov dword ptr ds : [esi+eax-0x2C], ecx
        mov eax, dword ptr ds : [public_6d90260]
        pop edi
        mov dword ptr ds : [esi+eax-0x20], ecx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d18880)
    }
}

#undef public_6d188ba
#undef public_6d188e1
