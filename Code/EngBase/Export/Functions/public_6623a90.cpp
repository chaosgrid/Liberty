#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6623a90);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6623a9d _public_6623a9d
#define public_6623aaf _public_6623aaf

PROC_DECLARE(0x6623a90, internal_6623a90, public_6623a90);
extern "C" NAKED register_t __cdecl internal_6623a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b19c]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_6623aaf
        push esi
        public_6623a9d : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_66281d0
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_6623a9d
        pop esi
        public_6623aaf : nop
        mov dword ptr ds : [public_662b19c], edi
        mov dword ptr ds : [public_662b1a8], edi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6623a90)
    }
}

#undef public_6623a9d
#undef public_6623aaf
