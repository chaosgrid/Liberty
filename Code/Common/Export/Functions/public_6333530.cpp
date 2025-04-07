#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63975db);

PROC_DECLARE(0x6333530, internal_6333530, public_6333530);
extern "C" NAKED register_t __cdecl internal_6333530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63975db @0x6333532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63975db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0xC], bl
        mov byte ptr ds : [esi+0xD], bl
        mov dword ptr ds : [esi], offset public_63a49e4
        mov ecx, dword ptr ss : [esp+0x20]
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [edi+4], ecx
        mov eax, dword ptr ds : [ecx]
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi], offset public_63a49cc
        mov dword ptr ds : [esi], offset public_63a49a0
        mov dword ptr ds : [edi], offset public_63a49b4
        mov cl, byte ptr ss : [esp+0x20]
        push 0xC
        mov dword ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x1C], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], ebx
        mov dl, byte ptr ss : [esp+0x24]
        push 0xC
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [esi+0x28], dl
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], ebx
        add esp, 8
        mov dword ptr ds : [edi], offset public_63a4a28
        pop edi
        mov dword ptr ds : [esi], offset public_63a4a08
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6333530)
    }
}
