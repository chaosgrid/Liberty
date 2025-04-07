#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6349030);
CLANG_FORWARD_JUMP_SYMBOL(public_6397958);

PROC_DECLARE(0x6342fd0, internal_6342fd0, public_6342fd0);
extern "C" NAKED register_t __cdecl internal_6342fd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397958 @0x6342fd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397958
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_63a53b4
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        push esi
        mov dword ptr ss : [esp+0x18], 0
        call public_6349030
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        mov dword ptr ds : [esi], offset public_639b64c
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6342fd0)
    }
}
