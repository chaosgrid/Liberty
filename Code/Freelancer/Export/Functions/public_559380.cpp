#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559380);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_559390 _public_559390
#define public_5593bd _public_5593bd

PROC_DECLARE(0x559380, internal_559380, public_559380);
extern "C" NAKED register_t __cdecl internal_559380()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_679a14]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_5593bd
        mov edi, edi
        public_559390 : nop
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
        mov ecx, dword ptr ds : [public_679a18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_679a18], ecx
        jne public_559390
        public_5593bd : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x559380)
    }
}

#undef public_559390
#undef public_5593bd
