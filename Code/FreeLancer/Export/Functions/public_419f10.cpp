#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419100);
CLANG_FORWARD_PROC_SYMBOL(public_419f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x419f10, internal_419f10, public_419f10);
extern "C" NAKED register_t __cdecl internal_419f10()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_419100
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x419f10)
    }
}
