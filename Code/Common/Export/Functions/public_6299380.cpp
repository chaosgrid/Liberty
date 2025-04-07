#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6299380);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_JUMP_SYMBOL(public_6393868);

PROC_DECLARE(0x6299380, internal_6299380, public_6299380);
extern "C" NAKED register_t __cdecl internal_6299380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393868 @0x6299382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393868
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639cee4
        mov dword ptr ss : [esp+0x10], 0
        call public_629edf0
        mov ecx, dword ptr ds : [esi+0x4C]
        call public_62f0d50
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6293160
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6299380)
    }
}
