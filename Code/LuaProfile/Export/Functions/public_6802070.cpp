#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802070);
CLANG_FORWARD_PROC_SYMBOL(public_6803ad0);

#define public_680209e _public_680209e
#define public_68020a4 _public_68020a4

PROC_DECLARE(0x6802070, internal_6802070, public_6802070);
extern "C" NAKED register_t __cdecl internal_6802070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_68020a4
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        mov ecx, dword ptr ds : [edx+eax-0x10]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[edx+eax-0x10]
        je public_680209e
        push eax
        call public_6803ad0
        add esp, 4
        test eax, eax
        jne public_68020a4
        public_680209e : nop
        mov eax, 1
        ret 
        public_68020a4 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6802070)
    }
}

#undef public_680209e
#undef public_68020a4
