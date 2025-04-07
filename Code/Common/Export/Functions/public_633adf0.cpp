#include "Common-PCH.h"


#define public_633ae33 _public_633ae33

PROC_DECLARE(0x633adf0, internal_633adf0, public_633adf0);
extern "C" NAKED register_t __cdecl internal_633adf0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jl public_633ae33
        mov edx, dword ptr ds : [ecx+0x90]
        test edx, edx
        je public_633ae33
        mov eax, dword ptr ds : [ecx+0x94]
        sub eax, edx
        sar eax, 3
        cmp esi, eax
        jae public_633ae33
        mov eax, edx
        mov edx, dword ptr ds : [eax+esi*8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [ecx+esi*8+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov al, 1
        pop esi
        ret 0xC
        public_633ae33 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x633adf0)
    }
}

#undef public_633ae33
