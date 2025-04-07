#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06030);

#define public_6d06040 _public_6d06040
#define public_6d0604b _public_6d0604b

PROC_DECLARE(0x6d06030, internal_6d06030, public_6d06030);
extern "C" NAKED register_t __cdecl internal_6d06030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6d0604b
        lea ecx, ds:[ecx]
        public_6d06040 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6d06040
        public_6d0604b : nop
        ret 
        UNREACHABLE_TRAP(0x6d06030)
    }
}

#undef public_6d06040
#undef public_6d0604b
