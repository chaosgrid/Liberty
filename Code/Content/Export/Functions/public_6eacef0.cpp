#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eacef0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9dd3);

PROC_DECLARE(0x6eacef0, internal_6eacef0, public_6eacef0);
extern "C" NAKED register_t __cdecl internal_6eacef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9dd3 @0x6eacef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9dd3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push edi
        push 0x14
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor edi, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        mov cl, byte ptr ss : [esp+0xF]
        push 0x64
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi+0xC], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], edi
        mov dl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi+0x18], dl
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0xC
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x1C], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eacef0)
    }
}
