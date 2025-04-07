#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a560);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadc08);

PROC_DECLARE(0x6f1a560, internal_6f1a560, public_6f1a560);
extern "C" NAKED register_t __cdecl internal_6f1a560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadc08 @0x6f1a562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadc08
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
        lea ecx, ds:[esi+0x38]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_6fb8ccc
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f1a560)
    }
}
