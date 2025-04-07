#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x631b8e0, internal_631b8e0, public_631b8e0);
extern "C" NAKED register_t __cdecl internal_631b8e0()
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
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov byte ptr ds : [esi+0xC], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], ecx
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ds : [esi+0xC], dl
        mov eax, dword ptr ds : [eax+0x10]
        push eax
        push edi
        call public_6334400
        add esp, 0xC
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631b8e0)
    }
}
