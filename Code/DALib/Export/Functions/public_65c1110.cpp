#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c1110);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a54);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a5a);

PROC_DECLARE(0x65c1110, internal_65c1110, public_65c1110);
extern "C" NAKED register_t __cdecl internal_65c1110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[esi+0x3C]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push 4
        push edi
        mov dword ptr ds : [esi+0x40], ecx
        mov dword ptr ds : [esi+0x48], edx
        mov dword ptr ds : [esi+0x4C], eax
        call public_65c6a5a
        mov ecx, dword ptr ds : [esi+0x50]
        push edi
        mov ebx, eax
        mov dword ptr ds : [esi+0x78], ecx
        call public_65c6a54
        pop edi
        xor eax, eax
        cmp ebx, 1
        pop esi
        sete al
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65c1110)
    }
}
