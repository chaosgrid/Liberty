#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003490);
CLANG_FORWARD_PROC_SYMBOL(public_1000a41e);
CLANG_FORWARD_PROC_SYMBOL(public_1000a424);

#define public_10003550 _public_10003550
#define public_10003566 _public_10003566

PROC_DECLARE(0x10003520, internal_10003520, public_10003520);
extern "C" NAKED register_t __cdecl internal_10003520()
{
    __asm
    {
        mov eax, 0x1000
        call public_1000a424
        mov ecx, dword ptr ss : [esp+0x1008]
        lea eax, ss:[esp+0x100C]
        push eax
        push ecx
        lea edx, ss:[esp+8]
        push edx
        call public_1000a41e
        lea eax, ss:[esp+0xC]
        add esp, 0xC
        lea edx, ds:[eax+1]
        mov edi, edi
        public_10003550 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_10003550
        sub eax, edx
        test eax, eax
        jg public_10003566
        xor eax, eax
        add esp, 0x1000
        ret 
        public_10003566 : nop
        mov ecx, dword ptr ss : [esp+0x1004]
        push eax
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call public_10003490
        add esp, 0x1000
        ret 
        UNREACHABLE_TRAP(0x10003520)
    }
}

#undef public_10003550
#undef public_10003566
