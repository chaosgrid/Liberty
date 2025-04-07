#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6620);
CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60471);

PROC_DECLARE(0x6ce6620, internal_6ce6620, public_6ce6620);
extern "C" NAKED register_t __cdecl internal_6ce6620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60471 @0x6ce6622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60471
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        call public_6cee360
        mov al, byte ptr ss : [esp+0xB]
        xor ebx, ebx
        push 0x10
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x60], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], ebx
        mov cl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [esi+0x6C], ebx
        push 0xC
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x70], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x78], ebx
        mov dl, byte ptr ss : [esp+0x13]
        push 0x44
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi+0x7C], dl
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], ebx
        add esp, 0xC
        mov byte ptr ds : [esi+0x88], bl
        mov dword ptr ds : [esi], offset public_6d65244
        mov dword ptr ds : [esi+4], offset public_6d651c4
        mov dword ptr ds : [esi+0xC], offset public_6d651b8
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ce6620)
    }
}
