#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c341);

#define public_6d4c370 _public_6d4c370
#define public_6d4c3bf _public_6d4c3bf
#define public_6d4c3cc _public_6d4c3cc

PROC_DECLARE(0x6d4c341, internal_6d4c341, public_6d4c341);
extern "C" NAKED register_t __cdecl internal_6d4c341()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [ebx+0x188]
        push edi
        lea edi, ds:[esi+0x18]
        cmp dword ptr ds : [edi], 0
        jne public_6d4c370
        mov eax, dword ptr ds : [ebx+4]
        push 1
        push dword ptr ds : [esi+0x10]
        push dword ptr ds : [esi+0x14]
        push dword ptr ds : [esi+8]
        push ebx
        call dword ptr ds : [eax+0x1C]
        add esp, 0x14
        mov dword ptr ds : [esi+0xC], eax
        public_6d4c370 : nop
        push dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push edi
        push dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+8], eax
        push dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ebx+0x19C]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push ebx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x1C
        cmp eax, ecx
        jbe public_6d4c3bf
        mov edx, dword ptr ds : [ebx+0x1A4]
        sub eax, ecx
        push eax
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [esi+0xC]
        push 0
        lea eax, ds:[eax+ecx*4]
        push eax
        push ebx
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x10
        add dword ptr ds : [eax], ecx
        public_6d4c3bf : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [edi], eax
        jb public_6d4c3cc
        add dword ptr ds : [esi+0x14], eax
        and dword ptr ds : [edi], 0
        public_6d4c3cc : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4c341)
    }
}

#undef public_6d4c370
#undef public_6d4c3bf
#undef public_6d4c3cc
