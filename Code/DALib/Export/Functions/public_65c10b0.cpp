#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c10b0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a48);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a4e);

#define public_65c10c2 _public_65c10c2

PROC_DECLARE(0x65c10b0, internal_65c10b0, public_65c10b0);
extern "C" NAKED register_t __cdecl internal_65c10b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x20
        push esi
        mov esi, ecx
        jae public_65c10c2
        xor al, al
        pop esi
        ret 0x10
        public_65c10c2 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push edi
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push 4
        push edi
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], eax
        call public_65c6a4e
        mov ecx, dword ptr ds : [esi+0x18]
        push edi
        mov ebx, eax
        mov dword ptr ds : [esi+0x74], ecx
        call public_65c6a48
        xor eax, eax
        pop edi
        cmp ebx, 1
        pop ebx
        sete al
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x65c10b0)
    }
}

#undef public_65c10c2
