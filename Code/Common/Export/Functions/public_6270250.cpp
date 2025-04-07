#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6270250);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63927f3);

PROC_DECLARE(0x6270250, internal_6270250, public_6270250);
extern "C" NAKED register_t __cdecl internal_6270250()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63927f3 @0x6270252*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63927f3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        push 0x18
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+0xC], cl
        mov byte ptr ds : [esi+0xD], dl
        mov byte ptr ds : [esi+0x18], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x14], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x14]
        push 0x18
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov cl, byte ptr ss : [esp+0x1B]
        mov dl, byte ptr ss : [esp+0x1B]
        push 0x18
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [esi+0x20], cl
        mov byte ptr ds : [esi+0x21], dl
        mov byte ptr ds : [esi+0x2C], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x28], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x28]
        push 0x18
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 0x14
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x30], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6270250)
    }
}
