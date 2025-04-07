#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_624260f _public_624260f
#define public_6242628 _public_6242628

PROC_DECLARE(0x6242600, internal_6242600, public_6242600);
extern "C" NAKED register_t __cdecl internal_6242600()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_624260f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_624260f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6242628
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6242628 : nop
        ret 4
        UNREACHABLE_TRAP(0x6242600)
    }
}

#undef public_624260f
#undef public_6242628
