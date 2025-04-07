#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62309df _public_62309df
#define public_62309f8 _public_62309f8

PROC_DECLARE(0x62309d0, internal_62309d0, public_62309d0);
extern "C" NAKED register_t __cdecl internal_62309d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_62309df
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_62309df : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62309f8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62309f8 : nop
        ret 4
        UNREACHABLE_TRAP(0x62309d0)
    }
}

#undef public_62309df
#undef public_62309f8
