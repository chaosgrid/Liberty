#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623c71f _public_623c71f
#define public_623c738 _public_623c738

PROC_DECLARE(0x623c710, internal_623c710, public_623c710);
extern "C" NAKED register_t __cdecl internal_623c710()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_623c71f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_623c71f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_623c738
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623c738 : nop
        ret 4
        UNREACHABLE_TRAP(0x623c710)
    }
}

#undef public_623c71f
#undef public_623c738
