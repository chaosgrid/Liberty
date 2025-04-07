#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);

#define public_627d0ce _public_627d0ce

PROC_DECLARE(0x627d0b0, internal_627d0b0, public_627d0b0);
extern "C" NAKED register_t __cdecl internal_627d0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        xor edx, edx
        cmp eax, edx
        je public_627d0ce
        push esi
        mov esi, dword ptr ss : [esp+8]
        push ecx
        push esi
        call public_6284290
        add esp, 8
        mov eax, esi
        pop esi
        ret 4
        public_627d0ce : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        ret 4
        UNREACHABLE_TRAP(0x627d0b0)
    }
}

#undef public_627d0ce
