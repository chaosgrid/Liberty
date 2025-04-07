#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d5540);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d61a0 _public_65d61a0
#define public_65d61d3 _public_65d61d3
#define public_65d61ed _public_65d61ed
#define public_65d6202 _public_65d6202

PROC_DECLARE(0x65d6190, internal_65d6190, public_65d6190);
extern "C" NAKED register_t __cdecl internal_65d6190()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d61ed
        push edi
        public_65d61a0 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_65d5520
        mov ecx, dword ptr ds : [esi+8]
        call public_65d5540
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_65d61d3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_65d61d3 : nop
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [ebx+0x10]
        add esp, 4
        dec ecx
        mov esi, edi
        mov dword ptr ds : [ebx+0x10], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        cmp edi, eax
        jne public_65d61a0
        pop edi
        public_65d61ed : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, 0xFFFFFFFF
        je public_65d6202
        push eax
        call public_65d6c4c
        mov dword ptr ds : [ebx+4], 0xFFFFFFFF
        public_65d6202 : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d6190)
    }
}

#undef public_65d61a0
#undef public_65d61d3
#undef public_65d61ed
#undef public_65d6202
