#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62857f0);

#define public_627d13e _public_627d13e

PROC_DECLARE(0x627d120, internal_627d120, public_627d120);
extern "C" NAKED register_t __cdecl internal_627d120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        xor edx, edx
        cmp eax, edx
        je public_627d13e
        push esi
        mov esi, dword ptr ss : [esp+8]
        push ecx
        push esi
        call public_62857f0
        add esp, 8
        mov eax, esi
        pop esi
        ret 4
        public_627d13e : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        ret 4
        UNREACHABLE_TRAP(0x627d120)
    }
}

#undef public_627d13e
