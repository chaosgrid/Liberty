#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63526d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352720);

#define public_63526e7 _public_63526e7

PROC_DECLARE(0x63526d0, internal_63526d0, public_63526d0);
extern "C" NAKED register_t __cdecl internal_63526d0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        lea esi, ss:[esp+0x10]
        or edx, 0xFFFFFFFF
        mov edi, 4
        public_63526e7 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        inc esi
        xor eax, edx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_63edcdc]
        shr edx, 8
        xor edx, eax
        dec edi
        jne public_63526e7
        or edx, 0x80000000
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push ebp
        call public_6352720
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x63526d0)
    }
}

#undef public_63526e7
