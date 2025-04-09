#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c63e0);

#define public_4c641d _public_4c641d

PROC_DECLARE(0x4c63e0, internal_4c63e0, public_4c63e0);
extern "C" NAKED register_t __cdecl internal_4c63e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0
        mov esi, ecx
        mov dword ptr ds : [ebx], 0
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_4c641d
        push eax
        call dword ptr ds : [public_5c61fc]
        mov eax, dword ptr ds : [eax+0x100]
        add esp, 4
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_5c6430]
        fstp dword ptr ds : [ebx]
        public_4c641d : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4c63e0)
    }
}

#undef public_4c641d
