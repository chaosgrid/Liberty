#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6212fbf _public_6212fbf
#define public_6212fd8 _public_6212fd8

PROC_DECLARE(0x6212fb0, internal_6212fb0, public_6212fb0);
extern "C" NAKED register_t __cdecl internal_6212fb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6212fbf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6212fbf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6212fd8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6212fd8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6212fb0)
    }
}

#undef public_6212fbf
#undef public_6212fd8
