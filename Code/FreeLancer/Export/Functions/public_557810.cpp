#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557810);

PROC_DECLARE(0x557810, internal_557810, public_557810);
extern "C" NAKED register_t __cdecl internal_557810()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        push esi
        mov edx, ecx
        push edi
        lea esi, ds:[eax+0xC]
        mov ecx, 9
        lea edi, ss:[esp+8]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], ecx
        lea edi, ds:[edx+0x4C]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov dword ptr ss : [esp+0x34], eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x557810)
    }
}
