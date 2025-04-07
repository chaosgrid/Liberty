#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec42a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faae88);

PROC_DECLARE(0x6ec42a0, internal_6ec42a0, public_6ec42a0);
extern "C" NAKED register_t __cdecl internal_6ec42a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faae88 @0x6ec42a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faae88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [public_6fb3030]
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+4], eax
        call edi
        mov dword ptr ds : [esi], offset public_6fb565c
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        lea ecx, ds:[esi+0x10]
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_6fb5a40
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec42a0)
    }
}
