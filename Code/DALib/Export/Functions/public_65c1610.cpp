#include "DALib-PCH.h"

PROC_DECLARE(0x65c1610, internal_65c1610, public_65c1610);
extern "C" NAKED register_t __cdecl internal_65c1610()
{
    __asm
    {
        sub esp, 0x34
        push edi
        xor eax, eax
        mov dword ptr ss : [esp+8], offset public_65c7370
        mov ecx, 0xB
        lea edi, ss:[esp+0xC]
        rep stosd
        mov eax, dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_65ca0f0 @0x65c162d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca0f0
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_65ca0f4]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x1C], 0x80000000
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x2C], 0x8000080
        mov dword ptr ss : [esp+0xC], 0x34
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], offset public_65c736c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        pop edi
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x65c1610)
    }
}
