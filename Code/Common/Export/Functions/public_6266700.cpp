#include "Common-PCH.h"


#define public_6266717 _public_6266717
#define public_6266760 _public_6266760
#define public_6266777 _public_6266777
#define public_6266779 _public_6266779
#define public_6266781 _public_6266781

PROC_DECLARE(0x6266700, internal_6266700, public_6266700);
extern "C" NAKED register_t __cdecl internal_6266700()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_6266777
        public_6266717 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, esi
        jne public_6266717
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_6266779
        call dword ptr ds : [public_6399308]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_6399408]
        je public_6266777
        nop 
        lea esp, ss:[esp]
        public_6266760 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0xC]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6266781
        add ecx, 8
        cmp ecx, esi
        jne public_6266760
        public_6266777 : nop
        fstp st(0)
        public_6266779 : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        public_6266781 : nop
        pop edi
        fstp st(0)
        mov eax, ecx
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6266700)
    }
}

#undef public_6266717
#undef public_6266760
#undef public_6266777
#undef public_6266779
#undef public_6266781
