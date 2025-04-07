#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62218f0);

#define public_621e7f4 _public_621e7f4
#define public_621e80f _public_621e80f
#define public_621e816 _public_621e816
#define public_621e851 _public_621e851
#define public_621e860 _public_621e860
#define public_621e86d _public_621e86d
#define public_621e879 _public_621e879

PROC_DECLARE(0x621e7d0, internal_621e7d0, public_621e7d0);
extern "C" NAKED register_t __cdecl internal_621e7d0()
{
    __asm
    {
        sub esp, 0x10
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        test edi, edi
        je public_621e816
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edx
        je public_621e816
        mov ebx, dword ptr ds : [ecx+0xC]
        public_621e7f4 : nop
        cmp ebx, dword ptr ds : [eax+4]
        jne public_621e80f
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, dword ptr ds : [eax+0xC]
        jne public_621e80f
        mov ebp, dword ptr ds : [ecx+8]
        cmp ebp, dword ptr ds : [eax]
        jne public_621e80f
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, dword ptr ds : [eax+8]
        je public_621e879
        public_621e80f : nop
        add eax, 0x10
        cmp eax, edx
        jne public_621e7f4
        public_621e816 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[esi+0x14]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        call public_62218f0
        test edi, edi
        jne public_621e851
        mov eax, dword ptr ds : [esi+0x44]
        inc eax
        mov dword ptr ds : [esi+0x44], eax
        mov edi, eax
        public_621e851 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx-0xC], edi
        mov eax, dword ptr ds : [esi+0x44]
        cmp eax, edi
        jg public_621e860
        mov eax, edi
        public_621e860 : nop
        mov dword ptr ds : [esi+0x44], eax
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_621e86d
        mov dword ptr ds : [eax], edi
        public_621e86d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 0x10
        public_621e879 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x621e7d0)
    }
}

#undef public_621e7f4
#undef public_621e80f
#undef public_621e816
#undef public_621e851
#undef public_621e860
#undef public_621e86d
#undef public_621e879
