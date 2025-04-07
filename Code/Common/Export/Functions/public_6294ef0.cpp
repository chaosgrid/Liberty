#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294ef0);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_JUMP_SYMBOL(public_63936f8);

PROC_DECLARE(0x6294ef0, internal_6294ef0, public_6294ef0);
extern "C" NAKED register_t __cdecl internal_6294ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63936f8 @0x6294ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63936f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639cb8c
        mov dword ptr ss : [esp+0x10], 0
        call public_629af40
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_629f2f0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6294ef0)
    }
}
