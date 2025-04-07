#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442bf0);
CLANG_FORWARD_PROC_SYMBOL(public_442db0);
CLANG_FORWARD_PROC_SYMBOL(public_443190);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_442c20 _public_442c20
#define public_442c47 _public_442c47
#define public_442c73 _public_442c73
#define public_442c77 _public_442c77
#define public_442c97 _public_442c97

PROC_DECLARE(0x442bf0, internal_442bf0, public_442bf0);
extern "C" NAKED register_t __cdecl internal_442bf0()
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
        je public_442c73
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_442c73
        cmp ebx, eax
        jne public_442c73
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_442c47
        lea esp, ss:[esp]
        public_442c20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_443190
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_4dd9a0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_442c20
        public_442c47 : nop
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
        public_442c73 : nop
        cmp ecx, ebx
        je public_442c97
        public_442c77 : nop
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
        jne public_442c77
        public_442c97 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x442bf0)
    }
}

#undef public_442c20
#undef public_442c47
#undef public_442c73
#undef public_442c77
#undef public_442c97
