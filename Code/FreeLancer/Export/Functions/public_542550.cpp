#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542550);
CLANG_FORWARD_PROC_SYMBOL(public_547440);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0d2b);

PROC_DECLARE(0x542550, internal_542550, public_542550);
extern "C" NAKED register_t __cdecl internal_542550()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0d2b @0x542558*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push esi
        push eax
        mov esi, ecx
        call public_547440
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0xAC], 0xBF800000
        xor eax, eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi], offset public_5df95c
        mov dword ptr ds : [esi+4], offset public_5df8dc
        mov dword ptr ds : [esi+0xC], offset public_5df8d0
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x542550)
    }
}
