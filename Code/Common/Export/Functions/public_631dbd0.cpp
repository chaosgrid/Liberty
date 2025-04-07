#include "Common-PCH.h"

PROC_DECLARE(0x631dbd0, internal_631dbd0, public_631dbd0);
extern "C" NAKED register_t __cdecl internal_631dbd0()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, dword ptr ds : [public_6399308]
        call esi
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_63997d0]
        fsqrt 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        call esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63997d0]
        fstp qword ptr ss : [esp+0xC]
        call esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, eax
        pop esi
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639c9e0]
        fld st(0)
        fsin 
        fmul dword ptr ss : [esp]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], edx
        fsub dword ptr ss : [esp+0x24]
        fmul qword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fcos 
        mov dword ptr ds : [ecx+4], edx
        fmul dword ptr ss : [esp]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x631dbd0)
    }
}
