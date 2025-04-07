#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26d90);

#define public_6c26dae _public_6c26dae
#define public_6c26dba _public_6c26dba

PROC_DECLARE(0x6c26d90, internal_6c26d90, public_6c26d90);
extern "C" NAKED register_t __cdecl internal_6c26d90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_6c26dba
        test eax, eax
        je public_6c26dae
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6c26dae : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6c26dba
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6c26dba : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c26d90)
    }
}

#undef public_6c26dae
#undef public_6c26dba
