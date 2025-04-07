#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2eea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae7c1);

#define public_6f2f1c7 _public_6f2f1c7
#define public_6f2f1e4 _public_6f2f1e4
#define public_6f2f210 _public_6f2f210
#define public_6f2f21b _public_6f2f21b
#define public_6f2f230 _public_6f2f230
#define public_6f2f23c _public_6f2f23c
#define public_6f2f251 _public_6f2f251
#define public_6f2f259 _public_6f2f259

PROC_DECLARE(0x6f2f0e0, internal_6f2f0e0, public_6f2f0e0);
extern "C" NAKED register_t __cdecl internal_6f2f0e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae7c1 @0x6f2f0e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae7c1
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
        je public_6f2f259
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
        push 0x20
        mov byte ptr ds : [esi+0xC], al
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x1D], 0
        mov cl, 1
        mov byte ptr ds : [eax+0x1C], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x1D], cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x20
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x1C], 0
        mov byte ptr ds : [eax+0x1D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov ecx, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ecx+4]
        mov cl, byte ptr ss : [ebp+0x1D]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x28], edx
        jne public_6f2f1e4
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x1C]
        push ecx
        push eax
        mov ecx, esi
        call public_6f6a2c0
        mov ebx, eax
        lea edx, ss:[ebp+0xC]
        push edx
        lea eax, ds:[ebx+0xC]
        push eax
        call public_6f2f270
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ecx
        jne public_6f2f1c7
        mov dword ptr ss : [esp+0x28], ebx
        public_6f2f1c7 : nop
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push ecx
        mov ecx, esi
        call public_6f2eea0
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push edx
        mov ecx, esi
        call public_6f2eea0
        mov dword ptr ds : [ebx+8], eax
        public_6f2f1e4 : nop
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
        je public_6f2f251
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        jne public_6f2f21b
        nop 
        lea esp, ss:[esp]
        public_6f2f210 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f2f210
        public_6f2f21b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x1D]
        test dl, dl
        jne public_6f2f23c
        lea ecx, ds:[ecx]
        public_6f2f230 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x1D]
        test dl, dl
        je public_6f2f230
        public_6f2f23c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f2f251 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_6f2f259 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2f0e0)
    }
}

#undef public_6f2f1c7
#undef public_6f2f1e4
#undef public_6f2f210
#undef public_6f2f21b
#undef public_6f2f230
#undef public_6f2f23c
#undef public_6f2f251
#undef public_6f2f259
