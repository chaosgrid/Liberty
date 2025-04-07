#include "Common-PCH.h"


#define public_630f714 _public_630f714
#define public_630f71d _public_630f71d
#define public_630f731 _public_630f731
#define public_630f734 _public_630f734

PROC_DECLARE(0x630f6f0, internal_630f6f0, public_630f6f0);
extern "C" NAKED register_t __cdecl internal_630f6f0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_630f71d
        mov eax, dword ptr ds : [ecx+0x1440]
        test eax, eax
        je public_630f734
        mov eax, dword ptr ds : [ecx+0x1444]
        mov edx, dword ptr ss : [esp+4]
        cmp edx, eax
        ja public_630f714
        mov eax, edx
        public_630f714 : nop
        mov dword ptr ds : [ecx+0x1448], eax
        ret 4
        public_630f71d : nop
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_630f734
        mov eax, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [esp+4]
        cmp edx, eax
        ja public_630f731
        mov eax, edx
        public_630f731 : nop
        mov dword ptr ds : [ecx+0x20], eax
        public_630f734 : nop
        ret 4
        UNREACHABLE_TRAP(0x630f6f0)
    }
}

#undef public_630f714
#undef public_630f71d
#undef public_630f731
#undef public_630f734
