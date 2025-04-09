#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542d40);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0d89);

PROC_DECLARE(0x542d40, internal_542d40, public_542d40);
extern "C" NAKED register_t __cdecl internal_542d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0d89 @0x542d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0d89
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5dfc98
        mov dword ptr ds : [ecx], offset public_5dfc78
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_5c6aa8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_5c69ac]
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x542d40)
    }
}
