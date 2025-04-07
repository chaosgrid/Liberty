#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);

#define public_475455 _public_475455
#define public_475468 _public_475468
#define public_475477 _public_475477
#define public_47547d _public_47547d

PROC_DECLARE(0x475430, internal_475430, public_475430);
extern "C" NAKED register_t __cdecl internal_475430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF02
        push edi
        mov edi, ecx
        jne public_47547d
        push 0
        push edi
        call public_59dd00
        add esp, 8
        test edi, edi
        je public_475477
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_475468
        push esi
        public_475455 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_475455
        pop esi
        public_475468 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_475477 : nop
        mov al, 1
        pop edi
        ret 0xC
        public_47547d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_5a0840
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x475430)
    }
}

#undef public_475455
#undef public_475468
#undef public_475477
#undef public_47547d
