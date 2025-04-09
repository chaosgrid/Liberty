#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527440);

#define public_527450 _public_527450
#define public_52745b _public_52745b

PROC_DECLARE(0x527440, internal_527440, public_527440);
extern "C" NAKED register_t __cdecl internal_527440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_52745b
        lea ecx, ds:[ecx]
        public_527450 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_527450
        public_52745b : nop
        ret 
        UNREACHABLE_TRAP(0x527440)
    }
}

#undef public_527450
#undef public_52745b
