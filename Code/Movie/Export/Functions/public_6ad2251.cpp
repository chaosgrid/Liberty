#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad221c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2251);

#define public_6ad2262 _public_6ad2262
#define public_6ad227f _public_6ad227f

PROC_DECLARE(0x6ad2251, internal_6ad2251, public_6ad2251);
extern "C" NAKED register_t __cdecl internal_6ad2251()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, edi
        dec edi
        test eax, eax
        jle public_6ad227f
        mov esi, dword ptr ss : [esp+0x18]
        public_6ad2262 : nop
        push esi
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x14]
        call public_6ad221c
        add esp, 0xC
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6ad227f
        mov eax, edi
        dec edi
        test eax, eax
        jg public_6ad2262
        public_6ad227f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad2251)
    }
}

#undef public_6ad2262
#undef public_6ad227f
