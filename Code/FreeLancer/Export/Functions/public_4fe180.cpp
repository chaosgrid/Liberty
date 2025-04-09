#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fe180);

#define public_4fe190 _public_4fe190
#define public_4fe1a1 _public_4fe1a1
#define public_4fe1ae _public_4fe1ae

PROC_DECLARE(0x4fe180, internal_4fe180, public_4fe180);
extern "C" NAKED register_t __cdecl internal_4fe180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674f9c]
        cmp eax, dword ptr ds : [public_674fa0]
        push esi
        mov esi, eax
        je public_4fe1ae
        public_4fe190 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4fe1a1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_674f9c]
        public_4fe1a1 : nop
        mov ecx, dword ptr ds : [public_674fa0]
        add esi, 4
        cmp esi, ecx
        jne public_4fe190
        public_4fe1ae : nop
        mov dword ptr ds : [public_674fa0], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4fe180)
    }
}

#undef public_4fe190
#undef public_4fe1a1
#undef public_4fe1ae
