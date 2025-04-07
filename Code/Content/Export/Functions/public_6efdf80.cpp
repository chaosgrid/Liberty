#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efdf80);

#define public_6efdf90 _public_6efdf90
#define public_6efdf9b _public_6efdf9b

PROC_DECLARE(0x6efdf80, internal_6efdf80, public_6efdf80);
extern "C" NAKED register_t __cdecl internal_6efdf80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x55]
        test dl, dl
        jne public_6efdf9b
        lea ecx, ds:[ecx]
        public_6efdf90 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x55]
        test dl, dl
        je public_6efdf90
        public_6efdf9b : nop
        ret 
        UNREACHABLE_TRAP(0x6efdf80)
    }
}

#undef public_6efdf90
#undef public_6efdf9b
