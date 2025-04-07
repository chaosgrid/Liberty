#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634f320);
CLANG_FORWARD_PROC_SYMBOL(public_6352cf0);

#define public_634fea0 _public_634fea0
#define public_634feaf _public_634feaf
#define public_634feba _public_634feba

PROC_DECLARE(0x634fe60, internal_634fe60, public_634fe60);
extern "C" NAKED register_t __cdecl internal_634fe60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6352cf0
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC0
        jne public_634feba
        test al, 0xF
        jne public_634feaf
        fld dword ptr ds : [esi+0x54]
        shr eax, 0x16
        and eax, 0xFF
        fld dword ptr ds : [eax*4+public_658aa18]
        fadd dword ptr ds : [public_658ab34]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634fea0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        pop esi
        ret 4
        public_634fea0 : nop
        push 2
        push 0
        mov ecx, esi
        call public_634f320
        pop esi
        ret 4
        public_634feaf : nop
        push 1
        push 0
        mov ecx, esi
        call public_634f320
        public_634feba : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634fe60)
    }
}

#undef public_634fea0
#undef public_634feaf
#undef public_634feba
