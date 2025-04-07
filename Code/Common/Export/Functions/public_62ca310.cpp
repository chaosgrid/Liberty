#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);

PROC_DECLARE(0x62ca310, internal_62ca310, public_62ca310);
extern "C" NAKED register_t __cdecl internal_62ca310()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x70]
        push 0
        mov ecx, edi
        call public_62d4e50
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xE8]
        lea ecx, ds:[esi+0xE8]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x1A8]
        lea ecx, ds:[esi+0x1A8]
        call dword ptr ds : [eax+0x10]
        pop edi
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62ca310)
    }
}
