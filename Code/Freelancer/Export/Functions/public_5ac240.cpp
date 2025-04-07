#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ac240);
CLANG_FORWARD_PROC_SYMBOL(public_5b73a4);

#define public_5ac292 _public_5ac292
#define public_5ac299 _public_5ac299

PROC_DECLARE(0x5ac240, internal_5ac240, public_5ac240);
extern "C" NAKED register_t __cdecl internal_5ac240()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x234]
        test ecx, ecx
        je public_5ac292
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_5ac292
        call public_5b73a4
        cmp eax, 2
        jne public_5ac292
        mov eax, dword ptr ds : [esi+0x23C]
        test eax, eax
        mov byte ptr ds : [esi+0x240], 0
        jne public_5ac299
        mov eax, dword ptr ds : [esi+0x234]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0
        push 0x65
        push eax
        call dword ptr ds : [ecx+0x14]
        inc dword ptr ds : [esi+0x23C]
        mov al, 1
        pop esi
        ret 
        public_5ac292 : nop
        mov byte ptr ds : [esi+0x240], 1
        public_5ac299 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5ac240)
    }
}

#undef public_5ac292
#undef public_5ac299
