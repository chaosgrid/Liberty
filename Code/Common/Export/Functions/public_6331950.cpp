#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331950);
CLANG_FORWARD_PROC_SYMBOL(public_63323b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6331960 _public_6331960
#define public_633198d _public_633198d
#define public_63319b1 _public_63319b1
#define public_63319e4 _public_63319e4

PROC_DECLARE(0x6331950, internal_6331950, public_6331950);
extern "C" NAKED register_t __cdecl internal_6331950()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        push edi
        je public_633198d
        nop 
        public_6331960 : nop
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
        jne public_6331960
        public_633198d : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+4]
        xor edi, edi
        dec ecx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_63319e4
        public_63319b1 : nop
        mov edi, ebx
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[edi+8]
        call public_63323b0
        push edi
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_63319b1
        xor edi, edi
        public_63319e4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6331950)
    }
}

#undef public_6331960
#undef public_633198d
#undef public_63319b1
#undef public_63319e4
