#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf79c0);

#define public_6cf79d0 _public_6cf79d0
#define public_6cf79db _public_6cf79db

PROC_DECLARE(0x6cf79c0, internal_6cf79c0, public_6cf79c0);
extern "C" NAKED register_t __cdecl internal_6cf79c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_6cf79db
        lea ecx, ds:[ecx]
        public_6cf79d0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_6cf79d0
        public_6cf79db : nop
        ret 
        UNREACHABLE_TRAP(0x6cf79c0)
    }
}

#undef public_6cf79d0
#undef public_6cf79db
