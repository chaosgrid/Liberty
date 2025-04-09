#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c120);
CLANG_FORWARD_PROC_SYMBOL(public_50c190);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_50c1f9 _public_50c1f9
#define public_50c210 _public_50c210

PROC_DECLARE(0x50c190, internal_50c190, public_50c190);
extern "C" NAKED register_t __cdecl internal_50c190()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ss : [ebp+0x29], 0
        mov byte ptr ss : [ebp+0x28], 0
        mov dword ptr ss : [ebp+0x2C], esi
        mov dword ptr ss : [ebp+0x14], esi
        call public_50c120
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x24]
        inc eax
        cmp eax, ecx
        jbe public_50c210
        mov eax, dword ptr ss : [ebp+0x1C]
        lea edi, ds:[eax+eax*2]
        add ecx, edi
        shl ecx, 1
        push ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_5b7e84
        mov ebx, eax
        add esp, 4
        cmp ebx, esi
        je public_50c210
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, esi
        je public_50c1f9
        mov ecx, dword ptr ss : [ebp+0x24]
        shl ecx, 1
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x10]
        public_50c1f9 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+0x24]
        add esp, 4
        add eax, edi
        mov dword ptr ss : [ebp+0x10], ebx
        mov dword ptr ss : [ebp+0x24], eax
        public_50c210 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x50c190)
    }
}

#undef public_50c1f9
#undef public_50c210
