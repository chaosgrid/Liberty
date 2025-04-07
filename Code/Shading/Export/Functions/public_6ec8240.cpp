#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8240);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec8257 _public_6ec8257
#define public_6ec8267 _public_6ec8267

PROC_DECLARE(0x6ec8240, internal_6ec8240, public_6ec8240);
extern "C" NAKED register_t __cdecl internal_6ec8240()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ec8257
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6ec8257 : nop
        test byte ptr ss : [esp+8], 1
        je public_6ec8267
        push esi
        call public_6ed0c50
        add esp, 4
        public_6ec8267 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec8240)
    }
}

#undef public_6ec8257
#undef public_6ec8267
