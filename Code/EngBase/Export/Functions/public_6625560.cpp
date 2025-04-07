#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625560);

#define public_6625576 _public_6625576
#define public_6625589 _public_6625589

PROC_DECLARE(0x6625560, internal_6625560, public_6625560);
extern "C" NAKED register_t __cdecl internal_6625560()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x78]
        push ebx
        test al, al
        jne public_6625576
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        jne public_6625576
        xor al, al
        pop ebx
        ret 8
        public_6625576 : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, 1
        cmp eax, 0xFFFFFFFF
        mov byte ptr ds : [ecx+0x78], 0
        jne public_6625589
        xor al, al
        pop ebx
        ret 8
        public_6625589 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        lea edx, ds:[ecx+0x5C]
        push edx
        push ecx
        call dword ptr ds : [eax*4+public_662aa84]
        add esp, 0xC
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6625560)
    }
}

#undef public_6625576
#undef public_6625589
