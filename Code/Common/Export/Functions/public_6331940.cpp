#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331940);

#define public_633194e _public_633194e

PROC_DECLARE(0x6331940, internal_6331940, public_6331940);
extern "C" NAKED register_t __cdecl internal_6331940()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_633194e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_633194e : nop
        ret 
        UNREACHABLE_TRAP(0x6331940)
    }
}

#undef public_633194e
