#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d1630);

#define public_62d1644 _public_62d1644

PROC_DECLARE(0x62d1630, internal_62d1630, public_62d1630);
extern "C" NAKED register_t __cdecl internal_62d1630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax*4+public_63fc8e4]
        test ecx, ecx
        je public_62d1644
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+4]
        public_62d1644 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62d1630)
    }
}

#undef public_62d1644
