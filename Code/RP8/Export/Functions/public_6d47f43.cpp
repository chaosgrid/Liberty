#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47f43);
CLANG_FORWARD_PROC_SYMBOL(public_6d57c3a);

#define public_6d47f7e _public_6d47f7e

PROC_DECLARE(0x6d47f43, internal_6d47f43, public_6d47f43);
extern "C" NAKED register_t __cdecl internal_6d47f43()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        cmp eax, edx
        je public_6d47f7e
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, edx
        je public_6d47f7e
        push esi
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x18], edx
        mov esi, dword ptr ds : [ecx+0xC]
        neg esi
        sbb esi, esi
        push edx
        and esi, 7
        mov dword ptr ds : [ecx], esi
        push eax
        mov eax, dword ptr ds : [eax+0x1C]
        push dword ptr ds : [eax+0x14]
        call public_6d57c3a
        add esp, 0xC
        xor eax, eax
        pop esi
        ret 
        public_6d47f7e : nop
        push 0xFFFFFFFE
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6d47f43)
    }
}

#undef public_6d47f7e
