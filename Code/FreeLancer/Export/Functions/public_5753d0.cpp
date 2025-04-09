#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5753d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1cc0);

PROC_DECLARE(0x5753d0, internal_5753d0, public_5753d0);
extern "C" NAKED register_t __cdecl internal_5753d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0xEC], eax
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        mov byte ptr ds : [esi+0xE6], 1
        call dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0xB4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0xB8], edx
        call dword ptr ds : [eax+0x70]
        push 0x3F800000
/*FIXUP push offset public_5d0410 @0x575415*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        mov ecx, esi
        call public_5a1cc0
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x5753d0)
    }
}
