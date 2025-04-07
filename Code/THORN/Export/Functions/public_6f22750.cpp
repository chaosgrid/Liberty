#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f213d0);

#define public_6f22762 _public_6f22762
#define public_6f2277b _public_6f2277b

PROC_DECLARE(0x6f22750, internal_6f22750, public_6f22750);
extern "C" NAKED register_t __cdecl internal_6f22750()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x54]
        push esi
        mov esi, dword ptr ds : [ecx+0x58]
        cmp edx, esi
        push edi
        jae public_6f2277b
        mov eax, dword ptr ds : [ecx+0x38]
        lea edi, ds:[eax+edx*4]
        public_6f22762 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        je public_6f2277b
        cmp esi, edx
        je public_6f2277b
        inc edx
        add edi, 4
        cmp edx, esi
        jb public_6f22762
        public_6f2277b : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[edx+edx*2+6]
        lea esi, ds:[edx+edx*2]
        lea esi, ds:[eax+esi*4]
        lea edi, ds:[eax+edi*4]
        push edi
        lea edx, ds:[edx+edx*2+3]
        lea eax, ds:[eax+edx*4]
        push eax
        push esi
        add esi, 0xFFFFFFF4
        push esi
        call public_6f213d0
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f22750)
    }
}

#undef public_6f22762
#undef public_6f2277b
