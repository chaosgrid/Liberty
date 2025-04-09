#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c870);
CLANG_FORWARD_PROC_SYMBOL(public_43cf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b949b);

#define public_43c895 _public_43c895
#define public_43c89e _public_43c89e
#define public_43c8a0 _public_43c8a0
#define public_43c8ad _public_43c8ad
#define public_43c8cd _public_43c8cd
#define public_43c8d9 _public_43c8d9
#define public_43c902 _public_43c902
#define public_43c904 _public_43c904
#define public_43c92a _public_43c92a
#define public_43c934 _public_43c934
#define public_43c94e _public_43c94e
#define public_43c951 _public_43c951

PROC_DECLARE(0x43c870, internal_43c870, public_43c870);
extern "C" NAKED register_t __cdecl internal_43c870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b949b @0x43c872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b949b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        xor eax, eax
        public_43c895 : nop
        test eax, eax
        jne public_43c89e
        mov eax, dword ptr ds : [esi+4]
        jmp public_43c8a0
        public_43c89e : nop
        mov eax, dword ptr ds : [eax]
        public_43c8a0 : nop
        test eax, eax
        je public_43c8ad
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], edx
        jne public_43c895
        mov edi, eax
        public_43c8ad : nop
        test edi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_43c8d9
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        je public_43c8cd
        mov ecx, edi
        call dword ptr ds : [public_5c6118]
        push edi
        call public_5b7e1d
        add esp, 4
        public_43c8cd : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_43cf80
        public_43c8d9 : nop
        push 0x260
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_43c902
        mov ecx, eax
        call dword ptr ds : [public_5c6120]
        mov edi, eax
        jmp public_43c904
        public_43c902 : nop
        xor edi, edi
        public_43c904 : nop
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6178]
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_43c92a
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_43c92a
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_43c934
        public_43c92a : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_43c934 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_43c94e
        mov dword ptr ds : [ecx], eax
        jmp public_43c951
        public_43c94e : nop
        mov dword ptr ds : [esi+4], eax
        public_43c951 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x43c870)
    }
}

#undef public_43c895
#undef public_43c89e
#undef public_43c8a0
#undef public_43c8ad
#undef public_43c8cd
#undef public_43c8d9
#undef public_43c902
#undef public_43c904
#undef public_43c92a
#undef public_43c934
#undef public_43c94e
#undef public_43c951
