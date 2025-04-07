#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346cf0);

PROC_DECLARE(0x6346cf0, internal_6346cf0, public_6346cf0);
extern "C" NAKED register_t __cdecl internal_6346cf0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0x3C]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [eax+8], edx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+0x40]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x6346cf0)
    }
}
