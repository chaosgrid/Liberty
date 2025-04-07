#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c520);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3c545 _public_6f3c545
#define public_6f3c54e _public_6f3c54e

PROC_DECLARE(0x6f3c520, internal_6f3c520, public_6f3c520);
extern "C" NAKED register_t __cdecl internal_6f3c520()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_6f3c54e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f3c54e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f3c545
        cmp cl, 0xFF
        je public_6f3c545
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f3c54e
        public_6f3c545 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f3c54e : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f3c520)
    }
}

#undef public_6f3c545
#undef public_6f3c54e
