#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442db0);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5947f0);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_594e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_594820 _public_594820
#define public_594847 _public_594847
#define public_594873 _public_594873
#define public_594877 _public_594877
#define public_594897 _public_594897

PROC_DECLARE(0x5947f0, internal_5947f0, public_5947f0);
extern "C" NAKED register_t __cdecl internal_5947f0()
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
        je public_594873
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_594873
        cmp ebx, eax
        jne public_594873
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_594847
        lea esp, ss:[esp]
        public_594820 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_594e30
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_4dd9a0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_594820
        public_594847 : nop
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
        public_594873 : nop
        cmp ecx, ebx
        je public_594897
        public_594877 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_5948b0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_442db0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_594877
        public_594897 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5947f0)
    }
}

#undef public_594820
#undef public_594847
#undef public_594873
#undef public_594877
#undef public_594897
