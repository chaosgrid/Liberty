#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c2dc);

#define public_6d4c2fc _public_6d4c2fc

PROC_DECLARE(0x6d4c2dc, internal_6d4c2dc, public_6d4c2dc);
extern "C" NAKED register_t __cdecl internal_6d4c2dc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x20]
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [ebx+0x188]
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+0x1C]
        sub eax, dword ptr ds : [edi]
        cmp eax, ecx
        jbe public_6d4c2fc
        mov eax, ecx
        public_6d4c2fc : nop
        and dword ptr ss : [ebp+8], 0
        mov ecx, dword ptr ds : [ebx+0x19C]
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push dword ptr ds : [esi+0xC]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push ebx
        call dword ptr ds : [ecx+4]
        push dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ebx+0x1A4]
        lea ecx, ds:[edx+ecx*4]
        push ecx
        push dword ptr ds : [esi+0xC]
        push ebx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x2C
        add dword ptr ds : [edi], eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4c2dc)
    }
}

#undef public_6d4c2fc
