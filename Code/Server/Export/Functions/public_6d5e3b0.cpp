#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6d5e3e7 _public_6d5e3e7
#define public_6d5e3e9 _public_6d5e3e9

PROC_DECLARE(0x6d5e3b0, internal_6d5e3b0, public_6d5e3b0);
extern "C" NAKED register_t __cdecl internal_6d5e3b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6d5e3e9
        push ecx
        call dword ptr ds : [public_6d644a4]
        add esp, 4
        test eax, eax
        mov ecx, 0xFFFFFFFE
        je public_6d5e3e7
        fld dword ptr ds : [eax+0x1C]
        call public_6d60150
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 
        public_6d5e3e7 : nop
        mov eax, ecx
        public_6d5e3e9 : nop
        ret 
        UNREACHABLE_TRAP(0x6d5e3b0)
    }
}

#undef public_6d5e3e7
#undef public_6d5e3e9
