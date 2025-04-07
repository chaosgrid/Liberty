#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c335e4 _public_6c335e4
#define public_6c335ec _public_6c335ec
#define public_6c33605 _public_6c33605

PROC_DECLARE(0x6c335b0, internal_6c335b0, public_6c335b0);
extern "C" NAKED register_t __cdecl internal_6c335b0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        or ebx, 0xFFFFFFFF
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6c335e4
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c335e4
        lea eax, ss:[esp+0x14]
        jmp public_6c335ec
        public_6c335e4 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6c335ec : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_6c33605
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6c33605 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6c335b0)
    }
}

#undef public_6c335e4
#undef public_6c335ec
#undef public_6c33605
