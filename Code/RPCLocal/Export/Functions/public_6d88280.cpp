#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88280);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d882b2 _public_6d882b2
#define public_6d882b9 _public_6d882b9

PROC_DECLARE(0x6d88280, internal_6d88280, public_6d88280);
extern "C" NAKED register_t __cdecl internal_6d88280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6dbbb5c]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_6d882b9
        push 0x30
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d882b2
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x14], bl
        mov dword ptr ds : [public_6dbbb5c], eax
        pop ebx
        ret 
        public_6d882b2 : nop
        xor eax, eax
        mov dword ptr ds : [public_6dbbb5c], eax
        public_6d882b9 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d88280)
    }
}

#undef public_6d882b2
#undef public_6d882b9
