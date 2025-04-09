#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_48e600);

PROC_DECLARE(0x48e600, internal_48e600, public_48e600);
extern "C" NAKED register_t __cdecl internal_48e600()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_420d40
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], offset public_5d2efc
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x48e600)
    }
}
