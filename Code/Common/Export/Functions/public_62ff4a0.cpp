#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7180);
CLANG_FORWARD_PROC_SYMBOL(public_62ba730);
CLANG_FORWARD_PROC_SYMBOL(public_62ff4a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6301c40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6395d0d);

PROC_DECLARE(0x62ff4a0, internal_62ff4a0, public_62ff4a0);
extern "C" NAKED register_t __cdecl internal_62ff4a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395d0d @0x62ff4a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395d0d
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
        push 0x18
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0x18
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+0xC], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ebx
        mov dl, byte ptr ss : [esp+0x17]
        push 0x14
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi+0x18], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov al, byte ptr ss : [esp+0x1B]
        push 0x20
        mov byte ptr ss : [esp+0x2C], 2
        mov byte ptr ds : [esi+0x24], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0x10
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], ebx
/*FIXUP push offset _public_62b7180 @0x62ff537*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b7180
/*FIXUP push offset _public_62ff5e0 @0x62ff53c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ff5e0
        push 4
        push 0x14
        lea ecx, ds:[esi+0x30]
        push ecx
        mov byte ptr ss : [esp+0x30], 3
        call public_6391ef0
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x80]
        push 1
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_62ba730
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x51], 1
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push edx
        mov ecx, edi
        call public_62ba730
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov al, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        lea ecx, ds:[esi+0x94]
        mov byte ptr ss : [esp+0x1C], 5
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6301c40
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62ff4a0)
    }
}
