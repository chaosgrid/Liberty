#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c4270 _public_65c4270
#define public_65c4297 _public_65c4297
#define public_65c42a0 _public_65c42a0
#define public_65c42dd _public_65c42dd

PROC_DECLARE(0x65c4240, internal_65c4240, public_65c4240);
extern "C" NAKED register_t __cdecl internal_65c4240()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea eax, ds:[esi+0x10]
        push eax
        mov dword ptr ds : [esi], offset public_65c74b4
        call dword ptr ds : [public_65c7020]
        mov ecx, dword ptr ds : [esi+0x28]
        push ecx
        call dword ptr ds : [public_65c701c]
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_65c4297
        nop 
        lea esp, ss:[esp]
        public_65c4270 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_65c6a60
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ecx
        jne public_65c4270
        public_65c4297 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_65c42dd
        public_65c42a0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_65c45d0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_65c6a60
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ecx
        jne public_65c42a0
        public_65c42dd : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_65c6a60
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x65c4240)
    }
}

#undef public_65c4270
#undef public_65c4297
#undef public_65c42a0
#undef public_65c42dd
