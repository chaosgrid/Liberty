#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_62a6980);
CLANG_FORWARD_PROC_SYMBOL(public_62a71a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393d03);

#define public_62a3501 _public_62a3501
#define public_62a351e _public_62a351e

PROC_DECLARE(0x62a33f0, internal_62a33f0, public_62a33f0);
extern "C" NAKED register_t __cdecl internal_62a33f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393d03 @0x62a33f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393d03
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ds : [edi]
        mov ebp, ecx
        push 0x40
        mov dword ptr ss : [esp+0x18], ebp
        mov byte ptr ss : [ebp], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        add esp, 4
        xor esi, esi
        mov dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, ebp
        call public_62a6980
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov al, byte ptr ds : [edi+0x14]
        lea ebx, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x24], esi
        lea esi, ss:[ebp+0x14]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        push 1
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi+0xC], dl
        call public_62a7c30
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x69], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push ecx
        mov ecx, esi
        call public_62a7c30
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_62a71a0
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [ebp+0x28], edx
        mov eax, dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [ebp+0x2C], eax
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [ebp+0x30], ecx
        mov dl, byte ptr ds : [edi+0x34]
        lea esi, ss:[ebp+0x34]
        push 0xC
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+0x38]
        add esp, 4
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ecx
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], eax
        je public_62a351e
        public_62a3501 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[ebx+8]
        push ecx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_627f280
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ss : [esp+0x10]
        jne public_62a3501
        public_62a351e : nop
        mov ecx, dword ptr ds : [edi+0x40]
        mov dword ptr ss : [ebp+0x40], ecx
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ss : [ebp+0x44], edx
        mov eax, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [ebp+0x48], eax
        mov ecx, dword ptr ds : [edi+0x4C]
        mov dword ptr ss : [ebp+0x4C], ecx
        lea esi, ds:[edi+0x50]
        lea edi, ss:[ebp+0x50]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62a33f0)
    }
}

#undef public_62a3501
#undef public_62a351e
