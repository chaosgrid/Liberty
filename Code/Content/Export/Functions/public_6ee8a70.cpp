#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8a70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabbeb);

PROC_DECLARE(0x6ee8a70, internal_6ee8a70, public_6ee8a70);
extern "C" NAKED register_t __cdecl internal_6ee8a70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabbeb @0x6ee8a72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabbeb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, esi
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [public_6fcf1b0], eax
        mov cl, byte ptr ss : [esp+0xB]
        xor edi, edi
        mov byte ptr ds : [esi+4], 1
        push 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [esi+8], cl
        call public_6fa912a
        mov dl, byte ptr ss : [esp+0xF]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        add esp, 4
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ds : [esi], offset public_6fb7484
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ee8a70)
    }
}
