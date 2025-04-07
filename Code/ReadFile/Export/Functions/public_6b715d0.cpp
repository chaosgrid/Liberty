#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b715ea _public_6b715ea
#define public_6b71611 _public_6b71611
#define public_6b71621 _public_6b71621
#define public_6b71635 _public_6b71635

PROC_DECLARE(0x6b715d0, internal_6b715d0, public_6b715d0);
extern "C" NAKED register_t __cdecl internal_6b715d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ebx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6b71611
        public_6b715ea : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_6b782a0
        mov ecx, dword ptr ds : [esi+0x18]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x18], ecx
        jne public_6b715ea
        public_6b71611 : nop
        mov dword ptr ds : [esi+0x1C], ebp
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, ebp
        je public_6b71635
        mov ebx, dword ptr ds : [public_6b79070]
        public_6b71621 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, eax
        mov edi, dword ptr ds : [eax]
        push ecx
        call ebx
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [esi+0x20], edi
        jne public_6b71621
        public_6b71635 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b715d0)
    }
}

#undef public_6b715ea
#undef public_6b71611
#undef public_6b71621
#undef public_6b71635
