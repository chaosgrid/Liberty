#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68588 _public_6f68588
#define public_6f68596 _public_6f68596
#define public_6f685bf _public_6f685bf
#define public_6f685dc _public_6f685dc
#define public_6f685ec _public_6f685ec

PROC_DECLARE(0x6f68570, internal_6f68570, public_6f68570);
extern "C" NAKED register_t __cdecl internal_6f68570()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x30
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        push edi
        je public_6f68596
        mov ecx, dword ptr ds : [edx+4]
        public_6f68588 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [edi+4], ecx
        je public_6f685ec
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f68588
        public_6f68596 : nop
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+0x44]
        push 0x38
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], edx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f685bf
        mov edi, eax
        public_6f685bf : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f685dc
        mov ecx, 0xC
        lea esi, ss:[esp+0xC]
        rep movsd
        public_6f685dc : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        inc eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x30
        ret 8
        public_6f685ec : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0xC], ecx
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6f68570)
    }
}

#undef public_6f68588
#undef public_6f68596
#undef public_6f685bf
#undef public_6f685dc
#undef public_6f685ec
