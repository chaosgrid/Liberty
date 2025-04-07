#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352930);
CLANG_FORWARD_PROC_SYMBOL(public_6352980);

#define public_6352947 _public_6352947

PROC_DECLARE(0x6352930, internal_6352930, public_6352930);
extern "C" NAKED register_t __cdecl internal_6352930()
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
        public_6352947 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        inc esi
        xor eax, edx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_63edcdc]
        shr edx, 8
        xor edx, eax
        dec edi
        jne public_6352947
        or edx, 0x80000000
        push edx
        push ebp
        call public_6352980
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6352930)
    }
}

#undef public_6352947
