#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);
CLANG_FORWARD_PROC_SYMBOL(public_6d3b0e2);

#define public_6d3b553 _public_6d3b553

PROC_DECLARE(0x6d3b4e8, internal_6d3b4e8, public_6d3b4e8);
extern "C" NAKED register_t __cdecl internal_6d3b4e8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        add ecx, dword ptr ds : [ebx+0x1040]
        add eax, dword ptr ds : [ebx+0x1034]
        push 1
        push ecx
        push eax
        mov ecx, ebx
        call public_6d3b0e2
        test eax, eax
        jl public_6d3b553
        mov ecx, dword ptr ds : [ebx+0x1058]
        push esi
        mov esi, dword ptr ds : [ebx+0x1030]
        sub esi, dword ptr ds : [ebx+0x1070]
        shl ecx, 4
        shl esi, 4
        add esi, dword ptr ds : [ebx+0x106C]
        mov eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        cmp dword ptr ds : [ebx+0x10], 0
        pop edi
        pop esi
        je public_6d3b553
        push dword ptr ss : [esp+0x10]
        mov ecx, ebx
        call public_6d37e98
        public_6d3b553 : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d3b4e8)
    }
}

#undef public_6d3b553
