#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6239c4f _public_6239c4f
#define public_6239c68 _public_6239c68

PROC_DECLARE(0x6239c40, internal_6239c40, public_6239c40);
extern "C" NAKED register_t __cdecl internal_6239c40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6239c4f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6239c4f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6239c68
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6239c68 : nop
        ret 4
        UNREACHABLE_TRAP(0x6239c40)
    }
}

#undef public_6239c4f
#undef public_6239c68
