#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd730);

#define public_66fd740 _public_66fd740
#define public_66fd74b _public_66fd74b

PROC_DECLARE(0x66fd730, internal_66fd730, public_66fd730);
extern "C" NAKED register_t __cdecl internal_66fd730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_66fd74b
        lea ecx, ds:[ecx]
        public_66fd740 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_66fd740
        public_66fd74b : nop
        ret 
        UNREACHABLE_TRAP(0x66fd730)
    }
}

#undef public_66fd740
#undef public_66fd74b
