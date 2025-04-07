#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45cef0);
CLANG_FORWARD_PROC_SYMBOL(public_55e290);

#define public_45cf02 _public_45cf02
#define public_45cf20 _public_45cf20
#define public_45cf33 _public_45cf33
#define public_45cf4c _public_45cf4c

PROC_DECLARE(0x45cef0, internal_45cef0, public_45cef0);
extern "C" NAKED register_t __cdecl internal_45cef0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x3A8]
        test eax, eax
        push edi
        je public_45cf02
        and byte ptr ds : [eax+0x6C], 0xFC
        public_45cf02 : nop
        mov edi, dword ptr ds : [ebx+0x508]
        test edi, edi
        mov dword ptr ds : [ebx+0x3A8], 0
        je public_45cf4c
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_45cf33
        push esi
        mov edi, edi
        public_45cf20 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_45cf20
        pop esi
        public_45cf33 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [ebx+0x508], 0
        public_45cf4c : nop
        pop edi
        lea ecx, ds:[ebx+0x330]
        pop ebx
        jmp public_55e290
        UNREACHABLE_TRAP(0x45cef0)
    }
}

#undef public_45cf02
#undef public_45cf20
#undef public_45cf33
#undef public_45cf4c
