#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3d80);

#define public_4c3dc0 _public_4c3dc0
#define public_4c3dd4 _public_4c3dd4

PROC_DECLARE(0x4c3d80, internal_4c3d80, public_4c3d80);
extern "C" NAKED register_t __cdecl internal_4c3d80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6728e4], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_6728e8], edx
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6728ec], eax
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [public_6728f0], edx
        mov eax, dword ptr ds : [ecx+0x30]
        xor edx, edx
        test eax, eax
        mov dword ptr ds : [public_672914], eax
        jle public_4c3dd4
        mov eax, offset public_6728f4
        sub ecx, offset public_6728e4
        push esi
        nop 
        public_4c3dc0 : nop
        mov esi, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [public_672914]
        inc edx
        add eax, 4
        cmp edx, esi
        jl public_4c3dc0
        pop esi
        public_4c3dd4 : nop
        ret 
        UNREACHABLE_TRAP(0x4c3d80)
    }
}

#undef public_4c3dc0
#undef public_4c3dd4
