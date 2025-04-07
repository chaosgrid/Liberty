#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427710);

#define public_427720 _public_427720
#define public_42772b _public_42772b

PROC_DECLARE(0x427710, internal_427710, public_427710);
extern "C" NAKED register_t __cdecl internal_427710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x59]
        test dl, dl
        jne public_42772b
        lea ecx, ds:[ecx]
        public_427720 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x59]
        test dl, dl
        je public_427720
        public_42772b : nop
        ret 
        UNREACHABLE_TRAP(0x427710)
    }
}

#undef public_427720
#undef public_42772b
