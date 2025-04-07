#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2eca0);

#define public_6c2ecb0 _public_6c2ecb0
#define public_6c2ecbb _public_6c2ecbb

PROC_DECLARE(0x6c2eca0, internal_6c2eca0, public_6c2eca0);
extern "C" NAKED register_t __cdecl internal_6c2eca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6c2ecbb
        lea ecx, ds:[ecx]
        public_6c2ecb0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6c2ecb0
        public_6c2ecbb : nop
        ret 
        UNREACHABLE_TRAP(0x6c2eca0)
    }
}

#undef public_6c2ecb0
#undef public_6c2ecbb
