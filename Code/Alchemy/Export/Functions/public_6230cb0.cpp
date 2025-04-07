#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6230cbf _public_6230cbf
#define public_6230cd8 _public_6230cd8

PROC_DECLARE(0x6230cb0, internal_6230cb0, public_6230cb0);
extern "C" NAKED register_t __cdecl internal_6230cb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6230cbf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6230cbf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6230cd8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6230cd8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6230cb0)
    }
}

#undef public_6230cbf
#undef public_6230cd8
