#include "DALib-PCH.h"


#define public_65c2322 _public_65c2322
#define public_65c2339 _public_65c2339

PROC_DECLARE(0x65c22f0, internal_65c22f0, public_65c22f0);
extern "C" NAKED register_t __cdecl internal_65c22f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65c2322
        mov ecx, dword ptr ds : [eax]
        push 0x8000
        push 0
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_65c2322 : nop
        mov al, byte ptr ds : [esi+0x8C]
        test al, al
        je public_65c2339
        call dword ptr ds : [public_65c70e4]
        mov byte ptr ds : [esi+0x8C], 0
        public_65c2339 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65c22f0)
    }
}

#undef public_65c2322
#undef public_65c2339
