#include "Common-PCH.h"


#define public_62eec62 _public_62eec62
#define public_62eec6e _public_62eec6e
#define public_62eec75 _public_62eec75
#define public_62eec80 _public_62eec80
#define public_62eec91 _public_62eec91

PROC_DECLARE(0x62eec50, internal_62eec50, public_62eec50);
extern "C" NAKED register_t __cdecl internal_62eec50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x18]
        xor eax, eax
        test esi, esi
        push edi
        jle public_62eec6e
        mov edi, dword ptr ss : [esp+0xC]
        lea edx, ds:[ecx+0x1C]
        public_62eec62 : nop
        cmp dword ptr ds : [edx], edi
        je public_62eec75
        inc eax
        add edx, 4
        cmp eax, esi
        jl public_62eec62
        public_62eec6e : nop
        pop edi
        pop esi
        xor eax, eax
        ret 4
        public_62eec75 : nop
        dec esi
        cmp eax, esi
        mov edx, eax
        jge public_62eec91
        lea eax, ds:[ecx+eax*4+0x1C]
        public_62eec80 : nop
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+0x18]
        inc edx
        add eax, 4
        dec esi
        cmp edx, esi
        jl public_62eec80
        public_62eec91 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        pop edi
        dec eax
        pop esi
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x62eec50)
    }
}

#undef public_62eec62
#undef public_62eec6e
#undef public_62eec75
#undef public_62eec80
#undef public_62eec91
