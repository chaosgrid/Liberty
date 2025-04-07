#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5410);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d543e _public_65d543e

PROC_DECLARE(0x65d5410, internal_65d5410, public_65d5410);
extern "C" NAKED register_t __cdecl internal_65d5410()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_65d543e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_65d543e : nop
        push esi
        call public_65d6cb8
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d5410)
    }
}

#undef public_65d543e
