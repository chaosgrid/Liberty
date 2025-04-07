#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f060);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf32f);

PROC_DECLARE(0x6f4f060, internal_6f4f060, public_6f4f060);
extern "C" NAKED register_t __cdecl internal_6f4f060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf32f @0x6f4f062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf32f
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
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov eax, dword ptr ds : [public_6fb3064]
        mov dword ptr ds : [esi], eax
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+0x48], cl
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x5C], dl
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], 0x3F800000
        mov byte ptr ds : [esi+0x70], 1
        mov al, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x74], al
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x84], cl
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x9C]
        mov dword ptr ds : [esi+0x94], ebx
        mov byte ptr ds : [esi+0x98], 1
        push 1
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_6f214c0
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [edi+8]
        push ebx
        push eax
        mov ecx, edi
        call public_6f214c0
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [esi+0xB0], cl
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov byte ptr ds : [esi+0xC0], dl
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi], offset public_6fbb798
        mov eax, esi
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f4f060)
    }
}
