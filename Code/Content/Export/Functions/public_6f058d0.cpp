#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f058d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facd26);

PROC_DECLARE(0x6f058d0, internal_6f058d0, public_6f058d0);
extern "C" NAKED register_t __cdecl internal_6f058d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facd26 @0x6f058d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facd26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, esi
        mov dword ptr ds : [esi], offset public_6fb80d4
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [public_6fcf254], eax
        mov cl, byte ptr ss : [esp+0xB]
        xor edi, edi
        push 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [esi+4], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edi
        mov eax, dword ptr ds : [public_6fce76c]
        mov dl, byte ptr ss : [esp+0xF]
        mov ecx, eax
        inc eax
        mov dword ptr ds : [public_6fce76c], eax
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], edi
        push 0xC
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x18], dl
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x20], edi
        add esp, 8
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi], offset public_6fb80bc
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f058d0)
    }
}
