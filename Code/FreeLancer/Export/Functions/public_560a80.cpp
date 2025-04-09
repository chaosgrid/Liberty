#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_560a80);

PROC_DECLARE(0x560a80, internal_560a80, public_560a80);
extern "C" NAKED register_t __cdecl internal_560a80()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        push esi
        lea esi, ss:[esp+4]
        push esi
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        test ecx, ecx
        sete al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x560a80)
    }
}
