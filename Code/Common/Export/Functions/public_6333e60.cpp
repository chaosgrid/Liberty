#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

PROC_DECLARE(0x6333e60, internal_6333e60, public_6333e60);
extern "C" NAKED register_t __cdecl internal_6333e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a818]
        push esi
        mov esi, eax
        and esi, 3
        shl esi, 5
        add esi, offset public_640a780
        inc eax
        mov dword ptr ds : [public_658a818], eax
        push 0x10
        lea eax, ds:[esi+2]
        mov byte ptr ds : [esi], 0x30
        mov byte ptr ds : [esi+1], 0x78
        mov ecx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [public_639927c]
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6333e60)
    }
}
