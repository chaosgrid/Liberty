#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f077a0 _public_6f077a0

PROC_DECLARE(0x6f07750, internal_6f07750, public_6f07750);
extern "C" NAKED register_t __cdecl internal_6f07750()
{
    __asm
    {
        push esi
        push 0x20
        mov esi, ecx
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6f077a0
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], offset public_6fb839c
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        push edi
        lea ecx, ds:[esi+0xC]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0xC]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+0x18], edx
        pop edi
        mov dword ptr ds : [eax+0x1C], 0
        mov dword ptr ds : [eax], offset public_6fb8384
        pop esi
        ret 
        public_6f077a0 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f07750)
    }
}

#undef public_6f077a0
