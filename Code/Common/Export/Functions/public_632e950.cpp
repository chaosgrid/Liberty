#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e950);
CLANG_FORWARD_PROC_SYMBOL(public_6332320);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632e960 _public_632e960
#define public_632e970 _public_632e970
#define public_632e99d _public_632e99d
#define public_632e9c0 _public_632e9c0
#define public_632e9d5 _public_632e9d5

PROC_DECLARE(0x632e950, internal_632e950, public_632e950);
extern "C" NAKED register_t __cdecl internal_632e950()
{
    __asm
    {
        mov ecx, offset public_640a728
        jmp public_632e960
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_632e960 : nop
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        push edi
        je public_632e99d
        public_632e970 : nop
        mov eax, ecx
        mov ebx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ebx
        mov edi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax], edi
        mov ebx, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [esi+0x18]
        dec ebx
        dec edi
        cmp ecx, edx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x18], edi
        jne public_632e970
        public_632e99d : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [esi+4]
        xor ebp, ebp
        dec ecx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_632e9d5
        public_632e9c0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6332320
        cmp edi, ebx
        jne public_632e9c0
        public_632e9d5 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x632e950)
    }
}

#undef public_632e960
#undef public_632e970
#undef public_632e99d
#undef public_632e9c0
#undef public_632e9d5
