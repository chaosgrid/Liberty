#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5940);

#define public_6ed5951 _public_6ed5951

PROC_DECLARE(0x6ed5940, internal_6ed5940, public_6ed5940);
extern "C" NAKED register_t __cdecl internal_6ed5940()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6ed5951
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+8]
        public_6ed5951 : nop
        mov dword ptr ds : [esi+8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed5940)
    }
}

#undef public_6ed5951
