#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84d70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb09f4);

PROC_DECLARE(0x6f84d70, internal_6f84d70, public_6f84d70);
extern "C" NAKED register_t __cdecl internal_6f84d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb09f4 @0x6f84d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb09f4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ds : [public_6fcf254]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_6fb3254]
        mov cl, byte ptr ss : [esp+0xF]
        xor ebx, ebx
        mov byte ptr ds : [esi+0xC], bl
        push 0x2C
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0x10], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        push 0x18
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi+0x20], dl
        mov byte ptr ds : [esi+0x21], al
        mov byte ptr ds : [esi+0x2C], bl
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x28], eax
        mov byte ptr ds : [eax+0x15], 1
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0x28]
        push 0x18
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x30], ebx
        add esp, 0xC
        mov dword ptr ds : [esi+0x1C], offset public_6fbc6cc
        pop edi
        mov dword ptr ds : [esi], offset public_6fbc6ac
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f84d70)
    }
}
