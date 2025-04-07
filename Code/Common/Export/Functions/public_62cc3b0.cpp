#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb540);
CLANG_FORWARD_PROC_SYMBOL(public_62d6710);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);

#define public_62cc404 _public_62cc404

PROC_DECLARE(0x62cc3b0, internal_62cc3b0, public_62cc3b0);
extern "C" NAKED register_t __cdecl internal_62cc3b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cb540
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x290]
        push edx
        call dword ptr ds : [eax+0xAC]
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62cc404
        push 1
        lea ecx, ds:[esi+0x34]
        mov byte ptr ds : [esi+0x28C], 1
        call public_62d6710
        push 2
        lea ecx, ds:[esi+0x150]
        call public_62d88b0
        public_62cc404 : nop
        mov byte ptr ds : [esi+0x2A8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62cc3b0)
    }
}

#undef public_62cc404
