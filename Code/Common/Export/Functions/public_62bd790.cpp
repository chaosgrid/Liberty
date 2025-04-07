#include "Common-PCH.h"


#define public_62bd7a0 _public_62bd7a0
#define public_62bd7ac _public_62bd7ac
#define public_62bd7ae _public_62bd7ae
#define public_62bd7c0 _public_62bd7c0
#define public_62bd7cf _public_62bd7cf
#define public_62bd7d3 _public_62bd7d3
#define public_62bd7d7 _public_62bd7d7

PROC_DECLARE(0x62bd790, internal_62bd790, public_62bd790);
extern "C" NAKED register_t __cdecl internal_62bd790()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        push esi
        je public_62bd7ac
        mov si, word ptr ss : [esp+8]
        public_62bd7a0 : nop
        cmp word ptr ds : [eax], si
        je public_62bd7d7
        add eax, 2
        cmp eax, edx
        jne public_62bd7a0
        public_62bd7ac : nop
        mov esi, edx
        public_62bd7ae : nop
        cmp esi, edx
        je public_62bd7d3
        lea eax, ds:[esi+2]
        cmp eax, edx
        je public_62bd7cf
        sub esi, eax
        push edi
        lea esp, ss:[esp]
        public_62bd7c0 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [esi+eax], di
        add eax, 2
        cmp eax, edx
        jne public_62bd7c0
        pop edi
        public_62bd7cf : nop
        add dword ptr ds : [ecx+0x1C], 0xFFFFFFFE
        public_62bd7d3 : nop
        pop esi
        ret 4
        public_62bd7d7 : nop
        mov esi, eax
        jmp public_62bd7ae
        UNREACHABLE_TRAP(0x62bd790)
    }
}

#undef public_62bd7a0
#undef public_62bd7ac
#undef public_62bd7ae
#undef public_62bd7c0
#undef public_62bd7cf
#undef public_62bd7d3
#undef public_62bd7d7
