#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63299f5 _public_63299f5

PROC_DECLARE(0x63299c0, internal_63299c0, public_63299c0);
extern "C" NAKED register_t __cdecl internal_63299c0()
{
    __asm
    {
        push esi
        push 0x14
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63299f5
        add esi, 4
        mov dword ptr ds : [eax], offset public_63a43a4
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        pop esi
        ret 
        public_63299f5 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63299c0)
    }
}

#undef public_63299f5
