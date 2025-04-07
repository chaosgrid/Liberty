#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395c84);

PROC_DECLARE(0x62ff160, internal_62ff160, public_62ff160);
extern "C" NAKED register_t __cdecl internal_62ff160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395c84 @0x62ff162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395c84
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
        mov byte ptr ds : [esi+4], al
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [esi+0x14], cl
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov dl, byte ptr ss : [esp+0xB]
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov al, byte ptr ss : [esp+0xB]
        push 0x18
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0x34], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], edi
        add esp, 4
        mov dword ptr ds : [esi], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62ff160)
    }
}
