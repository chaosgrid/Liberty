#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bdf0);
CLANG_FORWARD_PROC_SYMBOL(public_43bf90);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43be20 _public_43be20
#define public_43be3f _public_43be3f
#define public_43be6b _public_43be6b
#define public_43be70 _public_43be70
#define public_43be90 _public_43be90

PROC_DECLARE(0x43bdf0, internal_43bdf0, public_43bdf0);
extern "C" NAKED register_t __cdecl internal_43bdf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_43be6b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_43be6b
        cmp ebx, eax
        jne public_43be6b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_43be3f
        lea esp, ss:[esp]
        public_43be20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_43bf90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_43be20
        public_43be3f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_43be6b : nop
        cmp ecx, ebx
        je public_43be90
        nop 
        public_43be70 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_52afa0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46c8c0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_43be70
        public_43be90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x43bdf0)
    }
}

#undef public_43be20
#undef public_43be3f
#undef public_43be6b
#undef public_43be70
#undef public_43be90
