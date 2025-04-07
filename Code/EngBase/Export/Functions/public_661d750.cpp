#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d750);

#define public_661d76a _public_661d76a
#define public_661d79a _public_661d79a

PROC_DECLARE(0x661d750, internal_661d750, public_661d750);
extern "C" NAKED register_t __cdecl internal_661d750()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_662952c
        mov ecx, dword ptr ds : [ecx+0x10]
        push esi
        mov esi, dword ptr ds : [public_662902c]
        test ecx, ecx
        je public_661d76a
        push ecx
        call esi
        add esp, 4
        public_661d76a : nop
        mov eax, dword ptr ds : [public_662b10c]
        dec eax
        mov dword ptr ds : [public_662b10c], eax
        jne public_661d79a
        mov eax, dword ptr ds : [public_662b104]
        test eax, eax
        je public_661d79a
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [public_662b104], 0
        mov dword ptr ds : [public_662b108], 0
        public_661d79a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x661d750)
    }
}

#undef public_661d76a
#undef public_661d79a
