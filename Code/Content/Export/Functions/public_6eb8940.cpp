#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb8966 _public_6eb8966
#define public_6eb898d _public_6eb898d

PROC_DECLARE(0x6eb8940, internal_6eb8940, public_6eb8940);
extern "C" NAKED register_t __cdecl internal_6eb8940()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        push edi
        push eax
        call public_6fa8fe0
        xor ebp, ebp
        mov dword ptr ds : [esi+0x1C], ebp
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov ebx, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        je public_6eb898d
        public_6eb8966 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x10], ecx
        jne public_6eb8966
        public_6eb898d : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb8940)
    }
}

#undef public_6eb8966
#undef public_6eb898d
