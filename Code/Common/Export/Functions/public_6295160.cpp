#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295160);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629f2c0);
CLANG_FORWARD_JUMP_SYMBOL(public_63936f8);

PROC_DECLARE(0x6295160, internal_6295160, public_6295160);
extern "C" NAKED register_t __cdecl internal_6295160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63936f8 @0x6295162*/
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
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        push 0x1000000
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_629f2c0
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ds : [esi], offset public_639cc4c
        call public_629aed0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6295160)
    }
}
