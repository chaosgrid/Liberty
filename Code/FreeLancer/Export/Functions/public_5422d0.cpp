#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5422d0, internal_5422d0, public_5422d0);
extern "C" NAKED register_t __cdecl internal_5422d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_678ae0]
        and eax, 0xFDFF
        neg eax
        sbb eax, eax
        and eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x5422d0)
    }
}
