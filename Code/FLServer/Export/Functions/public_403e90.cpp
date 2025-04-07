#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_403eb5 _public_403eb5
#define public_403ec1 _public_403ec1

PROC_DECLARE(0x403e90, internal_403e90, public_403e90);
extern "C" NAKED register_t __cdecl internal_403e90()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_403ec1
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_403ec1
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_403eb5
        cmp cl, 0xFF
        je public_403eb5
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_403ec1
        public_403eb5 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_403ec1 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x403e90)
    }
}

#undef public_403eb5
#undef public_403ec1
