#include "ReadFile-PCH.h"


#define public_6b732a2 _public_6b732a2
#define public_6b732a8 _public_6b732a8
#define public_6b732d4 _public_6b732d4
#define public_6b732ff _public_6b732ff
#define public_6b7331a _public_6b7331a
#define public_6b7332b _public_6b7332b
#define public_6b73339 _public_6b73339

PROC_DECLARE(0x6b73280, internal_6b73280, public_6b73280);
extern "C" NAKED register_t __cdecl internal_6b73280()
{
    __asm
    {
        sub esp, 0x104
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x114]
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_6b732a2
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b732a8
        public_6b732a2 : nop
        mov esi, dword ptr ds : [edi+0x238]
        public_6b732a8 : nop
        test esi, esi
        je public_6b73339
        mov eax, dword ptr ds : [edi+0x22C]
        mov ecx, dword ptr ss : [esp+0x118]
        test eax, eax
        je public_6b732d4
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ss : [esp+0x120]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        jmp public_6b7331a
        public_6b732d4 : nop
        mov eax, dword ptr ds : [edi]
        push 0x104
        lea edx, ss:[esp+0x10]
        push ecx
        push edx
        push edi
        call dword ptr ds : [eax+0xA4]
        test eax, eax
        jne public_6b732ff
        mov dword ptr ds : [edi+0x1C], 0xA1
        pop edi
        pop esi
        pop ebx
        add esp, 0x104
        ret 0xC
        public_6b732ff : nop
        mov ecx, dword ptr ds : [edi+0x23C]
        mov edx, dword ptr ss : [esp+0x11C]
        mov eax, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x10]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        public_6b7331a : nop
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_6b7332b
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x1C], eax
        public_6b7332b : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 0x104
        ret 0xC
        public_6b73339 : nop
        mov dword ptr ds : [edi+0x1C], 2
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x104
        ret 0xC
        UNREACHABLE_TRAP(0x6b73280)
    }
}

#undef public_6b732a2
#undef public_6b732a8
#undef public_6b732d4
#undef public_6b732ff
#undef public_6b7331a
#undef public_6b7332b
#undef public_6b73339
