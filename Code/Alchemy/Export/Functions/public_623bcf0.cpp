#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245bf0);

PROC_DECLARE(0x623bcf0, internal_623bcf0, public_623bcf0);
extern "C" NAKED register_t __cdecl internal_623bcf0()
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
        fstp dword ptr ds : [esi+0xF4]
        mov eax, dword ptr ds : [eax+0x70]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fsub dword ptr ds : [esi+0xF4]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        fstp dword ptr ds : [esi+0xF8]
        call public_6245bf0
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x623bcf0)
    }
}
