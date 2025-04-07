#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303450);

PROC_DECLARE(0x6303450, internal_6303450, public_6303450);
extern "C" NAKED register_t __cdecl internal_6303450()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ds : [public_6399308]
        call esi
        sub eax, 0x3FFF
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        call esi
        sub eax, 0x3FFF
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+0xC]
        call esi
        sub eax, 0x3FFF
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, eax
        pop esi
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fdivr dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        fstp st(0)
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6303450)
    }
}
