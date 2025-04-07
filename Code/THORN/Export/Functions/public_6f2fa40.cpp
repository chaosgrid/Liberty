#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fac0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58713);

PROC_DECLARE(0x6f2fa40, internal_6f2fa40, public_6f2fa40);
extern "C" NAKED register_t __cdecl internal_6f2fa40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58713 @0x6f2fa42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58713
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_6f2edf0
        mov cl, byte ptr ss : [esp+7]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ds : [esi+0x2C], cl
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi], offset public_6f5a308
        mov dword ptr ds : [esi+0x28], 4
        call public_6f2fac0
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f2fa40)
    }
}
