#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f039);

#define public_6d4f053 _public_6d4f053
#define public_6d4f06c _public_6d4f06c

PROC_DECLARE(0x6d4f039, internal_6d4f039, public_6d4f039);
extern "C" NAKED register_t __cdecl internal_6d4f039()
{
    __asm
    {
        mov eax, dword ptr ds : [esi+0x1A4]
        push ebp
        mov ebp, dword ptr ds : [esi+0x5C]
        push edi
        xor edi, edi
        cmp dword ptr ds : [esi+0x64], edi
        lea ebp, ss:[ebp+ebp+4]
        jle public_6d4f06c
        push ebx
        lea ebx, ds:[eax+0x44]
        public_6d4f053 : nop
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push 1
        push esi
        call dword ptr ds : [eax+4]
        add esp, 0xC
        mov dword ptr ds : [ebx], eax
        inc edi
        add ebx, 4
        cmp edi, dword ptr ds : [esi+0x64]
        jl public_6d4f053
        pop ebx
        public_6d4f06c : nop
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4f039)
    }
}

#undef public_6d4f053
#undef public_6d4f06c
