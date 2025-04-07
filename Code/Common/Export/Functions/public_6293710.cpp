#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293710);

#define public_6293725 _public_6293725

PROC_DECLARE(0x6293710, internal_6293710, public_6293710);
extern "C" NAKED register_t __cdecl internal_6293710()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_6293725
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx+8]
        public_6293725 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6293710)
    }
}

#undef public_6293725
