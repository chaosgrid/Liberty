#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5b920);

#define public_6d561e3 _public_6d561e3

PROC_DECLARE(0x6d561c0, internal_6d561c0, public_6d561c0);
extern "C" NAKED register_t __cdecl internal_6d561c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_6d90260]
        mov ecx, eax
        imul ecx, 0x418
        mov ecx, dword ptr ds : [ecx+edx-0x14]
        test ecx, ecx
        je public_6d561e3
        push eax
        call public_6d5b920
        xor eax, eax
        ret 
        public_6d561e3 : nop
        mov eax, 0xFFFFFFFD
        ret 
        UNREACHABLE_TRAP(0x6d561c0)
    }
}

#undef public_6d561e3
