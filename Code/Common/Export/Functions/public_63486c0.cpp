#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348660);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);

PROC_DECLARE(0x63486c0, internal_63486c0, public_63486c0);
extern "C" NAKED register_t __cdecl internal_63486c0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_6348660
        xor eax, eax
        mov edi, esi
        mov ecx, 0x16
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], 1
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov eax, 0x3C23D70A
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x34], 0x3CF5C28F
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        pop edi
        mov dword ptr ds : [esi+0x14], 0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63486c0)
    }
}
