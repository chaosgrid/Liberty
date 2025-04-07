#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63527e0);
CLANG_FORWARD_PROC_SYMBOL(public_6352830);

#define public_63527f7 _public_63527f7

PROC_DECLARE(0x63527e0, internal_63527e0, public_63527e0);
extern "C" NAKED register_t __cdecl internal_63527e0()
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
        public_63527f7 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        inc esi
        xor eax, edx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_63edcdc]
        shr edx, 8
        xor edx, eax
        dec edi
        jne public_63527f7
        or edx, 0x80000000
        push edx
        push ebp
        call public_6352830
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x63527e0)
    }
}

#undef public_63527f7
