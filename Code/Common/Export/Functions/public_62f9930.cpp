#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f9930);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395a96);

PROC_DECLARE(0x62f9930, internal_62f9930, public_62f9930);
extern "C" NAKED register_t __cdecl internal_62f9930()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395a96 @0x62f9932*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395a96
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr ds : [esi], ebx
        mov ax, word ptr ds : [public_63a4aa4]
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0xC], esi
        mov word ptr ds : [esi+4], ax
        call public_6333e30
        mov dword ptr ds : [esi+0xC], 1
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        mov byte ptr ds : [esi+0x16], bl
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], 0x3F800000
        mov byte ptr ds : [esi+0x24], bl
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        call public_6333e40
        lea ecx, ds:[esi+0x38]
        call public_6333e40
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x3C], 0x3F800000
        push 0x10
        mov byte ptr ds : [esi+0x40], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], ebx
        mov dl, byte ptr ss : [esp+0xF]
        push 0x10
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0x4C], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], ebx
        mov al, byte ptr ss : [esp+0x13]
        push 0x14
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi+0x58], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], ebx
        add esp, 0xC
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62f9930)
    }
}
