#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af2e0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5850);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63946f6);

PROC_DECLARE(0x62b5850, internal_62b5850, public_62b5850);
extern "C" NAKED register_t __cdecl internal_62b5850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63946f6 @0x62b5852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63946f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_62af2e0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov cl, byte ptr ds : [esi+0xA0]
        mov dl, byte ptr ss : [esp+0x20]
        or cl, 1
        mov byte ptr ds : [esi+0xA0], cl
        mov cl, byte ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        push 0x14
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0xBC], cl
        mov byte ptr ds : [esi+0xBD], dl
        mov byte ptr ds : [esi+0xC8], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+0xC4], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0xC4]
        push 0x14
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        add esp, 8
        mov dword ptr ds : [esi+0xE0], ebx
        pop edi
        mov dword ptr ds : [esi+0xDC], 0xBF800000
        mov dword ptr ds : [esi], offset public_639b884
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62b5850)
    }
}
