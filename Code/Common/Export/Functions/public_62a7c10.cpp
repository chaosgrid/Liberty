#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7c10);

#define public_62a7c20 _public_62a7c20
#define public_62a7c2b _public_62a7c2b

PROC_DECLARE(0x62a7c10, internal_62a7c10, public_62a7c10);
extern "C" NAKED register_t __cdecl internal_62a7c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x69]
        test dl, dl
        jne public_62a7c2b
        lea ecx, ds:[ecx]
        public_62a7c20 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x69]
        test dl, dl
        je public_62a7c20
        public_62a7c2b : nop
        ret 
        UNREACHABLE_TRAP(0x62a7c10)
    }
}

#undef public_62a7c20
#undef public_62a7c2b
