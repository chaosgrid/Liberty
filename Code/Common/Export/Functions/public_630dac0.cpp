#include "Common-PCH.h"


#define public_630db00 _public_630db00
#define public_630db08 _public_630db08
#define public_630db0a _public_630db0a

PROC_DECLARE(0x630dac0, internal_630dac0, public_630dac0);
extern "C" NAKED register_t __cdecl internal_630dac0()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630db0a
        mov cl, byte ptr ds : [esi+0xE]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0xE], dl
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        mov word ptr ds : [eax+8], 0x64
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        je public_630db08
        lea ebx, ds:[ebx]
        public_630db00 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630db00
        public_630db08 : nop
        mov dword ptr ds : [ecx], eax
        public_630db0a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630dac0)
    }
}

#undef public_630db00
#undef public_630db08
#undef public_630db0a
