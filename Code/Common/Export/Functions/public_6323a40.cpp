#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323a40);

#define public_6323a64 _public_6323a64
#define public_6323ab8 _public_6323ab8

PROC_DECLARE(0x6323a40, internal_6323a40, public_6323a40);
extern "C" NAKED register_t __cdecl internal_6323a40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6401818]
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov esi, ecx
        jne public_6323a64
        push ebx
        push 0x1000
        push 1
        call dword ptr ds : [public_63990d8]
        mov dword ptr ds : [public_6401818], eax
        public_6323a64 : nop
        mov edi, dword ptr ds : [public_63990dc]
        push 0xA0
        push 1
        push eax
        call edi
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x9C], 1
        mov byte ptr ds : [eax+0x9D], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x9D], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov eax, dword ptr ds : [public_6401818]
        cmp eax, ebx
        mov ebp, dword ptr ds : [esi+8]
        jne public_6323ab8
        push ebx
        push 0x1000
        push 1
        call dword ptr ds : [public_63990d8]
        mov dword ptr ds : [public_6401818], eax
        public_6323ab8 : nop
        push 0xA0
        push 1
        push eax
        call edi
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x9C], bl
        mov byte ptr ds : [eax+0x9D], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6323a40)
    }
}

#undef public_6323a64
#undef public_6323ab8
