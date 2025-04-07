#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfabf0 _public_6cfabf0
#define public_6cfabf2 _public_6cfabf2

PROC_DECLARE(0x6cfabb0, internal_6cfabb0, public_6cfabb0);
extern "C" NAKED register_t __cdecl internal_6cfabb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cfabf2
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfabf0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x44]
        xor eax, eax
        pop esi
        ret 
        public_6cfabf0 : nop
        mov eax, esi
        public_6cfabf2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfabb0)
    }
}

#undef public_6cfabf0
#undef public_6cfabf2
