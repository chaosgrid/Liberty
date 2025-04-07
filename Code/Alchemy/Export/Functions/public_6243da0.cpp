#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6243daf _public_6243daf
#define public_6243dc8 _public_6243dc8

PROC_DECLARE(0x6243da0, internal_6243da0, public_6243da0);
extern "C" NAKED register_t __cdecl internal_6243da0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6243daf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6243daf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6243dc8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6243dc8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6243da0)
    }
}

#undef public_6243daf
#undef public_6243dc8
