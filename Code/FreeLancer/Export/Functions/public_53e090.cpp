#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53e0da _public_53e0da
#define public_53e0f9 _public_53e0f9

PROC_DECLARE(0x53e090, internal_53e090, public_53e090);
extern "C" NAKED register_t __cdecl internal_53e090()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_5416c0
        mov ecx, eax
        add esp, 8
        test ecx, ecx
        je public_53e0f9
        mov al, byte ptr ds : [esi+0x18]
        test al, al
        je public_53e0da
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0x14]
        push edx
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        xor edx, edx
        mov dx, word ptr ds : [esi+0xC]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi]
        push edx
        call dword ptr ds : [eax+0x1C0]
        pop esi
        ret 8
        public_53e0da : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0xC]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C4]
        public_53e0f9 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53e090)
    }
}

#undef public_53e0da
#undef public_53e0f9
