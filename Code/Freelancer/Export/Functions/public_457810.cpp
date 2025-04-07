#include "Freelancer-PCH.h"


#define public_45782a _public_45782a
#define public_457838 _public_457838
#define public_457846 _public_457846
#define public_457854 _public_457854
#define public_457862 _public_457862
#define public_457870 _public_457870
#define public_45787e _public_45787e
#define public_45788c _public_45788c

PROC_DECLARE(0x457810, internal_457810, public_457810);
extern "C" NAKED register_t __cdecl internal_457810()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+0xC]
        test dl, 1
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        je public_45782a
        mov esi, dword ptr ds : [eax+0x84]
        mov dword ptr ds : [ecx], esi
        public_45782a : nop
        test dl, 2
        je public_457838
        mov esi, dword ptr ds : [eax+0x88]
        mov dword ptr ds : [ecx+4], esi
        public_457838 : nop
        test dl, 4
        je public_457846
        mov esi, dword ptr ds : [eax+0x8C]
        mov dword ptr ds : [ecx+8], esi
        public_457846 : nop
        test dl, 8
        je public_457854
        mov esi, dword ptr ds : [eax+0x90]
        mov dword ptr ds : [ecx+0xC], esi
        public_457854 : nop
        test dl, 0x10
        je public_457862
        mov esi, dword ptr ds : [eax+0x94]
        mov dword ptr ds : [ecx+0x10], esi
        public_457862 : nop
        test dl, 0x20
        je public_457870
        mov esi, dword ptr ds : [eax+0x98]
        mov dword ptr ds : [ecx+0x14], esi
        public_457870 : nop
        test dl, 0x40
        je public_45787e
        mov esi, dword ptr ds : [eax+0x9C]
        mov dword ptr ds : [ecx+0x18], esi
        public_45787e : nop
        test dl, dl
        pop esi
        jns public_45788c
        mov eax, dword ptr ds : [eax+0xA0]
        mov dword ptr ds : [ecx+0x1C], eax
        public_45788c : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x457810)
    }
}

#undef public_45782a
#undef public_457838
#undef public_457846
#undef public_457854
#undef public_457862
#undef public_457870
#undef public_45787e
#undef public_45788c
