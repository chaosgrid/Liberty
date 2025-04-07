#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);

#define public_6f3cbd0 _public_6f3cbd0
#define public_6f3cbda _public_6f3cbda
#define public_6f3cbde _public_6f3cbde
#define public_6f3cbe3 _public_6f3cbe3
#define public_6f3cc04 _public_6f3cc04

PROC_DECLARE(0x6f3cbb0, internal_6f3cbb0, public_6f3cbb0);
extern "C" NAKED register_t __cdecl internal_6f3cbb0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_6f3cbe3
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6f3cbd0 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_6f3cbda
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f3cbde
        public_6f3cbda : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6f3cbde : nop
        cmp eax, ecx
        jne public_6f3cbd0
        pop edi
        public_6f3cbe3 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6f3cc04
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6f3cc04
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f3cc04 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3cbb0)
    }
}

#undef public_6f3cbd0
#undef public_6f3cbda
#undef public_6f3cbde
#undef public_6f3cbe3
#undef public_6f3cc04
