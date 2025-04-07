#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38730);

#define public_6b38742 _public_6b38742

PROC_DECLARE(0x6b38730, internal_6b38730, public_6b38730);
extern "C" NAKED register_t __cdecl internal_6b38730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b38742
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_6b38742 : nop
        ret 
        UNREACHABLE_TRAP(0x6b38730)
    }
}

#undef public_6b38742
