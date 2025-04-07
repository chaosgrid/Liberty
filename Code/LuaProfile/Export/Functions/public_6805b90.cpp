#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805b90);

#define public_6805b98 _public_6805b98
#define public_6805b9e _public_6805b9e
#define public_6805bad _public_6805bad
#define public_6805bb3 _public_6805bb3

PROC_DECLARE(0x6805b90, internal_6805b90, public_6805b90);
extern "C" NAKED register_t __cdecl internal_6805b90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6805bb3
        public_6805b98 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6805bad
        public_6805b9e : nop
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_6805bad
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        jne public_6805b9e
        public_6805bad : nop
        test eax, eax
        mov ecx, eax
        jne public_6805b98
        public_6805bb3 : nop
        ret 
        UNREACHABLE_TRAP(0x6805b90)
    }
}

#undef public_6805b98
#undef public_6805b9e
#undef public_6805bad
#undef public_6805bb3
