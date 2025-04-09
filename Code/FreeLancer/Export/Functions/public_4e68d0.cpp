#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e68d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e6924 _public_4e6924

PROC_DECLARE(0x4e68d0, internal_4e68d0, public_4e68d0);
extern "C" NAKED register_t __cdecl internal_4e68d0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_5c6d90]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push 0
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov edi, eax
        mov eax, dword ptr ds : [public_674b1c]
        test eax, eax
        jne public_4e6924
        call public_5b73e0
        mov dword ptr ds : [public_674b1c], eax
        public_4e6924 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x4e68d0)
    }
}

#undef public_4e6924
