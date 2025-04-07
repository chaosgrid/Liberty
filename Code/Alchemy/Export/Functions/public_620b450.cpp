#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b45f _public_620b45f
#define public_620b478 _public_620b478

PROC_DECLARE(0x620b450, internal_620b450, public_620b450);
extern "C" NAKED register_t __cdecl internal_620b450()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_620b45f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_620b45f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_620b478
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620b478 : nop
        ret 4
        UNREACHABLE_TRAP(0x620b450)
    }
}

#undef public_620b45f
#undef public_620b478
