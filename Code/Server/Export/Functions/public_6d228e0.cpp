#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228e0);

#define public_6d22923 _public_6d22923
#define public_6d22927 _public_6d22927
#define public_6d2293a _public_6d2293a
#define public_6d2293e _public_6d2293e
#define public_6d22942 _public_6d22942

PROC_DECLARE(0x6d228e0, internal_6d228e0, public_6d228e0);
extern "C" NAKED register_t __cdecl internal_6d228e0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d2293e
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        call public_6d228e0
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        or edx, 0xFFFFFFFF
        cmp esi, edx
        je public_6d22923
        cmp ecx, edx
        je public_6d22923
        add esi, ecx
        mov dword ptr ss : [esp+8], esi
        jmp public_6d22927
        public_6d22923 : nop
        mov dword ptr ss : [esp+8], edx
        public_6d22927 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edx
        mov eax, dword ptr ds : [eax+4]
        je public_6d2293a
        cmp eax, edx
        je public_6d2293a
        add ecx, eax
        jmp public_6d22942
        public_6d2293a : nop
        mov ecx, edx
        jmp public_6d22942
        public_6d2293e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        public_6d22942 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d228e0)
    }
}

#undef public_6d22923
#undef public_6d22927
#undef public_6d2293a
#undef public_6d2293e
#undef public_6d22942
