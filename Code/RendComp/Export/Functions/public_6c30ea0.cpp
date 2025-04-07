#include "RendComp-PCH.h"


#define public_6c30eed _public_6c30eed
#define public_6c30efb _public_6c30efb

PROC_DECLARE(0x6c30ea0, internal_6c30ea0, public_6c30ea0);
extern "C" NAKED register_t __cdecl internal_6c30ea0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6c37d50]
        push esi
        lea edx, ss:[esp+4]
        push edx
/*FIXUP push offset public_6c379c0 @0x6c30eac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c379c0
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        or esi, 0xFFFFFFFF
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6c30eed
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        add edx, 0x14
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov esi, eax
        public_6c30eed : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6c30efb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6c30efb : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6c30ea0)
    }
}

#undef public_6c30eed
#undef public_6c30efb
