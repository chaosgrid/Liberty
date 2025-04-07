#include "Common-PCH.h"


#define public_632e730 _public_632e730

PROC_DECLARE(0x632e720, internal_632e720, public_632e720);
extern "C" NAKED register_t __cdecl internal_632e720()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov eax, ecx
        mov esi, eax
        sub esi, edx
        lea esp, ss:[esp]
        public_632e730 : nop
        mov bl, byte ptr ds : [edx]
        mov byte ptr ds : [esi+edx], bl
        inc edx
        test bl, bl
        jne public_632e730
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632e720)
    }
}

#undef public_632e730
