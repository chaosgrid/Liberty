#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bed10);

#define public_62bed20 _public_62bed20
#define public_62bed2b _public_62bed2b

PROC_DECLARE(0x62bed10, internal_62bed10, public_62bed10);
extern "C" NAKED register_t __cdecl internal_62bed10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_62bed2b
        lea ecx, ds:[ecx]
        public_62bed20 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_62bed20
        public_62bed2b : nop
        ret 
        UNREACHABLE_TRAP(0x62bed10)
    }
}

#undef public_62bed20
#undef public_62bed2b
