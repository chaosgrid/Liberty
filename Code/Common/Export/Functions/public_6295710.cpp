#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295710);
CLANG_FORWARD_PROC_SYMBOL(public_62f4740);

#define public_6295729 _public_6295729

PROC_DECLARE(0x6295710, internal_6295710, public_6295710);
extern "C" NAKED register_t __cdecl internal_6295710()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 0xA
        jne public_6295729
        mov ecx, dword ptr ds : [esi+0xC]
        pop esi
        jmp public_62f4740
        public_6295729 : nop
        fld dword ptr ds : [public_6399408]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6295710)
    }
}

#undef public_6295729
