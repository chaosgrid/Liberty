#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd70);

#define public_41bd80 _public_41bd80
#define public_41bd8b _public_41bd8b

PROC_DECLARE(0x41bd70, internal_41bd70, public_41bd70);
extern "C" NAKED register_t __cdecl internal_41bd70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        jne public_41bd8b
        lea ecx, ds:[ecx]
        public_41bd80 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        je public_41bd80
        public_41bd8b : nop
        ret 
        UNREACHABLE_TRAP(0x41bd70)
    }
}

#undef public_41bd80
#undef public_41bd8b
