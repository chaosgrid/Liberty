#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74170);

#define public_6b74180 _public_6b74180

PROC_DECLARE(0x6b74170, internal_6b74170, public_6b74170);
extern "C" NAKED register_t __cdecl internal_6b74170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b74180
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6b74180 : nop
        ret 
        UNREACHABLE_TRAP(0x6b74170)
    }
}

#undef public_6b74180
