#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268f69 _public_6268f69
#define public_6268f81 _public_6268f81
#define public_6268f96 _public_6268f96

PROC_DECLARE(0x6268f50, internal_6268f50, public_6268f50);
extern "C" NAKED register_t __cdecl internal_6268f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edi], cl
        mov eax, ebx
        jge public_6268f69
        xor eax, eax
        public_6268f69 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [edi+4], eax
        mov esi, eax
        jbe public_6268f96
        push ebp
        mov ebp, ebx
        public_6268f81 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push esi
        call public_626c1e0
        add esp, 8
        add esi, 0x20
        dec ebp
        jne public_6268f81
        pop ebp
        public_6268f96 : nop
        mov eax, dword ptr ds : [edi+4]
        shl ebx, 5
        add eax, ebx
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6268f50)
    }
}

#undef public_6268f69
#undef public_6268f81
#undef public_6268f96
