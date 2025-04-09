#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a210);
CLANG_FORWARD_PROC_SYMBOL(public_51ca80);

PROC_DECLARE(0x51a210, internal_51a210, public_51a210);
extern "C" NAKED register_t __cdecl internal_51a210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_51ca80
        mov dword ptr ds : [esi+0x108], 0x41C80000
        xor eax, eax
        mov dword ptr ds : [esi+0x100], eax
        mov ecx, 0x40A00000
        mov dword ptr ds : [esi+0x104], ecx
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0x110], eax
        mov dword ptr ds : [esi+0x114], eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x11C], eax
        mov dword ptr ds : [esi+0x120], eax
        mov dword ptr ds : [esi+0x124], 0x3F400000
        mov dword ptr ds : [esi+0x128], 0x40000000
        mov dword ptr ds : [esi+0x12C], 0x3FC00000
        mov dword ptr ds : [esi+0x130], ecx
        mov dword ptr ds : [esi], offset public_5dbcc4
        mov dword ptr ds : [esi+0xF8], offset public_5dbcb8
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51a210)
    }
}
