#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6205f00);

#define public_620600c _public_620600c

PROC_DECLARE(0x6205f00, internal_6205f00, public_6205f00);
extern "C" NAKED register_t __cdecl internal_6205f00()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        push edi
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov edi, dword ptr ds : [eax+0x90]
        mov eax, dword ptr ds : [eax+0x8C]
        push edi
        mov ecx, dword ptr ds : [ecx+0x5C]
        push eax
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push edi
        push eax
        mov ecx, dword ptr ds : [ecx+0x78]
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        fmul dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push eax
        mov ecx, dword ptr ds : [ecx+0x7C]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        fmul dword ptr ds : [public_624bab8]
        fstp dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push eax
        mov ecx, dword ptr ds : [edx+0x70]
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push eax
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x74]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], edx
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov cl, byte ptr ds : [eax+0xE1]
        and edx, 1
        pop esi
        cmp dl, cl
        jne public_620600c
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+0xC8]
        mov dword ptr ds : [ecx], eax
        add esp, 0x10
        ret 0x10
        public_620600c : nop
        mov edx, dword ptr ds : [eax+0xD0]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6205f00)
    }
}

#undef public_620600c
