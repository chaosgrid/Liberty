#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307b40);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6307be5 _public_6307be5
#define public_6307c0b _public_6307c0b
#define public_6307c31 _public_6307c31
#define public_6307c81 _public_6307c81

PROC_DECLARE(0x6307b40, internal_6307b40, public_6307b40);
extern "C" NAKED register_t __cdecl internal_6307b40()
{
    __asm
    {
        sub esp, 0x94
        fld dword ptr ss : [esp+0xCC]
        fsub dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0xD0]
        fsub dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0xD4]
        fsub dword ptr ss : [esp+0xA4]
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ss : [esp+0xFC]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xFC]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xFC]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp]
        mov eax, dword ptr ss : [esp]
        fxch 
        fadd dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        fstp dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0x44], ecx
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x48], edx
        jne public_6307be5
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307be5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xD8]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        jne public_6307c0b
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307c0b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA8]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        jne public_6307c31
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307c31 : nop
        mov edx, dword ptr ss : [esp+0xFC]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        jne public_6307c81
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307c81 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, 9
        lea esi, ss:[esp+0x78]
        lea edi, ss:[esp+0x54]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+0x48]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x6307b40)
    }
}

#undef public_6307be5
#undef public_6307c0b
#undef public_6307c31
#undef public_6307c81
