#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680bb70);
CLANG_FORWARD_PROC_SYMBOL(public_680bba0);

#define public_680bb97 _public_680bb97

PROC_DECLARE(0x680bb70, internal_680bb70, public_680bb70);
extern "C" NAKED register_t __cdecl internal_680bb70()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+0x24]
        add edx, eax
        cmp edx, esi
        pop esi
        jle public_680bb97
        push eax
        call public_680bba0
        mov ecx, dword ptr ds : [public_680e604]
        add esp, 4
        public_680bb97 : nop
        mov eax, dword ptr ds : [ecx+0x28]
        add eax, dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x680bb70)
    }
}

#undef public_680bb97
