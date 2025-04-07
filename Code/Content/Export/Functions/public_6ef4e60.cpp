#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4e60);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac369);

PROC_DECLARE(0x6ef4e60, internal_6ef4e60, public_6ef4e60);
/* CHUNK of public_6ef4cf0 */
extern "C" NAKED register_t __cdecl internal_6ef4e60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac369 @0x6ef4e62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac369
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov edi, dword ptr ds : [public_6fb3034]
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef4e60)
    }
}
