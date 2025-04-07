#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8892 _public_6cf8892

PROC_DECLARE(0x6cf8870, internal_6cf8870, public_6cf8870);
extern "C" NAKED register_t __cdecl internal_6cf8870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, 0xFFFFFFFE
        je public_6cf8892
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8892
        xor eax, eax
        pop esi
        ret 
        public_6cf8892 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8870)
    }
}

#undef public_6cf8892
