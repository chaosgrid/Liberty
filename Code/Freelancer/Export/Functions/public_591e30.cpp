#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4a08);

PROC_DECLARE(0x591e30, internal_591e30, public_591e30);
extern "C" NAKED register_t __cdecl internal_591e30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4a08 @0x591e32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4a08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        push 0x14
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [esi+0x14], cl
        mov byte ptr ds : [esi+0x15], dl
        mov byte ptr ds : [esi+0x20], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x11], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [eax+0x11], cl
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x1C]
        push 0x14
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], eax
        add esp, 0xC
        mov dword ptr ds : [esi+0x24], ebx
        lea eax, ds:[esi+0xC]
        xor edx, edx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x591e30)
    }
}
