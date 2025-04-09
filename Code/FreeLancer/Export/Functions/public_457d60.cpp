#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457d60);
CLANG_FORWARD_PROC_SYMBOL(public_558180);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba0db);

PROC_DECLARE(0x457d60, internal_457d60, public_457d60);
extern "C" NAKED register_t __cdecl internal_457d60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba0db @0x457d62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba0db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x18], edi
        call public_558180
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x457d60)
    }
}
