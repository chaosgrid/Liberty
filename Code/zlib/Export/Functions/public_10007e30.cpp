#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006cb0);
CLANG_FORWARD_PROC_SYMBOL(public_10007c30);
CLANG_FORWARD_PROC_SYMBOL(public_10007e30);

#define public_10007e70 _public_10007e70
#define public_10007e88 _public_10007e88

PROC_DECLARE(0x10007e30, internal_10007e30, public_10007e30);
extern "C" NAKED register_t __cdecl internal_10007e30()
{
    __asm
    {
        push esi
        mov esi, eax
        mov ecx, dword ptr ds : [esi+0xB14]
        lea eax, ds:[esi+0x8C]
        push esi
        call public_10006cb0
        mov ecx, dword ptr ds : [esi+0xB20]
        lea eax, ds:[esi+0x980]
        push esi
        call public_10006cb0
        lea eax, ds:[esi+0xB28]
        push eax
        call public_10007c30
        add esp, 0xC
        mov eax, 0x12
        jmp public_10007e70
        lea ecx, ds:[ecx]
        public_10007e70 : nop
        movzx ecx, byte ptr ds : [eax+public_1000b71c]
        cmp word ptr ds : [esi+ecx*4+0xA76], 0
        jne public_10007e88
        dec eax
        cmp eax, 3
        jge public_10007e70
        public_10007e88 : nop
        mov ecx, dword ptr ds : [esi+0x16A0]
        lea edx, ds:[eax+eax*2+0x11]
        add ecx, edx
        mov dword ptr ds : [esi+0x16A0], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10007e30)
    }
}

#undef public_10007e70
#undef public_10007e88
