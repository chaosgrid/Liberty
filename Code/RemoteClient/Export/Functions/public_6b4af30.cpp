#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4af30);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6aa5e);

PROC_DECLARE(0x6b4af30, internal_6b4af30, public_6b4af30);
extern "C" NAKED register_t __cdecl internal_6b4af30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6aa5e @0x6b4af32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6aa5e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov ecx, 1
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6b6cb20
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov eax, 2
        mov dword ptr ds : [esi+0x38], eax
        mov byte ptr ss : [esp+0x18], al
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ecx
        mov dword ptr ds : [esi+0x3C], 4
        mov dword ptr ds : [esi+0x40], 8
        mov dword ptr ds : [esi+0x44], 0x10
        push 0xC
        mov byte ptr ds : [esi+0x48], al
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], ebx
        add esp, 4
        mov byte ptr ds : [esi+0x54], bl
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x5C], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_6b6c174
        mov dword ptr ds : [esi+0xC], 0x20029
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6b4af30)
    }
}
