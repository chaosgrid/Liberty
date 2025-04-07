#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_627f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_627f370);
CLANG_FORWARD_PROC_SYMBOL(public_627f620);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627f100 _public_627f100
#define public_627f127 _public_627f127
#define public_627f153 _public_627f153
#define public_627f157 _public_627f157
#define public_627f177 _public_627f177

PROC_DECLARE(0x627f0d0, internal_627f0d0, public_627f0d0);
extern "C" NAKED register_t __cdecl internal_627f0d0()
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
        je public_627f153
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_627f153
        cmp ebx, eax
        jne public_627f153
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_627f127
        lea esp, ss:[esp]
        public_627f100 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_627f370
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_627dbb0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_627f100
        public_627f127 : nop
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
        public_627f153 : nop
        cmp ecx, ebx
        je public_627f177
        public_627f157 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_627f620
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_627ecf0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_627f157
        public_627f177 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x627f0d0)
    }
}

#undef public_627f100
#undef public_627f127
#undef public_627f153
#undef public_627f157
#undef public_627f177
