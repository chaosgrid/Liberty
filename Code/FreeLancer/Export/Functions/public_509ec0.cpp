#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_509ed0 _public_509ed0
#define public_509f03 _public_509f03

PROC_DECLARE(0x509ec0, internal_509ec0, public_509ec0);
extern "C" NAKED register_t __cdecl internal_509ec0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_675060]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_509f03
        mov edi, edi
        public_509ed0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_675064]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_675064], ecx
        jne public_509ed0
        mov edi, dword ptr ds : [public_675060]
        public_509f03 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_675060], eax
        mov dword ptr ds : [public_675064], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x509ec0)
    }
}

#undef public_509ed0
#undef public_509f03
