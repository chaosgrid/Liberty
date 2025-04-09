#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e8c0);

#define public_46e8d0 _public_46e8d0
#define public_46e8db _public_46e8db

PROC_DECLARE(0x46e8c0, internal_46e8c0, public_46e8c0);
extern "C" NAKED register_t __cdecl internal_46e8c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x1D]
        test dl, dl
        jne public_46e8db
        lea ecx, ds:[ecx]
        public_46e8d0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x1D]
        test dl, dl
        je public_46e8d0
        public_46e8db : nop
        ret 
        UNREACHABLE_TRAP(0x46e8c0)
    }
}

#undef public_46e8d0
#undef public_46e8db
