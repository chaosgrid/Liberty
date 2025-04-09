#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454bb0);
CLANG_FORWARD_PROC_SYMBOL(public_456930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_456940 _public_456940
#define public_456957 _public_456957
#define public_45697e _public_45697e

PROC_DECLARE(0x456930, internal_456930, public_456930);
extern "C" NAKED register_t __cdecl internal_456930()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_45697e
        push edi
        mov edi, edi
        public_456940 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_456957
        mov ecx, edi
        call public_454bb0
        push edi
        call public_5b7e1d
        add esp, 4
        public_456957 : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        mov dword ptr ds : [ebx+0xC], ecx
        cmp edi, dword ptr ds : [ebx+8]
        mov esi, edi
        jne public_456940
        pop edi
        public_45697e : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x456930)
    }
}

#undef public_456940
#undef public_456957
#undef public_45697e
