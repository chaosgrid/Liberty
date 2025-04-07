#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bcf70);

#define public_62bcf80 _public_62bcf80
#define public_62bcf99 _public_62bcf99

PROC_DECLARE(0x62bcf70, internal_62bcf70, public_62bcf70);
extern "C" NAKED register_t __cdecl internal_62bcf70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, esi
        lea esp, ss:[esp]
        public_62bcf80 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jp public_62bcf99
        mov dword ptr ds : [esi], edx
        mov esi, ecx
        jmp public_62bcf80
        public_62bcf99 : nop
        mov dword ptr ds : [esi], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62bcf70)
    }
}

#undef public_62bcf80
#undef public_62bcf99
