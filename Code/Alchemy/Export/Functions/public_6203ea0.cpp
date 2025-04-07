#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6203eaf _public_6203eaf
#define public_6203ec8 _public_6203ec8

PROC_DECLARE(0x6203ea0, internal_6203ea0, public_6203ea0);
extern "C" NAKED register_t __cdecl internal_6203ea0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6203eaf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6203eaf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6203ec8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6203ec8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6203ea0)
    }
}

#undef public_6203eaf
#undef public_6203ec8
