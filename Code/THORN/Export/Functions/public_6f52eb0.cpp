#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52eb0);

#define public_6f52ec1 _public_6f52ec1

PROC_DECLARE(0x6f52eb0, internal_6f52eb0, public_6f52eb0);
extern "C" NAKED register_t __cdecl internal_6f52eb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFF
        jg public_6f52ec1
        mov eax, 2
        ret 
        public_6f52ec1 : nop
        xor ecx, ecx
        cmp eax, 0xFFFF
        setg cl
        dec ecx
        and ecx, 0xFFFFFFFE
        add ecx, 5
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6f52eb0)
    }
}

#undef public_6f52ec1
