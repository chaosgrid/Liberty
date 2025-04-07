#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361530);

#define public_636154c _public_636154c
#define public_6361567 _public_6361567

PROC_DECLARE(0x6361530, internal_6361530, public_6361530);
extern "C" NAKED register_t __cdecl internal_6361530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+4]
        or ecx, 0xFFFFFFFF
        push edi
        xor eax, eax
        or edx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        dec ecx
        js public_6361567
        inc ecx
        public_636154c : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        inc esi
        xor eax, edx
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*4+public_63edcdc]
        shr edx, 8
        xor edx, eax
        dec ecx
        jne public_636154c
        public_6361567 : nop
        mov eax, edx
        pop edi
        or eax, 0x80000000
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361530)
    }
}

#undef public_636154c
#undef public_6361567
