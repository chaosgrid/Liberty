#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5e480);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6d5e4c2 _public_6d5e4c2
#define public_6d5e4c4 _public_6d5e4c4

PROC_DECLARE(0x6d5e480, internal_6d5e480, public_6d5e480);
extern "C" NAKED register_t __cdecl internal_6d5e480()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6d5e4c4
        push ecx
        call dword ptr ds : [public_6d643c0]
        add esp, 4
        test eax, eax
        mov ecx, 0xFFFFFFFE
        je public_6d5e4c2
        fld dword ptr ds : [eax+0x100]
        call public_6d60150
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d5e4c2 : nop
        mov eax, ecx
        public_6d5e4c4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5e480)
    }
}

#undef public_6d5e4c2
#undef public_6d5e4c4
