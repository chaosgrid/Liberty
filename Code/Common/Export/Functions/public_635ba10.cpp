#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ba10);

PROC_DECLARE(0x635ba10, internal_635ba10, public_635ba10);
extern "C" NAKED register_t __cdecl internal_635ba10()
{
    __asm
    {
        sub esp, 0x1C
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ds : [edx]
        push edi
        mov edi, ecx
        and edi, 0xC
        mov edi, dword ptr ds : [edi+public_63ee4e0]
        mov ecx, dword ptr ds : [edi+ecx]
        and eax, 0xFFFF
        and ecx, 0xFFFF
        shl eax, 4
        shl ecx, 4
        add eax, esi
        fld dword ptr ds : [eax+edx]
        add eax, edx
        add ecx, esi
        fld dword ptr ds : [ecx+edx]
        add ecx, edx
        fsub st, st(1)
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], edx
        fld dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edx]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fld dword ptr ds : [edx+4]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+8]
        fld st(1)
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+8]
        fsubp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        pop edi
        pop esi
        fdivr dword ptr ds : [public_63a53d0]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fmulp 
        fstp st(2)
        fstp st(0)
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x635ba10)
    }
}
