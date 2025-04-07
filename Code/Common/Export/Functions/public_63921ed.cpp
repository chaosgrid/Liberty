#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63921ed);

#define public_6392203 _public_6392203
#define public_6392211 _public_6392211

PROC_DECLARE(0x63921ed, internal_63921ed, public_63921ed);
extern "C" NAKED register_t __cdecl internal_63921ed()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi], offset public_63a5ac0
        test eax, eax
        je public_6392203
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6392203 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_6392211
        push esi
        call dword ptr ds : [public_63990f4]
        public_6392211 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63921ed)
    }
}

#undef public_6392203
#undef public_6392211
