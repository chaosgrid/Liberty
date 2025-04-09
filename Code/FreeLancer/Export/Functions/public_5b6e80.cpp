#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_5adba0);
CLANG_FORWARD_PROC_SYMBOL(public_5adf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b6e80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5b6eb0 _public_5b6eb0
#define public_5b6ed7 _public_5b6ed7
#define public_5b6f03 _public_5b6f03
#define public_5b6f07 _public_5b6f07
#define public_5b6f27 _public_5b6f27

PROC_DECLARE(0x5b6e80, internal_5b6e80, public_5b6e80);
extern "C" NAKED register_t __cdecl internal_5b6e80()
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
        je public_5b6f03
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_5b6f03
        cmp ebx, eax
        jne public_5b6f03
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5b6ed7
        lea esp, ss:[esp]
        public_5b6eb0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5adf80
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_487c30
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5b6eb0
        public_5b6ed7 : nop
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
        public_5b6f03 : nop
        cmp ecx, ebx
        je public_5b6f27
        public_5b6f07 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_531930
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_5adba0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_5b6f07
        public_5b6f27 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5b6e80)
    }
}

#undef public_5b6eb0
#undef public_5b6ed7
#undef public_5b6f03
#undef public_5b6f07
#undef public_5b6f27
