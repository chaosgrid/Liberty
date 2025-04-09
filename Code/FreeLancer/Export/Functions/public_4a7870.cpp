#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a7870);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4a7870, internal_4a7870, public_4a7870);
extern "C" NAKED register_t __cdecl internal_4a7870()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_5d4794
        mov dword ptr ds : [esi+0x7C], offset public_5d4788
        xor edi, edi
        mov dword ptr ds : [public_6721bc], edi
        mov eax, dword ptr ds : [esi+0x410]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x410], edi
        mov dword ptr ds : [esi+0x414], edi
        mov dword ptr ds : [esi+0x418], edi
        pop edi
        mov ecx, esi
        pop esi
        jmp public_59fa50
        UNREACHABLE_TRAP(0x4a7870)
    }
}
