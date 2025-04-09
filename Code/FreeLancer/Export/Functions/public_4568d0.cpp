#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4568d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4568e2 _public_4568e2
#define public_4568f5 _public_4568f5
#define public_456909 _public_456909
#define public_456928 _public_456928

PROC_DECLARE(0x4568d0, internal_4568d0, public_4568d0);
extern "C" NAKED register_t __cdecl internal_4568d0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_456928
        mov ecx, dword ptr ss : [esp+0x10]
        public_4568e2 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ecx
        je public_4568f5
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_4568e2
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4568f5 : nop
        test edi, edi
        je public_456909
        mov ecx, edi
        call public_454bb0
        push edi
        call public_5b7e1d
        add esp, 4
        public_456909 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0xC], eax
        public_456928 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4568d0)
    }
}

#undef public_4568e2
#undef public_4568f5
#undef public_456909
#undef public_456928
