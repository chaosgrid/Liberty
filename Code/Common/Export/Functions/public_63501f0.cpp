#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63501f0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);

PROC_DECLARE(0x63501f0, internal_63501f0, public_63501f0);
extern "C" NAKED register_t __cdecl internal_63501f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xFFD7FFFF
        push edi
        or eax, 0x140000
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [esi+0x28]
        fld dword ptr ds : [eax+0x5C]
        lea edi, ds:[esi+0x18]
        fadd dword ptr ss : [esp+0x10]
        add eax, 0x44
        push ecx
        lea ecx, ds:[eax+0x20]
        fstp dword ptr ss : [esp]
        push edi
        call public_6362f90
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [esi+0x44]
        fld dword ptr ds : [eax+0x5C]
        add esi, 0x34
        fadd dword ptr ss : [esp+0x14]
        add eax, 0x44
        push ecx
        lea ecx, ds:[eax+0x20]
        fstp dword ptr ss : [esp]
        push esi
        call public_6362f90
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63501f0)
    }
}
