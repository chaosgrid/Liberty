#include "Content-PCH.h"


#define public_6f98cfc _public_6f98cfc

PROC_DECLARE(0x6f98cc0, internal_6f98cc0, public_6f98cc0);
extern "C" NAKED register_t __cdecl internal_6f98cc0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_6f98cfc
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6f98cfc
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6f98cfc
        pop edi
        xor eax, eax
        pop esi
        ret 4
        public_6f98cfc : nop
        pop edi
        mov eax, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f98cc0)
    }
}

#undef public_6f98cfc
