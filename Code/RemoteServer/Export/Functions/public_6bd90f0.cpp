#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd90f0);

#define public_6bd9100 _public_6bd9100

PROC_DECLARE(0x6bd90f0, internal_6bd90f0, public_6bd90f0);
extern "C" NAKED register_t __cdecl internal_6bd90f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bd9100
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6bd9100 : nop
        ret 
        UNREACHABLE_TRAP(0x6bd90f0)
    }
}

#undef public_6bd9100
