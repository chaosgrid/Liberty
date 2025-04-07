#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bd020);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639491b);

PROC_DECLARE(0x62bd020, internal_62bd020, public_62bd020);
extern "C" NAKED register_t __cdecl internal_62bd020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639491b @0x62bd022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639491b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ecx
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edx
        push edi
        xor ebx, ebx
        mov byte ptr ds : [esi+0xC], bl
        push 0x18
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x11], cl
        mov byte ptr ds : [esi+0x1C], 1
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0x18]
        push 0x18
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov al, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x24], bl
        push 0x1C
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+0x28], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0xC
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_639ef00
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62bd020)
    }
}
