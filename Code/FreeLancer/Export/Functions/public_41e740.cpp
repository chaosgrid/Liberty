#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x41e740, internal_41e740, public_41e740);
extern "C" NAKED register_t __cdecl internal_41e740()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        push edi
        mov esi, ecx
        push 0x2C
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor edx, edx
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        xor eax, eax
        lea edi, ds:[esi+0x44]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x68], edx
        mov dword ptr ds : [esi+0x64], edx
        mov dword ptr ds : [esi+0x24], edx
        mov ecx, 8
        rep stosd
        pop edi
        mov dword ptr ds : [esi+0x28], edx
        mov byte ptr ds : [esi+0x70], dl
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x41e740)
    }
}
