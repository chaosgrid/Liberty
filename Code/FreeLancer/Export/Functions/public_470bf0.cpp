#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46fa50);
CLANG_FORWARD_PROC_SYMBOL(public_470bf0);
CLANG_FORWARD_PROC_SYMBOL(public_470fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4713b0);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_470c18 _public_470c18
#define public_470c3f _public_470c3f
#define public_470c61 _public_470c61
#define public_470c65 _public_470c65
#define public_470c85 _public_470c85

PROC_DECLARE(0x470bf0, internal_470bf0, public_470bf0);
extern "C" NAKED register_t __cdecl internal_470bf0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_470c61
        mov ecx, eax
        cmp eax, ecx
        jne public_470c61
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_470c3f
        public_470c18 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4713b0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_46fa50
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_470c18
        public_470c3f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_470c61 : nop
        cmp eax, edi
        je public_470c85
        public_470c65 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_536020
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_470fd0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_470c65
        public_470c85 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x470bf0)
    }
}

#undef public_470c18
#undef public_470c3f
#undef public_470c61
#undef public_470c65
#undef public_470c85
