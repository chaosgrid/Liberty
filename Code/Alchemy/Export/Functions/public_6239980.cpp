#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623998f _public_623998f
#define public_62399a8 _public_62399a8

PROC_DECLARE(0x6239980, internal_6239980, public_6239980);
extern "C" NAKED register_t __cdecl internal_6239980()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_623998f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_623998f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62399a8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_62399a8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6239980)
    }
}

#undef public_623998f
#undef public_62399a8
