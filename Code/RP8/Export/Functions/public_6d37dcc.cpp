#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);

#define public_6d37e58 _public_6d37e58

PROC_DECLARE(0x6d37dcc, internal_6d37dcc, public_6d37dcc);
extern "C" NAKED register_t __cdecl internal_6d37dcc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1058]
        mov ecx, dword ptr ds : [esi+0x1068]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ds : [esi+0x1064]
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        xor eax, eax
        inc eax
        mov dword ptr ds : [esi+0x1064], ecx
        xor ebx, ebx
        cmp dword ptr ds : [esi+8], eax
        lea ecx, ss:[ebp-0x24]
        push edi
        mov dword ptr ds : [esi+0x1058], eax
        mov dword ptr ds : [esi+0x18], ecx
        mov dword ptr ds : [esi+0x2C], offset public_6d6c940
        mov dword ptr ds : [esi+0x10], ebx
        je public_6d37e58
        lea edi, ds:[esi+0x1048]
        mov ecx, dword ptr ds : [edi]
        lea ebx, ds:[esi+0x104C]
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], eax
        lea eax, ds:[esi+0x1C]
        mov dword ptr ss : [ebp-8], ecx
        push eax
        mov ecx, esi
        mov dword ptr ds : [ebx], eax
        call public_6d37335
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ebx], eax
        xor ebx, ebx
        public_6d37e58 : nop
        mov eax, dword ptr ds : [esi]
        lea edi, ds:[esi+0x1C]
        push edi
        push ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+0x1058], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [esi+0x1064], eax
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [esi+0x2C], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d37dcc)
    }
}

#undef public_6d37e58
