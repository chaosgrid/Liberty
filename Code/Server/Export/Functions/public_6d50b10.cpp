#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d636c3);

PROC_DECLARE(0x6d50b10, internal_6d50b10, public_6d50b10);
extern "C" NAKED register_t __cdecl internal_6d50b10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d636c3 @0x6d50b12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d636c3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_6d64968]
        mov al, byte ptr ss : [esp+0xF]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x20], al
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        push 0x24
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x30], cl
        mov byte ptr ds : [esi+0x31], dl
        mov byte ptr ds : [esi+0x3C], bl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0x38], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x38]
        push 0x24
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x20], bl
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x40], ebx
        mov cl, byte ptr ss : [esp+0x17]
        mov dl, byte ptr ss : [esp+0x17]
        push 0x24
        mov byte ptr ss : [esp+0x28], 2
        mov byte ptr ds : [esi+0x44], cl
        mov byte ptr ds : [esi+0x45], dl
        mov byte ptr ds : [esi+0x50], bl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0x4C], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x4C]
        push 0x24
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x20], bl
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x54], ebx
        add esp, 0x10
        pop edi
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d50b10)
    }
}
