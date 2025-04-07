#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bfb260);

#define public_6bfa8ce _public_6bfa8ce

PROC_DECLARE(0x6bfa8a0, internal_6bfa8a0, public_6bfa8a0);
extern "C" NAKED register_t __cdecl internal_6bfa8a0()
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
        call public_6bfb260
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6bfa8ce
        xor eax, eax
        pop edi
        mov byte ptr ds : [esi+0x68], al
        pop esi
        ret 4
        public_6bfa8ce : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        pop edi
        mov byte ptr ds : [esi+0x68], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bfa8a0)
    }
}

#undef public_6bfa8ce
