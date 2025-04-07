#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_624336f _public_624336f
#define public_6243388 _public_6243388

PROC_DECLARE(0x6243360, internal_6243360, public_6243360);
extern "C" NAKED register_t __cdecl internal_6243360()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_624336f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_624336f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6243388
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6243388 : nop
        ret 4
        UNREACHABLE_TRAP(0x6243360)
    }
}

#undef public_624336f
#undef public_6243388
