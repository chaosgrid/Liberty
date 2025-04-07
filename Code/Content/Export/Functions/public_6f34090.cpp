#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);

#define public_6f340cd _public_6f340cd
#define public_6f340d0 _public_6f340d0

PROC_DECLARE(0x6f34090, internal_6f34090, public_6f34090);
extern "C" NAKED register_t __cdecl internal_6f34090()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ds:[esi-0x174]
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], eax
        call public_6eea860
        mov edx, dword ptr ds : [eax+0x48]
        xor eax, eax
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edx
        jne public_6f340cd
        mov byte ptr ds : [esi-0x58], 1
        jmp public_6f340d0
        public_6f340cd : nop
        mov byte ptr ds : [esi-0x58], al
        public_6f340d0 : nop
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x20]
        push 0x1001
        push ecx
        call public_6f24070
        add esp, 0xC
        pop edi
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6f34090)
    }
}

#undef public_6f340cd
#undef public_6f340d0
