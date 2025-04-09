#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7820);

#define public_4c7828 _public_4c7828
#define public_4c7834 _public_4c7834
#define public_4c7837 _public_4c7837
#define public_4c784c _public_4c784c

PROC_DECLARE(0x4c7820, internal_4c7820, public_4c7820);
extern "C" NAKED register_t __cdecl internal_4c7820()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor esi, esi
        public_4c7828 : nop
        test esi, esi
        jne public_4c7834
        mov esi, dword ptr ds : [public_673518]
        jmp public_4c7837
        public_4c7834 : nop
        mov esi, dword ptr ds : [esi+0x34]
        public_4c7837 : nop
        test esi, esi
        je public_4c784c
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        test al, al
        je public_4c7828
        pop edi
        mov al, 1
        pop esi
        ret 
        public_4c784c : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c7820)
    }
}

#undef public_4c7828
#undef public_4c7834
#undef public_4c7837
#undef public_4c784c
