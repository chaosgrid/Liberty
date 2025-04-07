#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45a60);
CLANG_FORWARD_PROC_SYMBOL(public_6b46450);

#define public_6b45a8e _public_6b45a8e

PROC_DECLARE(0x6b45a60, internal_6b45a60, public_6b45a60);
extern "C" NAKED register_t __cdecl internal_6b45a60()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        or byte ptr ds : [esi+0x21], 1
        mov ecx, dword ptr ds : [esi+0x60]
        lea eax, ss:[esp+0xC]
        push eax
        lea edi, ds:[esi+0x58]
        push 1
        push ecx
        mov ecx, edi
        call public_6b46450
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6b45a8e
        xor eax, eax
        pop edi
        mov byte ptr ds : [esi+0x68], al
        pop esi
        ret 4
        public_6b45a8e : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        pop edi
        mov byte ptr ds : [esi+0x68], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b45a60)
    }
}

#undef public_6b45a8e
