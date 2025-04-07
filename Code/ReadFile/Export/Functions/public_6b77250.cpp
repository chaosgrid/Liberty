#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77250);

#define public_6b77278 _public_6b77278
#define public_6b77285 _public_6b77285

PROC_DECLARE(0x6b77250, internal_6b77250, public_6b77250);
extern "C" NAKED register_t __cdecl internal_6b77250()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test al, 1
        je public_6b77285
        test al, 4
        je public_6b77278
        mov eax, dword ptr ds : [esi+8]
        push 0x8000
        push 0
        push eax
        call dword ptr ds : [public_6b7905c]
        mov dword ptr ds : [esi+8], 0
        pop esi
        ret 
        public_6b77278 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call dword ptr ds : [public_6b79070]
        add esp, 4
        public_6b77285 : nop
        mov dword ptr ds : [esi+8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b77250)
    }
}

#undef public_6b77278
#undef public_6b77285
