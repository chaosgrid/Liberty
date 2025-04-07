#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17290);

#define public_6d172db _public_6d172db

PROC_DECLARE(0x6d17290, internal_6d17290, public_6d17290);
extern "C" NAKED register_t __cdecl internal_6d17290()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp-8]
        movzx ecx, byte ptr ds : [eax+0x40]
        test ecx, ecx
        jne public_6d172db
        mov edx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [edx+0x41], 0
        mov eax, dword ptr ss : [ebp-8]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call dword ptr ds : [ecx+0x94]
        mov dword ptr ss : [ebp-4], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-4], 0
        setge al
        mov ecx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx+0x40], al
        public_6d172db : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d17290)
    }
}

#undef public_6d172db
