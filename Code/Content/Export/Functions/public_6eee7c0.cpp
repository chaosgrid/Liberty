#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabdf1);

#define public_6eee8a7 _public_6eee8a7
#define public_6eee8c4 _public_6eee8c4
#define public_6eee8f0 _public_6eee8f0
#define public_6eee8fb _public_6eee8fb
#define public_6eee910 _public_6eee910
#define public_6eee91c _public_6eee91c
#define public_6eee931 _public_6eee931
#define public_6eee939 _public_6eee939

PROC_DECLARE(0x6eee7c0, internal_6eee7c0, public_6eee7c0);
extern "C" NAKED register_t __cdecl internal_6eee7c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabdf1 @0x6eee7c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabdf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_6eee939
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [edi+4]
        add esi, 4
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+5]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0x10]
        push 0x18
        mov byte ptr ds : [esi+0xC], al
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x15], 0
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x18
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x15]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x28], edx
        jne public_6eee8c4
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_6f214c0
        mov ebx, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_6f305b0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_6eee8a7
        mov dword ptr ss : [esp+0x28], ebx
        public_6eee8a7 : nop
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push ecx
        mov ecx, esi
        call public_6eee6f0
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6eee6f0
        mov dword ptr ds : [ebx+8], eax
        public_6eee8c4 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        je public_6eee931
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6eee8fb
        nop 
        lea esp, ss:[esp]
        public_6eee8f0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6eee8f0
        public_6eee8fb : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6eee91c
        lea ecx, ds:[ecx]
        public_6eee910 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6eee910
        public_6eee91c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6eee931 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6eee939 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eee7c0)
    }
}

#undef public_6eee8a7
#undef public_6eee8c4
#undef public_6eee8f0
#undef public_6eee8fb
#undef public_6eee910
#undef public_6eee91c
#undef public_6eee931
#undef public_6eee939
