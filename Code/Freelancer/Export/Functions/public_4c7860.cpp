#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7860);

#define public_4c7868 _public_4c7868
#define public_4c7874 _public_4c7874
#define public_4c7877 _public_4c7877
#define public_4c788c _public_4c788c

PROC_DECLARE(0x4c7860, internal_4c7860, public_4c7860);
extern "C" NAKED register_t __cdecl internal_4c7860()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor esi, esi
        public_4c7868 : nop
        test esi, esi
        jne public_4c7874
        mov esi, dword ptr ds : [public_673518]
        jmp public_4c7877
        public_4c7874 : nop
        mov esi, dword ptr ds : [esi+0x34]
        public_4c7877 : nop
        test esi, esi
        je public_4c788c
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        test al, al
        je public_4c7868
        pop edi
        mov al, 1
        pop esi
        ret 
        public_4c788c : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c7860)
    }
}

#undef public_4c7868
#undef public_4c7874
#undef public_4c7877
#undef public_4c788c
