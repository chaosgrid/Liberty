#include "EngBase-PCH.h"


#define public_661ff6a _public_661ff6a
#define public_661ff71 _public_661ff71
#define public_661ff75 _public_661ff75
#define public_661ff86 _public_661ff86

PROC_DECLARE(0x661ff20, internal_661ff20, public_661ff20);
extern "C" NAKED register_t __cdecl internal_661ff20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov dword ptr ss : [esp], ecx
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_661ff75
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
/*FIXUP push offset public_662a6e8 @0x661ff39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a6e8
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_661ff71
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov esi, eax
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_661ff6a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_661ff6a : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 0xC
        public_661ff71 : nop
        mov ecx, dword ptr ss : [esp]
        public_661ff75 : nop
        mov edx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        mov byte ptr ds : [edx], 0
        je public_661ff86
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+8]
        public_661ff86 : nop
        xor eax, eax
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x661ff20)
    }
}

#undef public_661ff6a
#undef public_661ff71
#undef public_661ff75
#undef public_661ff86
