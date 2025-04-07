#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625d00);

#define public_6627f0f _public_6627f0f
#define public_6627f36 _public_6627f36
#define public_6627f39 _public_6627f39

PROC_DECLARE(0x6627f00, internal_6627f00, public_6627f00);
extern "C" NAKED register_t __cdecl internal_6627f00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6627f0f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6627f0f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6627f39
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6627f36
        mov ecx, esi
        call public_6625d00
        push esi
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_6627f36 : nop
        xor eax, eax
        pop esi
        public_6627f39 : nop
        ret 4
        UNREACHABLE_TRAP(0x6627f00)
    }
}

#undef public_6627f0f
#undef public_6627f36
#undef public_6627f39
