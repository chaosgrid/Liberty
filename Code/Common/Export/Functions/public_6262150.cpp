#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a960);
CLANG_FORWARD_PROC_SYMBOL(public_626ab10);
CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63923e3);

#define public_62621a1 _public_62621a1
#define public_62621bc _public_62621bc

PROC_DECLARE(0x6262150, internal_6262150, public_6262150);
extern "C" NAKED register_t __cdecl internal_6262150()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63923e3 @0x6262152*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63923e3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        push 0xC
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+4]
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_62621bc
        public_62621a1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+8]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_627f280
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_62621a1
        public_62621bc : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ds : [edx+0xC]
        lea ebp, ds:[edx+0xC]
        lea esi, ds:[edi+0xC]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0xC]
        push 1
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ds : [esi+0xC], dl
        call public_626b3a0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        mov ecx, esi
        call public_626b3a0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebx
        call public_626a960
        mov edx, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ds : [edx+0x20]
        lea ebp, ds:[edx+0x20]
        lea esi, ds:[edi+0x20]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0xC]
        push 0x18
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi+0xC], dl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [ecx+8], ebx
        mov edx, dword ptr ds : [esi+8]
        push ebx
        push edx
        mov ecx, esi
        call public_626b3a0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebx
        call public_626ab10
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6262150)
    }
}

#undef public_62621a1
#undef public_62621bc
