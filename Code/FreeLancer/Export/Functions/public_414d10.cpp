#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414d10);
CLANG_FORWARD_JUMP_SYMBOL(public_5b886b);

PROC_DECLARE(0x414d10, internal_414d10, public_414d10);
extern "C" NAKED register_t __cdecl internal_414d10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b886b @0x414d12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b886b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+4], al
        xor eax, eax
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], 1
        mov byte ptr ds : [esi+0x1F], al
        mov byte ptr ds : [esi+0x1E], al
        mov byte ptr ds : [esi+0x1D], al
        mov byte ptr ds : [esi+0x1C], al
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x24], eax
        mov al, 8
        mov byte ptr ss : [esp+8], al
        mov byte ptr ss : [esp+9], al
        mov byte ptr ss : [esp+0xA], al
        mov byte ptr ss : [esp+0xB], 0xFF
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x1C], ecx
        push 1
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5c8ce8
        call dword ptr ds : [public_5c8d08]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x414d10)
    }
}
