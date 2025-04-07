#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);

#define public_6d11b66 _public_6d11b66
#define public_6d11b68 _public_6d11b68

PROC_DECLARE(0x6d11b50, internal_6d11b50, public_6d11b50);
extern "C" NAKED register_t __cdecl internal_6d11b50()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor al, al
        test edx, edx
        je public_6d11b66
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d11b66
        cmp ecx, edx
        jne public_6d11b68
        public_6d11b66 : nop
        mov al, 1
        public_6d11b68 : nop
        ret 
        UNREACHABLE_TRAP(0x6d11b50)
    }
}

#undef public_6d11b66
#undef public_6d11b68
