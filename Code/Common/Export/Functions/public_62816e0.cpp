#include "Common-PCH.h"


#define public_6281707 _public_6281707
#define public_6281728 _public_6281728
#define public_628172b _public_628172b

PROC_DECLARE(0x62816e0, internal_62816e0, public_62816e0);
extern "C" NAKED register_t __cdecl internal_62816e0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+0xA4]
        jne public_6281707
        mov ecx, dword ptr ss : [esp+8]
        public_6281707 : nop
        mov edx, dword ptr ds : [ecx+0xA4]
        test edx, edx
        je public_628172b
        mov eax, dword ptr ds : [eax+0x54]
        cmp byte ptr ds : [eax+0x78], 9
        movsx ecx, byte ptr ds : [ecx+0x78]
        jne public_6281728
        cmp ecx, 0x10
        je public_628172b
        cmp ecx, 9
        je public_628172b
        public_6281728 : nop
        inc dword ptr ds : [esi+8]
        public_628172b : nop
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62816e0)
    }
}

#undef public_6281707
#undef public_6281728
#undef public_628172b
