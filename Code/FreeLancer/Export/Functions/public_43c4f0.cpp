#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43c504 _public_43c504
#define public_43c517 _public_43c517
#define public_43c520 _public_43c520
#define public_43c524 _public_43c524
#define public_43c531 _public_43c531
#define public_43c542 _public_43c542

PROC_DECLARE(0x43c4f0, internal_43c4f0, public_43c4f0);
extern "C" NAKED register_t __cdecl internal_43c4f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5cb034
        je public_43c524
        public_43c504 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43c517
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43c520
        public_43c517 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43c520 : nop
        cmp edi, ebx
        jne public_43c504
        public_43c524 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_43c542
        public_43c531 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_43c531
        public_43c542 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43c4f0)
    }
}

#undef public_43c504
#undef public_43c517
#undef public_43c520
#undef public_43c524
#undef public_43c531
#undef public_43c542
