#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_533e10);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);

PROC_DECLARE(0x547850, internal_547850, public_547850);
extern "C" NAKED register_t __cdecl internal_547850()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_533e10
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ds:[esi+0x3C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        call public_5553b0
        add esp, 0xC
        mov dword ptr ds : [esi+0x38], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x547850)
    }
}
