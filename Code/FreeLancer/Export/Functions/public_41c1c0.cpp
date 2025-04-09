#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d630);
CLANG_FORWARD_PROC_SYMBOL(public_41d690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8a26);

PROC_DECLARE(0x41c1c0, internal_41c1c0, public_41c1c0);
extern "C" NAKED register_t __cdecl internal_41c1c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8a26 @0x41c1c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8a26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], offset public_5c9358
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov cl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [ebx+8], cl
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ds : [ebx+0xC], edx
        mov al, byte ptr ss : [ebp+0x14]
        push edi
        lea esi, ds:[ebx+0x14]
        push 0xC
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_41d630
        lea esi, ss:[ebp+0x20]
        lea edi, ds:[ebx+0x20]
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], ecx
        mov dword ptr ds : [ebx+0x10], offset public_5c9350
        mov dl, byte ptr ss : [ebp+0x40]
        xor edi, edi
        lea esi, ds:[ebx+0x40]
        push 0xC
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ss : [ebp+0x44]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_41d630
        lea esi, ss:[ebp+0x4C]
        lea edi, ds:[ebx+0x4C]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ebx+0x64], eax
        mov dword ptr ds : [ebx+0x3C], offset public_5c9350
        lea ecx, ss:[ebp+0x68]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x68]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [ebp+0x78]
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [ebx+0x78], edx
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0x7C], eax
        mov cl, byte ptr ss : [ebp+0x80]
        lea esi, ds:[ebx+0x80]
        push 0x28
        mov byte ptr ds : [esi], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_41d690
        mov dl, byte ptr ss : [ebp+0x8C]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x8C], dl
        mov dword ptr ds : [ebx], offset public_5c936c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x41c1c0)
    }
}
