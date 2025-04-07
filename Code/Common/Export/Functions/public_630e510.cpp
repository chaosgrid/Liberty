#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e510);

#define public_630e520 _public_630e520
#define public_630e550 _public_630e550
#define public_630e575 _public_630e575

PROC_DECLARE(0x630e510, internal_630e510, public_630e510);
extern "C" NAKED register_t __cdecl internal_630e510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea edx, ss:[esp-0x80]
        sub esp, 0x80
        sub edx, eax
        public_630e520 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_630e520
        lea eax, ss:[esp]
        push esi
        push eax
        call dword ptr ds : [public_639934c]
        mov cl, byte ptr ss : [esp+8]
        add esp, 4
        test cl, cl
        lea esi, ss:[esp+4]
        mov eax, 0xFFFF
        je public_630e575
        lea ebx, ds:[ebx]
        public_630e550 : nop
        mov edx, eax
        movzx ecx, cl
        and edx, 0xFF
        xor edx, ecx
        xor ecx, ecx
        mov cl, ah
        xor eax, eax
        mov ax, word ptr ds : [edx*2+public_63ed230]
        inc esi
        xor ax, cx
        mov cl, byte ptr ds : [esi]
        test cl, cl
        jne public_630e550
        public_630e575 : nop
        pop esi
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x630e510)
    }
}

#undef public_630e520
#undef public_630e550
#undef public_630e575
