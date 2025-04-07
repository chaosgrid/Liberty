#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633d150);

PROC_DECLARE(0x633d150, internal_633d150, public_633d150);
extern "C" NAKED register_t __cdecl internal_633d150()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_639c13c]
        mov eax, ecx
        fld dword ptr ds : [edx+8]
        lea ecx, ds:[eax+4]
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx]
        fld st(3)
        fsin 
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x14]
        fdivp 
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcos 
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x633d150)
    }
}
