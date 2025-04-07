#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c3a0);
CLANG_FORWARD_PROC_SYMBOL(public_632c420);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);

#define public_6324f90 _public_6324f90
#define public_6324fce _public_6324fce
#define public_6324fee _public_6324fee
#define public_6325007 _public_6325007
#define public_6325019 _public_6325019
#define public_6325021 _public_6325021
#define public_6325046 _public_6325046
#define public_6325058 _public_6325058

PROC_DECLARE(0x6324f60, internal_6324f60, public_6324f60);
extern "C" NAKED register_t __cdecl internal_6324f60()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ebp
        lea edx, ds:[ecx+4]
        lea ebx, ds:[eax+4]
        cmp ebx, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6324fee
        mov edi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ebp, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x10], ebp
        je public_6324fce
        mov edi, edi
        public_6324f90 : nop
        cmp esi, ebp
        je public_6324fce
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        lea edx, ds:[esi+0x18]
        mov ebp, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x18]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6324f90
        public_6324fce : nop
        push edi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_62728a0
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call public_632c3a0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        public_6324fee : nop
        lea edx, ds:[ecx+0x10]
        lea ebx, ds:[eax+0x10]
        cmp ebx, edx
        je public_6325058
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ebp, dword ptr ds : [edx+4]
        mov edi, dword ptr ss : [ebp]
        je public_6325019
        public_6325007 : nop
        cmp edi, ebp
        je public_6325019
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edi, dword ptr ds : [edi]
        jne public_6325007
        public_6325019 : nop
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6325046
        public_6325021 : nop
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_6271cc0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6325021
        public_6325046 : nop
        push ebp
        push edi
        push esi
        mov ecx, ebx
        call public_632c420
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        public_6325058 : nop
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x24], edx
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x2C], edx
        mov edx, dword ptr ds : [ecx+0x30]
        pop edi
        mov dword ptr ds : [eax+0x30], edx
        mov edx, dword ptr ds : [ecx+0x34]
        pop esi
        mov dword ptr ds : [eax+0x34], edx
        mov ecx, dword ptr ds : [ecx+0x38]
        pop ebp
        mov dword ptr ds : [eax+0x38], ecx
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6324f60)
    }
}

#undef public_6324f90
#undef public_6324fce
#undef public_6324fee
#undef public_6325007
#undef public_6325019
#undef public_6325021
#undef public_6325046
#undef public_6325058
