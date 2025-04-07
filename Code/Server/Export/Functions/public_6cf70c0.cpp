#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf70c0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf7133 _public_6cf7133

PROC_DECLARE(0x6cf70c0, internal_6cf70c0, public_6cf70c0);
extern "C" NAKED register_t __cdecl internal_6cf70c0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        lea eax, ss:[esp+0xC]
        mov edi, ecx
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf7133
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_6cf7133
        push esi
        mov ecx, edi
        call public_6cf73d0
        test al, al
        je public_6cf7133
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6cf7133
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6cf7133
        mov eax, dword ptr ds : [eax+0x1B4]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call dword ptr ds : [edx+0x1C4]
        public_6cf7133 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6cf70c0)
    }
}

#undef public_6cf7133
