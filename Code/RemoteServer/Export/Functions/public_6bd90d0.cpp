#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd90d0);

#define public_6bd90e2 _public_6bd90e2

PROC_DECLARE(0x6bd90d0, internal_6bd90d0, public_6bd90d0);
extern "C" NAKED register_t __cdecl internal_6bd90d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bd90e2
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_6bd90e2 : nop
        ret 
        UNREACHABLE_TRAP(0x6bd90d0)
    }
}

#undef public_6bd90e2
