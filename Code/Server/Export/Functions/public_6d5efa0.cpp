#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c600);

#define public_6d5efd2 _public_6d5efd2
#define public_6d5efee _public_6d5efee

PROC_DECLARE(0x6d5efa0, internal_6d5efa0, public_6d5efa0);
extern "C" NAKED register_t __cdecl internal_6d5efa0()
{
    __asm
    {
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d5efee
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 1
        jne public_6d5efd2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d4c430
        xor eax, eax
        ret 
        public_6d5efd2 : nop
        mov edx, dword ptr ss : [esp+4]
        imul edx, 0x418
        push eax
        mov eax, dword ptr ds : [public_6d90260]
        lea ecx, ds:[edx+eax-0x418]
        call public_6d4c600
        public_6d5efee : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d5efa0)
    }
}

#undef public_6d5efd2
#undef public_6d5efee
