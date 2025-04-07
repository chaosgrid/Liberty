#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623ca1f _public_623ca1f
#define public_623ca38 _public_623ca38

PROC_DECLARE(0x623ca10, internal_623ca10, public_623ca10);
extern "C" NAKED register_t __cdecl internal_623ca10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_623ca1f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_623ca1f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_623ca38
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623ca38 : nop
        ret 4
        UNREACHABLE_TRAP(0x623ca10)
    }
}

#undef public_623ca1f
#undef public_623ca38
