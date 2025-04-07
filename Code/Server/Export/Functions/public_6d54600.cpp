#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53360);
CLANG_FORWARD_PROC_SYMBOL(public_6d543c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d54600);

#define public_6d54603 _public_6d54603
#define public_6d5461b _public_6d5461b
#define public_6d5462f _public_6d5462f

PROC_DECLARE(0x6d54600, internal_6d54600, public_6d54600);
extern "C" NAKED register_t __cdecl internal_6d54600()
{
    __asm
    {
        push esi
        mov esi, ecx
        public_6d54603 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d5462f
        mov ecx, dword ptr ds : [eax+0x348]
        test ecx, ecx
        jne public_6d5461b
        push eax
        mov ecx, esi
        call public_6d53360
        public_6d5461b : nop
        test eax, eax
        je public_6d5462f
        mov eax, dword ptr ds : [eax+0x348]
        push eax
        mov ecx, esi
        call public_6d543c0
        jmp public_6d54603
        public_6d5462f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d54600)
    }
}

#undef public_6d54603
#undef public_6d5461b
#undef public_6d5462f
