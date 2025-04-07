#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62416cf _public_62416cf
#define public_62416e8 _public_62416e8

PROC_DECLARE(0x62416c0, internal_62416c0, public_62416c0);
extern "C" NAKED register_t __cdecl internal_62416c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_62416cf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_62416cf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62416e8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62416e8 : nop
        ret 4
        UNREACHABLE_TRAP(0x62416c0)
    }
}

#undef public_62416cf
#undef public_62416e8
