#include "Content-PCH.h"


#define public_6ec562d _public_6ec562d

PROC_DECLARE(0x6ec55f0, internal_6ec55f0, public_6ec55f0);
extern "C" NAKED register_t __cdecl internal_6ec55f0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [ebx+0x68]
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec562d
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [esi+0x10], eax
        public_6ec562d : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec55f0)
    }
}

#undef public_6ec562d
