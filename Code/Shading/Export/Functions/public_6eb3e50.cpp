#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3e50);

#define public_6eb3e74 _public_6eb3e74

PROC_DECLARE(0x6eb3e50, internal_6eb3e50, public_6eb3e50);
extern "C" NAKED register_t __cdecl internal_6eb3e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6ed1360
        mov dword ptr ds : [esi+4], offset public_6ed1338
        je public_6eb3e74
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], 0
        public_6eb3e74 : nop
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb3e50)
    }
}

#undef public_6eb3e74
