#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404130);
CLANG_FORWARD_PROC_SYMBOL(public_404240);
CLANG_FORWARD_PROC_SYMBOL(public_405060);
CLANG_FORWARD_PROC_SYMBOL(public_405520);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_JUMP_SYMBOL(public_419b93);

PROC_DECLARE(0x403370, internal_403370, public_403370);
extern "C" NAKED register_t __cdecl internal_403370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419b93 @0x403372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419b93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+8], edx
        mov al, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [edi+0xC], al
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edi+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [public_41b04c]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edi+0x1C], ecx
        mov dl, byte ptr ss : [ebp+0x20]
        xor esi, esi
        lea eax, ss:[ebp+0x20]
        lea ecx, ds:[edi+0x20]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov edx, dword ptr ds : [public_41b894]
        mov edx, dword ptr ds : [edx]
        push edx
        push esi
        push eax
        mov dword ptr ss : [esp+0x28], esi
        call dword ptr ds : [public_41b8bc]
        mov al, byte ptr ss : [ebp+0x30]
        lea ebx, ss:[ebp+0x30]
        lea esi, ds:[edi+0x30]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        push 1
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi+0xC], dl
        call public_405060
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push ecx
        mov ecx, esi
        call public_405060
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_404130
        mov dl, byte ptr ss : [ebp+0x44]
        add ebp, 0x44
        lea esi, ds:[edi+0x44]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ss : [ebp+0xC]
        mov byte ptr ss : [esp+0x1C], 2
        push 0x24
        mov byte ptr ds : [esi+0xC], cl
        call public_418a9e
        mov byte ptr ds : [eax+0x20], 1
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x21], 1
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        mov ecx, esi
        call public_405520
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebx
        call public_404240
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x403370)
    }
}
