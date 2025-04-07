#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb89b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb89d6 _public_6eb89d6
#define public_6eb89fd _public_6eb89fd

PROC_DECLARE(0x6eb89b0, internal_6eb89b0, public_6eb89b0);
extern "C" NAKED register_t __cdecl internal_6eb89b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        push edi
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], ebp
        mov ebx, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        je public_6eb89fd
        public_6eb89d6 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x14], ecx
        jne public_6eb89d6
        public_6eb89fd : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x14], ebp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb89b0)
    }
}

#undef public_6eb89d6
#undef public_6eb89fd
