#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3d20);

#define public_4c3d60 _public_4c3d60
#define public_4c3d74 _public_4c3d74

PROC_DECLARE(0x4c3d20, internal_4c3d20, public_4c3d20);
extern "C" NAKED register_t __cdecl internal_4c3d20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [public_672918], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_67291c], edx
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_672920], eax
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [public_672924], edx
        mov eax, dword ptr ds : [ecx+0x30]
        xor edx, edx
        test eax, eax
        mov dword ptr ds : [public_672948], eax
        jle public_4c3d74
        mov eax, offset public_672928
        sub ecx, offset public_672918
        push esi
        nop 
        public_4c3d60 : nop
        mov esi, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [public_672948]
        inc edx
        add eax, 4
        cmp edx, esi
        jl public_4c3d60
        pop esi
        public_4c3d74 : nop
        ret 
        UNREACHABLE_TRAP(0x4c3d20)
    }
}

#undef public_4c3d60
#undef public_4c3d74
