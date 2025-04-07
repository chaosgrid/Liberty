#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289e80);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_JUMP_SYMBOL(public_63933d8);

PROC_DECLARE(0x6289e80, internal_6289e80, public_6289e80);
extern "C" NAKED register_t __cdecl internal_6289e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63933d8 @0x6289e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63933d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639c2c4
        lea ecx, ds:[esi+0x4C]
        mov dword ptr ss : [esp+0x10], 0
        call public_634d260
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_639c2d0
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6289e80)
    }
}
