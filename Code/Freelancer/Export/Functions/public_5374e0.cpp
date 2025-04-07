#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5374e0);

PROC_DECLARE(0x5374e0, internal_5374e0, public_5374e0);
extern "C" NAKED register_t __cdecl internal_5374e0()
{
    __asm
    {
        push esi
        push 0xFFFFFFFF
        mov esi, ecx
        call public_410ca0
        mov dword ptr ds : [esi+0xD0], 1
        xor eax, eax
        mov dword ptr ds : [esi+0xDC], eax
        mov dword ptr ds : [esi+0xD4], eax
        mov dword ptr ds : [esi+0xD8], eax
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xE4], 0xBF800000
        mov dword ptr ds : [esi+0xE0], 0xFFFFFFFF
        mov dword ptr ds : [esi+0xEC], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10C], eax
        mov dword ptr ds : [esi+0x108], eax
        mov dword ptr ds : [esi+0x104], eax
        mov dword ptr ds : [esi+0xFC], eax
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi+0xF4], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x110], ecx
        mov dword ptr ds : [esi+0x100], ecx
        mov dword ptr ds : [esi+0xF0], ecx
        mov dword ptr ds : [esi+0x11C], eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x114], eax
        mov dword ptr ds : [esi+0x120], eax
        mov dword ptr ds : [esi+0x124], eax
        mov dword ptr ds : [esi+0x128], eax
        mov dword ptr ds : [esi], offset public_5de69c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5374e0)
    }
}
