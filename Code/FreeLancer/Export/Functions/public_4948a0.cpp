#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

PROC_DECLARE(0x4948a0, internal_4948a0, public_4948a0);
extern "C" NAKED register_t __cdecl internal_4948a0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        mov edi, ecx
        call public_5a0880
        fld dword ptr ds : [esi]
        fadd dword ptr ds : [public_5d043c]
        add edi, 0x3C8
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        fsub dword ptr ds : [public_5c94f8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], eax
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4948a0)
    }
}
