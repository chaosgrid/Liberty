#include "Common-PCH.h"


#define public_62b47b0 _public_62b47b0
#define public_62b47df _public_62b47df
#define public_62b47e1 _public_62b47e1
#define public_62b47fc _public_62b47fc

PROC_DECLARE(0x62b4790, internal_62b4790, public_62b4790);
extern "C" NAKED register_t __cdecl internal_62b4790()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x1D4]
        cmp esi, dword ptr ds : [edi+0x1D8]
        mov dword ptr ss : [esp+8], 0x4CBEBC20
        je public_62b47fc
        nop 
        lea esp, ss:[esp]
        public_62b47b0 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b47e1
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b47e1
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0x3F800000
        call dword ptr ds : [eax+0xD8]
        fld dword ptr ss : [esp+8]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b47df
        fstp dword ptr ss : [esp+8]
        jmp public_62b47e1
        public_62b47df : nop
        fstp st(0)
        public_62b47e1 : nop
        mov eax, dword ptr ds : [edi+0x1D8]
        add esi, 8
        cmp esi, eax
        jne public_62b47b0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi+0x1CC], ecx
        pop edi
        pop esi
        pop ecx
        ret 
        public_62b47fc : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi+0x1CC], edx
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62b4790)
    }
}

#undef public_62b47b0
#undef public_62b47df
#undef public_62b47e1
#undef public_62b47fc
