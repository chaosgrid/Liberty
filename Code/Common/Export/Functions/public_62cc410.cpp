#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb5e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecd30);

#define public_62cc464 _public_62cc464

PROC_DECLARE(0x62cc410, internal_62cc410, public_62cc410);
extern "C" NAKED register_t __cdecl internal_62cc410()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_62cb5e0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62cc464
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecd30
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov esi, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ds : [esi+4]
        push 0xFFFFFFFF
        lea eax, ss:[esp+8]
        lea ecx, ds:[esi+4]
        push eax
        push 1
        call dword ptr ds : [edx+0x60]
        public_62cc464 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62cc410)
    }
}

#undef public_62cc464
