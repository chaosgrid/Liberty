#include "Server-PCH.h"


#define public_6d52b4b _public_6d52b4b

PROC_DECLARE(0x6d52b40, internal_6d52b40, public_6d52b40);
extern "C" NAKED register_t __cdecl internal_6d52b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_6d52b4b
        ret 4
        public_6d52b4b : nop
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+ecx-0x18]
        ret 4
        UNREACHABLE_TRAP(0x6d52b40)
    }
}

#undef public_6d52b4b
