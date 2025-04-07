#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ee0);

#define public_6f49fb5 _public_6f49fb5

PROC_DECLARE(0x6f49f90, internal_6f49f90, public_6f49f90);
extern "C" NAKED register_t __cdecl internal_6f49f90()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        call public_6f75f30
        add esp, 4
        mov ecx, eax
        call public_6f78ee0
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6f49fb5
        xor eax, eax
        test eax, eax
        setne cl
        mov al, cl
        ret 
        public_6f49fb5 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        setne cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x6f49f90)
    }
}

#undef public_6f49fb5
