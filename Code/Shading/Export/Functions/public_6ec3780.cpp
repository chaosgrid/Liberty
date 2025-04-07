#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);

#define public_6ec37d7 _public_6ec37d7

PROC_DECLARE(0x6ec3780, internal_6ec3780, public_6ec3780);
extern "C" NAKED register_t __cdecl internal_6ec3780()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        or edi, 0xFFFFFFFF
        test esi, esi
        je public_6ec37d7
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_6ec37d7
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        je public_6ec37d7
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+8]
        test ecx, ecx
        je public_6ec37d7
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        pop edi
        pop esi
        ret 0x10
        public_6ec37d7 : nop
        push 0
        call public_6ed0b60
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6ec3780)
    }
}

#undef public_6ec37d7
