#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63470e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

PROC_DECLARE(0x63470e0, internal_63470e0, public_63470e0);
extern "C" NAKED register_t __cdecl internal_63470e0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov edx, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+4], ecx
        fadd dword ptr ss : [esp+4]
        fld st(0)
        fld st(0)
        call public_6391dae
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fxch 
        mov dword ptr ds : [esi+0x160], eax
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x164], ecx
        fstp st(0)
        fld st(0)
        call public_6391dae
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fxch 
        mov dword ptr ds : [esi+0x168], edx
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x16C], eax
        fstp st(0)
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63470e0)
    }
}
