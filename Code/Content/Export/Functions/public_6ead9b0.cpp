#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eadac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9df3);

#define public_6eada12 _public_6eada12
#define public_6eada2f _public_6eada2f

PROC_DECLARE(0x6ead9b0, internal_6ead9b0, public_6ead9b0);
extern "C" NAKED register_t __cdecl internal_6ead9b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9df3 @0x6ead9b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9df3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ds : [eax]
        push esi
        mov dword ptr ss : [ebp], ecx
        mov dl, byte ptr ds : [ebx]
        push edi
        lea esi, ss:[ebp+4]
        push 0x14
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x28], eax
        je public_6eada2f
        public_6eada12 : nop
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[edi+8]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6eadac0
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x2C]
        jne public_6eada12
        public_6eada2f : nop
        mov cl, byte ptr ds : [ebx+0xC]
        lea edi, ds:[esi+0xC]
        push 0x64
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ds : [edi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_6eb0fe0
        mov dl, byte ptr ds : [ebx+0x18]
        add esi, 0x18
        push 0xC
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ebx, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ebx
        push ecx
        push eax
        mov ecx, esi
        call public_6ed0230
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6ead9b0)
    }
}

#undef public_6eada12
#undef public_6eada2f
