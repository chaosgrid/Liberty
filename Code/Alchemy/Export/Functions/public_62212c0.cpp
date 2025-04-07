#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62212c0);

#define public_62212d5 _public_62212d5

PROC_DECLARE(0x62212c0, internal_62212c0, public_62212c0);
extern "C" NAKED register_t __cdecl internal_62212c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_62212d5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_62212d5 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62212c0)
    }
}

#undef public_62212d5
