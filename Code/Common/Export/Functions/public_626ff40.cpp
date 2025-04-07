#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ff40);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639278a);

PROC_DECLARE(0x626ff40, internal_626ff40, public_626ff40);
extern "C" NAKED register_t __cdecl internal_626ff40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639278a @0x626ff42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639278a
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
        xor ebx, ebx
        lea edi, ds:[esi+0x48]
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_63993e8
        call public_6333e40
        lea ecx, ds:[esi+0x74]
        call public_6333e30
        lea ecx, ds:[esi+0x78]
        call public_6333e30
        lea ecx, ds:[esi+0x7C]
        call public_6333e30
        lea ecx, ds:[esi+0x80]
        call public_6333e30
        lea ecx, ds:[esi+0x84]
        call public_6333e30
        mov al, byte ptr ss : [esp+0xF]
        push 0x28
        mov byte ptr ds : [esi+0x94], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x9C], ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0x28
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+0xA0], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xA8], ebx
        mov dl, byte ptr ss : [esp+0x17]
        push 0x28
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi+0xAC], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xB4], ebx
        push ebx
        mov byte ptr ss : [esp+0x2C], 2
        mov dword ptr ds : [esi], offset public_63993f8
        call public_630d3f0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], eax
        add esp, 0x10
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov byte ptr ds : [esi+0x70], bl
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        pop edi
        mov dword ptr ds : [esi+0x4C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x6C], 0x32
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x626ff40)
    }
}
