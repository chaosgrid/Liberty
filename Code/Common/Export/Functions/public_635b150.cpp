#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b150);

PROC_DECLARE(0x635b150, internal_635b150, public_635b150);
extern "C" NAKED register_t __cdecl internal_635b150()
{
    __asm
    {
        sub esp, 0x10
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [edx]
        push edi
        mov edi, ecx
        and edi, 0xC
        mov edi, dword ptr ds : [edi+public_63ee4e0]
        mov ecx, dword ptr ds : [edi+ecx]
        and eax, 0xFFFF
        shl eax, 4
        and ecx, 0xFFFF
        add eax, esi
        add eax, edx
        shl ecx, 4
        add ecx, esi
        fld dword ptr ds : [ecx+edx]
        add ecx, edx
        fsub dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ecx+4]
        pop edi
        fsub dword ptr ds : [eax+4]
        pop esi
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edx]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+8]
        fld st(3)
        fmul st, st(1)
        fld st(5)
        fmul st, st(3)
        faddp 
        fxch st(3)
        fmul st, st(6)
        faddp st(3), st
        fxch st(2)
        fchs 
        fstp dword ptr ds : [eax]
        fxch 
        fstp st(0)
        fstp st(0)
        fmul dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax+4]
        fstp st(0)
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x635b150)
    }
}
