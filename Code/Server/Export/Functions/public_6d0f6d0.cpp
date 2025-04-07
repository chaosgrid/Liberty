#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce37a0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc580);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6172c);

#define public_6d0f738 _public_6d0f738
#define public_6d0f740 _public_6d0f740
#define public_6d0f77a _public_6d0f77a
#define public_6d0f81a _public_6d0f81a

PROC_DECLARE(0x6d0f6d0, internal_6d0f6d0, public_6d0f6d0);
extern "C" NAKED register_t __cdecl internal_6d0f6d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6172c @0x6d0f6d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6172c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6d0f81a
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [ebx+8]
        push esi
        lea esi, ds:[edi+8]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        mov ecx, dword ptr ds : [ebx+0xC]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], eax
        je public_6d0f77a
        jmp public_6d0f740
        public_6d0f738 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        lea esp, ss:[esp]
        public_6d0f740 : nop
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push eax
        mov ecx, esi
        call public_6cfc340
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp+8]
        push ecx
        add eax, 8
        push eax
        call public_6d06720
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6d0f738
        public_6d0f77a : nop
        mov al, byte ptr ds : [ebx+0x14]
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0xC]
        push 0x14
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi+0xC], dl
        call public_6d60012
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x11], cl
        mov byte ptr ds : [eax+0x10], 1
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        mov ecx, esi
        call public_6cfc580
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebp
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_6ce37a0
        mov cl, byte ptr ds : [ebx+0x28]
        mov byte ptr ds : [edi+0x28], cl
        mov edx, dword ptr ds : [ebx+0x30]
        mov dword ptr ds : [edi+0x30], edx
        mov eax, dword ptr ds : [ebx+0x34]
        mov dword ptr ds : [edi+0x34], eax
        mov ecx, dword ptr ds : [ebx+0x38]
        add ebx, 0x3C
        mov dword ptr ds : [edi+0x38], ecx
        mov eax, dword ptr ds : [ebx]
        lea edx, ds:[edi+0x3C]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [ebx+8]
        pop esi
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edi], offset public_6d66988
        pop ebx
        public_6d0f81a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d0f6d0)
    }
}

#undef public_6d0f738
#undef public_6d0f740
#undef public_6d0f77a
#undef public_6d0f81a
