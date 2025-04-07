#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362f90);
CLANG_FORWARD_PROC_SYMBOL(public_6369b70);

PROC_DECLARE(0x6369b70, internal_6369b70, public_6369b70);
extern "C" NAKED register_t __cdecl internal_6369b70()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+8], ecx
        push ecx
        lea ecx, ds:[eax+0x64]
        fadd dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [eax+0x48]
        fmul dword ptr ds : [eax+0x4C]
        fadd dword ptr ds : [eax+0x54]
        fadd dword ptr ds : [public_63a58cc]
        fstp dword ptr ss : [esp]
        push esi
        call public_6362f90
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0xC], edx
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6369b70)
    }
}
