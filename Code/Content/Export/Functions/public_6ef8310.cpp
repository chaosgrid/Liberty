#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8310);

#define public_6ef8320 _public_6ef8320

PROC_DECLARE(0x6ef8310, internal_6ef8310, public_6ef8310);
extern "C" NAKED register_t __cdecl internal_6ef8310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ef8320
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_6ef8320 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef8310)
    }
}

#undef public_6ef8320
