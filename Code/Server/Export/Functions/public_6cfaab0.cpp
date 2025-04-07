#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfaaea _public_6cfaaea
#define public_6cfaaec _public_6cfaaec

PROC_DECLARE(0x6cfaab0, internal_6cfaab0, public_6cfaab0);
extern "C" NAKED register_t __cdecl internal_6cfaab0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cfaaec
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfaaea
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x40]
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cfaaea : nop
        mov eax, edi
        public_6cfaaec : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfaab0)
    }
}

#undef public_6cfaaea
#undef public_6cfaaec
