#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47a30);

#define public_6f47a9e _public_6f47a9e
#define public_6f47acc _public_6f47acc
#define public_6f47ad7 _public_6f47ad7

PROC_DECLARE(0x6f47a30, internal_6f47a30, public_6f47a30);
extern "C" NAKED register_t __cdecl internal_6f47a30()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push esi
        push edi
        mov edi, ecx
        je public_6f47ad7
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 3
        je public_6f47a9e
        cmp esi, 5
        je public_6f47a9e
        cmp esi, 7
        je public_6f47a9e
        cmp esi, 9
        je public_6f47a9e
        cmp esi, 0xA
        je public_6f47a9e
        cmp esi, 0xC
        je public_6f47a9e
        cmp esi, 0xD
        je public_6f47a9e
        cmp esi, 0xF
        je public_6f47a9e
        cmp esi, 0x10
        je public_6f47a9e
        cmp esi, 0x12
        je public_6f47a9e
        cmp esi, 0x13
        je public_6f47a9e
        cmp esi, 0x16
        je public_6f47a9e
        cmp esi, 0x18
        je public_6f47a9e
        cmp esi, 0x19
        je public_6f47a9e
        cmp esi, 0x1B
        je public_6f47a9e
        cmp esi, 0x1C
        je public_6f47a9e
        cmp esi, 0x1F
        je public_6f47a9e
        cmp esi, 0x2A
        jne public_6f47acc
        public_6f47a9e : nop
        mov eax, dword ptr ds : [edi+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb349c]
        mov eax, dword ptr ss : [esp+0x18]
        inc eax
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call dword ptr ds : [public_6fb3518]
        add esp, 0x10
        public_6f47acc : nop
        mov dword ptr ds : [edi+0xDC], esi
        pop edi
        pop esi
        ret 8
        public_6f47ad7 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+0xDC], ecx
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f47a30)
    }
}

#undef public_6f47a9e
#undef public_6f47acc
#undef public_6f47ad7
