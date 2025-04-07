#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21080);
CLANG_FORWARD_PROC_SYMBOL(public_6c21170);
CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c21ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c21098 _public_6c21098
#define public_6c210df _public_6c210df
#define public_6c2111e _public_6c2111e
#define public_6c21123 _public_6c21123
#define public_6c21144 _public_6c21144

PROC_DECLARE(0x6c21080, internal_6c21080, public_6c21080);
extern "C" NAKED register_t __cdecl internal_6c21080()
{
    __asm
    {
        mov eax, 0x2008
        call public_6c34ec0
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax]
        push edi
        mov dword ptr ss : [esp+0xC], eax
        public_6c21098 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c210df
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6c37094 @0x6c210a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37094
        push edx
        call public_6c21170
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        push 0x86
/*FIXUP push offset public_6c37048 @0x6c210bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37048
        mov ecx, 0x100003
/*FIXUP push offset public_6c3702c @0x6c210c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        lea ecx, ss:[esp+0xC]
        call public_6c304a0
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_6c21098
        public_6c210df : nop
        mov edi, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edi]
        add esi, 0xC
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0xC], eax
        je public_6c2111e
        mov ecx, eax
        cmp eax, ecx
        jne public_6c2111e
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_6c21ee0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6c21144
        public_6c2111e : nop
        cmp eax, edi
        je public_6c21144
        push ebx
        public_6c21123 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6c304a0
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6c21b10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6c21123
        pop ebx
        public_6c21144 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6c34ea0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        add esp, 0x2008
        ret 
        UNREACHABLE_TRAP(0x6c21080)
    }
}

#undef public_6c21098
#undef public_6c210df
#undef public_6c2111e
#undef public_6c21123
#undef public_6c21144
