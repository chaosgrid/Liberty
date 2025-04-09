#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fd0);

PROC_DECLARE(0x4c91a0, internal_4c91a0, public_4c91a0);
extern "C" NAKED register_t __cdecl internal_4c91a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        lea edx, ds:[ecx+0x60]
        mov esi, eax
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], edi
        mov esi, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [edx+8], esi
        pop esi
        mov dword ptr ss : [esp+4], eax
        add ecx, 0x7C
        jmp public_420fd0
        UNREACHABLE_TRAP(0x4c91a0)
    }
}
