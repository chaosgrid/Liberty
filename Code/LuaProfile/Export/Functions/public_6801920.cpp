#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680bc56);

#define public_680192f _public_680192f
#define public_6801948 _public_6801948

PROC_DECLARE(0x6801920, internal_6801920, public_6801920);
extern "C" NAKED register_t __cdecl internal_6801920()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_680192f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_680192f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6801948
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_680bc56
        add esp, 4
        xor eax, eax
        public_6801948 : nop
        ret 4
        UNREACHABLE_TRAP(0x6801920)
    }
}

#undef public_680192f
#undef public_6801948
