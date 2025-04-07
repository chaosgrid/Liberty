#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6217f5f _public_6217f5f
#define public_6217f78 _public_6217f78

PROC_DECLARE(0x6217f50, internal_6217f50, public_6217f50);
extern "C" NAKED register_t __cdecl internal_6217f50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6217f5f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6217f5f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6217f78
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6217f78 : nop
        ret 4
        UNREACHABLE_TRAP(0x6217f50)
    }
}

#undef public_6217f5f
#undef public_6217f78
