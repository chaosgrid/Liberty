#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632fff0);

#define public_633000a _public_633000a
#define public_6330011 _public_6330011

PROC_DECLARE(0x632fff0, internal_632fff0, public_632fff0);
extern "C" NAKED register_t __cdecl internal_632fff0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [ecx]
        lea ecx, ds:[esi+edx]
        add ecx, eax
        cmp esi, ecx
        jae public_633000a
        cmp edx, ecx
        jae public_633000a
        cmp eax, ecx
        jb public_6330011
        public_633000a : nop
        mov eax, 0x270F
        pop esi
        ret 
        public_6330011 : nop
        sub eax, edx
        cdq 
        xor eax, edx
        sub eax, edx
        lea eax, ds:[eax+esi*2]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x632fff0)
    }
}

#undef public_633000a
#undef public_6330011
