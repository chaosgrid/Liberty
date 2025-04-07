#include "Server-PCH.h"

PROC_DECLARE(0x6d010a0, internal_6d010a0, public_6d010a0);
extern "C" NAKED register_t __cdecl internal_6d010a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0x503
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6d64464]
        add esp, 8
        push 1
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_6d64188]
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d010a0)
    }
}
