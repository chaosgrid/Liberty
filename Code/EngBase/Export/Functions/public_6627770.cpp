#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627770);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_662779b _public_662779b

PROC_DECLARE(0x6627770, internal_6627770, public_6627770);
extern "C" NAKED register_t __cdecl internal_6627770()
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
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_662779b
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_662779b : nop
        push esi
        call public_66281d0
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
        UNREACHABLE_TRAP(0x6627770)
    }
}

#undef public_662779b
