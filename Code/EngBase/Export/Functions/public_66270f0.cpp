#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66270f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6627102 _public_6627102
#define public_6627126 _public_6627126
#define public_662713b _public_662713b

PROC_DECLARE(0x66270f0, internal_66270f0, public_66270f0);
extern "C" NAKED register_t __cdecl internal_66270f0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        cmp edi, ebp
        je public_662713b
        push esi
        public_6627102 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6627126
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_6627126 : nop
        push esi
        call public_66281d0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6627102
        pop esi
        public_662713b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66270f0)
    }
}

#undef public_6627102
#undef public_6627126
#undef public_662713b
