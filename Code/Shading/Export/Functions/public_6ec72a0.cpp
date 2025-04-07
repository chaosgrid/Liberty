#include "Shading-PCH.h"


#define public_6ec72e8 _public_6ec72e8
#define public_6ec7303 _public_6ec7303
#define public_6ec731c _public_6ec731c

PROC_DECLARE(0x6ec72a0, internal_6ec72a0, public_6ec72a0);
extern "C" NAKED register_t __cdecl internal_6ec72a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6ec731c
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6ed1284]
        fnstsw ax
        test ah, 0x41
        jne public_6ec731c
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xC]
        mov edi, eax
        cmp dword ptr ds : [edi], 0
        je public_6ec731c
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [esi+8]
        lea edx, ds:[ecx+ecx*4]
        fst dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        fcomp dword ptr ds : [eax+edx*4]
        lea edx, ds:[eax+edx*4]
        fnstsw ax
        test ah, 0x41
        jne public_6ec731c
        public_6ec72e8 : nop
        fld dword ptr ds : [esi+8]
        lea eax, ds:[ecx+1]
        fsub dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xC], eax
        fstp dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi]
        cmp eax, ecx
        jb public_6ec7303
        mov dword ptr ds : [esi+0xC], 0
        public_6ec7303 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        lea edx, ds:[ecx+ecx*4]
        fcomp dword ptr ds : [eax+edx*4]
        lea edx, ds:[eax+edx*4]
        fnstsw ax
        test ah, 0x41
        je public_6ec72e8
        public_6ec731c : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec72a0)
    }
}

#undef public_6ec72e8
#undef public_6ec7303
#undef public_6ec731c
