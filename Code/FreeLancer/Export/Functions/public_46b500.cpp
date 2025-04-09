#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4632f0);
CLANG_FORWARD_PROC_SYMBOL(public_46b500);

#define public_46b514 _public_46b514

PROC_DECLARE(0x46b500, internal_46b500, public_46b500);
extern "C" NAKED register_t __cdecl internal_46b500()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66da84]
        test ecx, ecx
        je public_46b514
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4632f0
        public_46b514 : nop
        ret 
        UNREACHABLE_TRAP(0x46b500)
    }
}

#undef public_46b514
