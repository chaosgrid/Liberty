#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc580);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63d06);

PROC_DECLARE(0x6d5b320, internal_6d5b320, public_6d5b320);
extern "C" NAKED register_t __cdecl internal_6d5b320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63d06 @0x6d5b322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63d06
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+8]
        xor ebx, ebx
        push 0x14
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], bl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6cfc580
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        lea esi, ds:[edi+0x1C]
        push 0x14
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ds : [esi], cl
        mov byte ptr ds : [esi+1], dl
        mov byte ptr ds : [esi+0xC], bl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        mov ecx, esi
        call public_6cfc580
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [edi], offset public_6d64ee8
        mov eax, dword ptr ds : [public_6d90450]
        inc eax
        mov dword ptr ds : [public_6d90450], eax
        mov edx, eax
        mov dword ptr ds : [edi+4], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_6d90400
        mov byte ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d5c600
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0x10], edi
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d5b320)
    }
}
