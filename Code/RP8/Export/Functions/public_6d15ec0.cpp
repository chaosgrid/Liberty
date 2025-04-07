#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d15ede _public_6d15ede

PROC_DECLARE(0x6d15ec0, internal_6d15ec0, public_6d15ec0);
extern "C" NAKED register_t __cdecl internal_6d15ec0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x38
        push esi
        push edi
        mov dword ptr ss : [ebp-0x34], ecx
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d15ede
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d15ede : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        lea edx, ss:[ebp-0x30]
        push edx
        mov eax, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x38]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[ebp-0x30]
        mov edi, dword ptr ss : [ebp+8]
        rep movsd
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d15ec0)
    }
}

#undef public_6d15ede
