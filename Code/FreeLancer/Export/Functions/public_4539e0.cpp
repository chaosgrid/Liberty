#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4539e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4539f0 _public_4539f0
#define public_453a23 _public_453a23

PROC_DECLARE(0x4539e0, internal_4539e0, public_4539e0);
extern "C" NAKED register_t __cdecl internal_4539e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_453a23
        push esi
        public_4539f0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 1
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [edx+4], eax
        call dword ptr ds : [public_5c7084]
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_4539f0
        pop esi
        public_453a23 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4539e0)
    }
}

#undef public_4539f0
#undef public_453a23
