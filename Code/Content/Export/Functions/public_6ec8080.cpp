#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8080);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

PROC_DECLARE(0x6ec8080, internal_6ec8080, public_6ec8080);
extern "C" NAKED register_t __cdecl internal_6ec8080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6ec8082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaea8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb5a90
        mov cl, byte ptr ss : [esp+0x18]
        push 0x3C
        mov dword ptr ss : [esp+0x14], 0
        mov byte ptr ds : [esi+0xC], cl
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], 0
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb5bf8
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec8080)
    }
}
