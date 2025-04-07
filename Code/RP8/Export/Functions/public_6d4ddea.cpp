#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d827);
CLANG_FORWARD_PROC_SYMBOL(public_6d4db5f);
CLANG_FORWARD_PROC_SYMBOL(public_6d4dcb2);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ddea);

#define public_6d4de3e _public_6d4de3e
#define public_6d4de58 _public_6d4de58

PROC_DECLARE(0x6d4ddea, internal_6d4ddea, public_6d4ddea);
extern "C" NAKED register_t __cdecl internal_6d4ddea()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        push esi
        shl ecx, 5
        push ecx
        push 1
        push edi
        call dword ptr ds : [eax]
        mov esi, eax
        push 0x1F
        pop eax
        xor ecx, ecx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov eax, edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], 0x3F
        mov dword ptr ds : [esi+0x10], ecx
        call public_6d4d827
        push dword ptr ss : [ebp+8]
        push 1
        push esi
        push edi
        call public_6d4db5f
        and dword ptr ss : [ebp+8], 0
        mov ebx, eax
        add esp, 0x1C
        test ebx, ebx
        jle public_6d4de58
        mov dword ptr ss : [ebp-4], esi
        public_6d4de3e : nop
        push dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        mov esi, edi
        call public_6d4dcb2
        inc dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-4], 0x20
        cmp dword ptr ss : [ebp+8], ebx
        pop ecx
        jl public_6d4de3e
        public_6d4de58 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edi+0x70], ebx
        mov dword ptr ds : [eax+0x14], 0x5F
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x18], ebx
        mov eax, dword ptr ds : [edi]
        push 1
        push edi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4ddea)
    }
}

#undef public_6d4de3e
#undef public_6d4de58
