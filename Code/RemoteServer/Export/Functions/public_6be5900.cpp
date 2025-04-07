#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5900);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a708);

PROC_DECLARE(0x6be5900, internal_6be5900, public_6be5900);
extern "C" NAKED register_t __cdecl internal_6be5900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a708 @0x6be5902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a708
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
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6c0c8b8
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x20], ebx
        mov byte ptr ds : [esi+0x24], bl
        push 0x50
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x28], al
        call public_6c09d26
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], ebx
        add esp, 4
        mov dword ptr ds : [esi], offset public_6c0c9b8
        mov dword ptr ds : [esi+0xC], 0x20028
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6be5900)
    }
}
