#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c3a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c420);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639712b);

PROC_DECLARE(0x6324e90, internal_6324e90, public_6324e90);
extern "C" NAKED register_t __cdecl internal_6324e90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639712b @0x6324e92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639712b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [edi+4]
        mov esi, ecx
        lea ebx, ds:[esi+4]
        push 0x28
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_632c3a0
        mov cl, byte ptr ds : [edi+0x10]
        lea ebx, ds:[esi+0x10]
        push 0x10
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ds : [ebx], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_632c420
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], ecx
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], edx
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], eax
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi], offset public_63a3de8
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6324e90)
    }
}
