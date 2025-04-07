#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32130);

#define public_6c34d7f _public_6c34d7f
#define public_6c34da6 _public_6c34da6
#define public_6c34da9 _public_6c34da9

PROC_DECLARE(0x6c34d70, internal_6c34d70, public_6c34d70);
extern "C" NAKED register_t __cdecl internal_6c34d70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6c34d7f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6c34d7f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6c34da9
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6c34da6
        mov ecx, esi
        call public_6c32130
        push esi
        call dword ptr ds : [public_6c3603c]
        add esp, 4
        public_6c34da6 : nop
        xor eax, eax
        pop esi
        public_6c34da9 : nop
        ret 4
        UNREACHABLE_TRAP(0x6c34d70)
    }
}

#undef public_6c34d7f
#undef public_6c34da6
#undef public_6c34da9
