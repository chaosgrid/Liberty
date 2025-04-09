#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421050);

#define public_4c91e0 _public_4c91e0
#define public_4c91f0 _public_4c91f0
#define public_4c91f5 _public_4c91f5
#define public_4c91fc _public_4c91fc

PROC_DECLARE(0x4c91d0, internal_4c91d0, public_4c91d0);
extern "C" NAKED register_t __cdecl internal_4c91d0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_4c91fc
        push esi
        nop 
        lea esp, ss:[esp]
        public_4c91e0 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_4c91f0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_4c91f5
        public_4c91f0 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_4c91f5 : nop
        test esi, esi
        mov ecx, esi
        jne public_4c91e0
        pop esi
        public_4c91fc : nop
        lea eax, ds:[edi+0x3C]
        push eax
        lea ecx, ds:[edi+0x7C]
        call public_421050
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4c91d0)
    }
}

#undef public_4c91e0
#undef public_4c91f0
#undef public_4c91f5
#undef public_4c91fc
