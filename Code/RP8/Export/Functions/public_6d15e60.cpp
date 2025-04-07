#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15e60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d15e79 _public_6d15e79

PROC_DECLARE(0x6d15e60, internal_6d15e60, public_6d15e60);
extern "C" NAKED register_t __cdecl internal_6d15e60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d15e79
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d15e79 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        lea edx, ss:[ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d15e60)
    }
}

#undef public_6d15e79
