#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d360);
CLANG_FORWARD_PROC_SYMBOL(public_6245bf0);

PROC_DECLARE(0x621d360, internal_621d360, public_621d360);
extern "C" NAKED register_t __cdecl internal_621d360()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        fadd dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [eax+0x6C]
        fstp dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ds : [esi+0xFC]
        mov eax, dword ptr ds : [eax+0x70]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ds : [esi+0x100]
        mov eax, dword ptr ds : [eax+0x74]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ds : [esi+0x104]
        mov eax, dword ptr ds : [eax+0x78]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fmul dword ptr ds : [public_624d4c4]
        push edi
        push edx
        fstp dword ptr ds : [esi+0xF4]
        mov eax, dword ptr ds : [eax+0x7C]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [public_624d4c4]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        fsub dword ptr ds : [esi+0xF4]
        fstp dword ptr ds : [esi+0xF8]
        call public_6245bf0
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x621d360)
    }
}
