#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45dc60);

#define public_45dc76 _public_45dc76
#define public_45dc89 _public_45dc89
#define public_45dca2 _public_45dca2

PROC_DECLARE(0x45dc60, internal_45dc60, public_45dc60);
extern "C" NAKED register_t __cdecl internal_45dc60()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0x508]
        test edi, edi
        je public_45dca2
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_45dc89
        push esi
        public_45dc76 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_45dc76
        pop esi
        public_45dc89 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [ebx+0x508], 0
        public_45dca2 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x45dc60)
    }
}

#undef public_45dc76
#undef public_45dc89
#undef public_45dca2
