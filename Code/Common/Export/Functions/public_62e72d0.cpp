#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e72d0);

#define public_62e73f4 _public_62e73f4

PROC_DECLARE(0x62e72d0, internal_62e72d0, public_62e72d0);
extern "C" NAKED register_t __cdecl internal_62e72d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_62e73f4
        fld dword ptr ds : [eax+0x1770]
        mov eax, 0x3F800000
        fmul dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [ecx+0x30], eax
        fstp dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+0x1774]
        fmul dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [ecx+0x40], eax
        fstp dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+0x1798]
        fmul dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [ecx+0x50], eax
        fstp dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x1784]
        fld dword ptr ds : [eax+0x1780]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0x5C]
        fstp dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x1794]
        fld dword ptr ds : [eax+0x1790]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0x6C]
        fstp dword ptr ds : [ecx+0x70]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x178C]
        fld dword ptr ds : [eax+0x1788]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0x7C]
        fstp dword ptr ds : [ecx+0x80]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x17A8]
        fld dword ptr ds : [eax+0x17A4]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0x8C]
        fstp dword ptr ds : [ecx+0x90]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x177C]
        fld dword ptr ds : [eax+0x1778]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0x9C]
        fstp dword ptr ds : [ecx+0xA0]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x17A0]
        fld dword ptr ds : [eax+0x179C]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0xAC]
        fstp dword ptr ds : [ecx+0xB0]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x17D8]
        fld dword ptr ds : [eax+0x17D4]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0xBC]
        fstp dword ptr ds : [ecx+0xC0]
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+0x17E0]
        fld dword ptr ds : [eax+0x17DC]
        fmul dword ptr ds : [ecx+0x20]
        fstp dword ptr ds : [ecx+0xCC]
        fstp dword ptr ds : [ecx+0xD0]
        public_62e73f4 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62e72d0)
    }
}

#undef public_62e73f4
