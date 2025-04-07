#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6245bf0);

PROC_DECLARE(0x623c2f0, internal_623c2f0, public_623c2f0);
extern "C" NAKED register_t __cdecl internal_623c2f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ds : [eax+0xF4]
        lea esi, ds:[eax+4]
        push edi
        mov eax, dword ptr ds : [ecx+0x6C]
        mov ecx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ds : [esi+0xF0]
        push edi
        fstp dword ptr ds : [esi+0xF4]
        mov eax, dword ptr ds : [edx+0x70]
        mov edx, dword ptr ds : [esi+0x8C]
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
        UNREACHABLE_TRAP(0x623c2f0)
    }
}
