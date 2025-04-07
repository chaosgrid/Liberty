#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4488f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9a88);

#define public_448924 _public_448924
#define public_448948 _public_448948
#define public_448952 _public_448952
#define public_448966 _public_448966
#define public_448978 _public_448978
#define public_448982 _public_448982
#define public_448994 _public_448994
#define public_4489a8 _public_4489a8
#define public_4489bc _public_4489bc
#define public_4489c3 _public_4489c3

PROC_DECLARE(0x4488f0, internal_4488f0, public_4488f0);
extern "C" NAKED register_t __cdecl internal_4488f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9a88 @0x4488f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9a88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, eax
        mov edi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, eax
        je public_448948
        public_448924 : nop
        mov edx, ecx
        mov ebx, dword ptr ds : [edx]
        mov esi, edi
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        add ecx, 0x10
        add edi, 0x10
        cmp ecx, eax
        mov dword ptr ds : [esi+0xC], edx
        jne public_448924
        public_448948 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edi, ebx
        je public_448982
        lea esi, ds:[edi+0xC]
        public_448952 : nop
        mov ecx, dword ptr ds : [esi-4]
        test ecx, ecx
        je public_448966
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi-4], 0
        public_448966 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_448978
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi], 0
        public_448978 : nop
        add esi, 0x10
        lea eax, ds:[esi-0xC]
        cmp eax, ebx
        jne public_448952
        public_448982 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_4489c3
        public_448994 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_4489a8
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_4489a8 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_4489bc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xC], 0
        public_4489bc : nop
        add esi, 0x10
        cmp esi, edi
        jne public_448994
        public_4489c3 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4488f0)
    }
}

#undef public_448924
#undef public_448948
#undef public_448952
#undef public_448966
#undef public_448978
#undef public_448982
#undef public_448994
#undef public_4489a8
#undef public_4489bc
#undef public_4489c3
