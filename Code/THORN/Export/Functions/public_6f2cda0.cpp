#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);

#define public_6f2cdcf _public_6f2cdcf
#define public_6f2cde0 _public_6f2cde0

PROC_DECLARE(0x6f2cda0, internal_6f2cda0, public_6f2cda0);
extern "C" NAKED register_t __cdecl internal_6f2cda0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, ecx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        xor ebp, ebp
        mov edi, ebx
        repne scasb
        mov eax, dword ptr ds : [esi+0xC]
        not ecx
        dec ecx
        mov edi, ecx
        mov ecx, dword ptr ds : [esi+8]
        add eax, edi
        cmp eax, ecx
        jbe public_6f2cdcf
        mov ecx, esi
        call public_6f2ca80
        mov ebp, eax
        public_6f2cdcf : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, ebx
        add eax, ecx
        lea esp, ss:[esp]
        public_6f2cde0 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        jne public_6f2cde0
        mov eax, dword ptr ds : [esi+0xC]
        add eax, edi
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2cda0)
    }
}

#undef public_6f2cdcf
#undef public_6f2cde0
