#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4349f0);
CLANG_FORWARD_PROC_SYMBOL(public_436b30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b90d3);

PROC_DECLARE(0x4349f0, internal_4349f0, public_4349f0);
extern "C" NAKED register_t __cdecl internal_4349f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b90d3 @0x4349f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b90d3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 0x18
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ds : [edi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        lea esi, ds:[edi+0xC]
        push 0x30
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi], cl
        mov byte ptr ds : [esi+1], dl
        mov byte ptr ds : [esi+0xC], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x2C], 1
        mov byte ptr ds : [eax+0x2D], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x2D], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        mov ecx, esi
        call public_436b30
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dl, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [edi+0x20], dl
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi+0x28], ebx
        add esp, 4
        mov dword ptr ds : [edi+0x2C], 0xFFFFFFFF
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4349f0)
    }
}
