#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31980);

#define public_6f31990 _public_6f31990
#define public_6f3199b _public_6f3199b

PROC_DECLARE(0x6f31980, internal_6f31980, public_6f31980);
extern "C" NAKED register_t __cdecl internal_6f31980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6f3199b
        lea ecx, ds:[ecx]
        public_6f31990 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6f31990
        public_6f3199b : nop
        ret 
        UNREACHABLE_TRAP(0x6f31980)
    }
}

#undef public_6f31990
#undef public_6f3199b
