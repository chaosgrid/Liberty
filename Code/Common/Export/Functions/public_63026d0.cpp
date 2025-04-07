#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9560);
CLANG_FORWARD_PROC_SYMBOL(public_63026d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395fc4);

PROC_DECLARE(0x63026d0, internal_63026d0, public_63026d0);
extern "C" NAKED register_t __cdecl internal_63026d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395fc4 @0x63026d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395fc4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], ecx
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi+4], edx
        mov al, byte ptr ds : [edi+4]
        add esi, 4
        xor ebx, ebx
        lea ecx, ds:[esi+4]
        lea ebp, ds:[edi+4]
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x34], esi
        call dword ptr ds : [public_63991a8]
        mov dl, byte ptr ds : [edi+0x14]
        lea ecx, ds:[esi+0x14]
        lea ebp, ds:[edi+0x14]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov eax, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [eax]
        push edx
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [edi+0x24]
        lea ebp, ds:[esi+0x24]
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ss : [ebp], al
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x24]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [edi+0x34]
        add esi, 0x34
        push 0x18
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [esi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push edi
        push ecx
        push eax
        mov ecx, esi
        call public_62b9560
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63026d0)
    }
}
