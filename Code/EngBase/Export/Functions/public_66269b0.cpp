#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);

#define public_66269d6 _public_66269d6
#define public_66269fa _public_66269fa
#define public_6626a0e _public_6626a0e
#define public_6626a19 _public_6626a19
#define public_6626a1f _public_6626a1f

PROC_DECLARE(0x66269b0, internal_66269b0, public_66269b0);
extern "C" NAKED register_t __cdecl internal_66269b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [esi+0x2C]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+8], ecx
        je public_66269d6
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jne public_66269d6
        inc dword ptr ds : [esi+0xC]
        jmp public_66269fa
        public_66269d6 : nop
        lea edx, ss:[esp+0xC]
        lea eax, ss:[esp+8]
        push edx
        push eax
        lea ecx, ds:[esi+0x10]
        call public_6612e70
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        je public_6626a19
        mov dword ptr ds : [esi+0x28], eax
        mov byte ptr ds : [esi+0x2C], 1
        public_66269fa : nop
        cmp eax, dword ptr ds : [esi+0x14]
        je public_6626a19
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6626a19
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx]
        public_6626a0e : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6626a1f
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6626a0e
        public_6626a19 : nop
        xor eax, eax
        pop esi
        ret 0xC
        public_6626a1f : nop
        mov eax, dword ptr ds : [eax+0xC]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66269b0)
    }
}

#undef public_66269d6
#undef public_66269fa
#undef public_6626a0e
#undef public_6626a19
#undef public_6626a1f
