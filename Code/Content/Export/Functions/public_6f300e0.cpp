#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f300e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae8e4);

#define public_6f30126 _public_6f30126
#define public_6f3013c _public_6f3013c
#define public_6f30144 _public_6f30144
#define public_6f30166 _public_6f30166
#define public_6f3017e _public_6f3017e
#define public_6f301a0 _public_6f301a0
#define public_6f301b5 _public_6f301b5
#define public_6f301bd _public_6f301bd
#define public_6f301e0 _public_6f301e0
#define public_6f301fc _public_6f301fc
#define public_6f30206 _public_6f30206
#define public_6f3028f _public_6f3028f

PROC_DECLARE(0x6f300e0, internal_6f300e0, public_6f300e0);
extern "C" NAKED register_t __cdecl internal_6f300e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae8e4 @0x6f300e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae8e4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6f3028f
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f30126
        xor edx, edx
        jmp public_6f3013c
        public_6f30126 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f3013c : nop
        test edx, edx
        mov eax, edx
        jge public_6f30144
        xor eax, eax
        public_6f30144 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov esi, eax
        je public_6f3017e
        public_6f30166 : nop
        push ebx
        push esi
        call public_6f310f0
        mov eax, dword ptr ss : [esp+0x30]
        add ebx, 0x14
        add esp, 8
        add esi, 0x14
        cmp ebx, eax
        jne public_6f30166
        public_6f3017e : nop
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov cl, byte ptr ds : [edi+0x14]
        mov byte ptr ss : [ebp+0x14], cl
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 1
        jne public_6f301a0
        xor edx, edx
        jmp public_6f301b5
        public_6f301a0 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f301b5 : nop
        test edx, edx
        mov eax, edx
        jge public_6f301bd
        xor eax, eax
        public_6f301bd : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x28], edx
        je public_6f30206
        lea ecx, ds:[ecx]
        public_6f301e0 : nop
        test eax, eax
        je public_6f301fc
        mov edx, ecx
        mov ebx, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x28]
        public_6f301fc : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_6f301e0
        public_6f30206 : nop
        mov dword ptr ss : [ebp+0x1C], eax
        mov dword ptr ss : [ebp+0x20], eax
        mov al, byte ptr ds : [edi+0x24]
        lea ebx, ds:[edi+0x24]
        lea esi, ss:[ebp+0x24]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        push 1
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [esi+0xC], dl
        call public_6eb3ac0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        mov ecx, esi
        call public_6eb3ac0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_6f30a60
        mov eax, dword ptr ds : [edi+0x38]
        mov dword ptr ss : [ebp+0x38], eax
        mov cl, byte ptr ds : [edi+0x3C]
        mov byte ptr ss : [ebp+0x3C], cl
        mov dl, byte ptr ds : [edi+0x3D]
        mov byte ptr ss : [ebp+0x3D], dl
        mov eax, dword ptr ds : [edi+0x40]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], eax
        pop ebx
        public_6f3028f : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f300e0)
    }
}

#undef public_6f30126
#undef public_6f3013c
#undef public_6f30144
#undef public_6f30166
#undef public_6f3017e
#undef public_6f301a0
#undef public_6f301b5
#undef public_6f301bd
#undef public_6f301e0
#undef public_6f301fc
#undef public_6f30206
#undef public_6f3028f
