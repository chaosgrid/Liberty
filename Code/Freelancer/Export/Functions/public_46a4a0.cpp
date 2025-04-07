#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a4a0);

#define public_46a4bb _public_46a4bb
#define public_46a4c3 _public_46a4c3

PROC_DECLARE(0x46a4a0, internal_46a4a0, public_46a4a0);
extern "C" NAKED register_t __cdecl internal_46a4a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_66da88], al
        test al, al
        mov eax, dword ptr ds : [public_66da80]
        je public_46a4bb
        test eax, eax
        je public_46a4c3
        or byte ptr ds : [eax+0x6C], 3
        ret 
        public_46a4bb : nop
        test eax, eax
        je public_46a4c3
        and byte ptr ds : [eax+0x6C], 0xFC
        public_46a4c3 : nop
        ret 
        UNREACHABLE_TRAP(0x46a4a0)
    }
}

#undef public_46a4bb
#undef public_46a4c3
