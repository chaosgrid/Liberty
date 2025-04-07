#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x631b930, internal_631b930, public_631b930);
extern "C" NAKED register_t __cdecl internal_631b930()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x10]
        push edi
        call public_6334430
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0xC], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], edx
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0xC], cl
        mov edx, dword ptr ds : [eax+0xC]
        push edx
        push edi
        call public_6334400
        add esp, 0xC
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631b930)
    }
}
