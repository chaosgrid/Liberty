#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bea0);
CLANG_FORWARD_PROC_SYMBOL(public_43bfd0);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43bed0 _public_43bed0
#define public_43beef _public_43beef
#define public_43bf1b _public_43bf1b
#define public_43bf20 _public_43bf20
#define public_43bf40 _public_43bf40

PROC_DECLARE(0x43bea0, internal_43bea0, public_43bea0);
extern "C" NAKED register_t __cdecl internal_43bea0()
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
        je public_43bf1b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_43bf1b
        cmp ebx, eax
        jne public_43bf1b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_43beef
        lea esp, ss:[esp]
        public_43bed0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_43bfd0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_43bed0
        public_43beef : nop
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
        public_43bf1b : nop
        cmp ecx, ebx
        je public_43bf40
        nop 
        public_43bf20 : nop
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
        jne public_43bf20
        public_43bf40 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x43bea0)
    }
}

#undef public_43bed0
#undef public_43beef
#undef public_43bf1b
#undef public_43bf20
#undef public_43bf40
