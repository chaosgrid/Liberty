#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42b7b0);

#define public_42b805 _public_42b805

PROC_DECLARE(0x42b7b0, internal_42b7b0, public_42b7b0);
extern "C" NAKED register_t __cdecl internal_42b7b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c6030]
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+4]
        call ebx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi], offset public_5ca604
        call dword ptr ds : [public_5c69a0]
        mov byte ptr ds : [esi+0x18], 0
        mov byte ptr ds : [esi+0x19], 0
        mov eax, dword ptr ds : [esi+0x18]
        and eax, 0xD000FFFF
        or eax, 0x10000000
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], 0x42480000
        mov dword ptr ds : [esi+0x14], 0x43960000
        mov dword ptr ds : [esi+0x18], eax
        lea edi, ds:[esi+0x1C]
        mov ebp, 2
        public_42b805 : nop
        mov ecx, edi
        call ebx
        add edi, 4
        dec ebp
        jne public_42b805
        xor eax, eax
        pop edi
        mov dword ptr ds : [esi+0x24], eax
        mov word ptr ds : [esi+0x28], ax
        mov word ptr ds : [esi+0x2A], ax
        mov dword ptr ds : [esi], offset public_5ca36c
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x42b7b0)
    }
}

#undef public_42b805
