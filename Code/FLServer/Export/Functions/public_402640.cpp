#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402640);

#define public_402653 _public_402653
#define public_40265b _public_40265b
#define public_402662 _public_402662

PROC_DECLARE(0x402640, internal_402640, public_402640);
extern "C" NAKED register_t __cdecl internal_402640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_402662
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_402653 : nop
        test eax, eax
        je public_40265b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_40265b : nop
        add eax, 4
        dec ecx
        jne public_402653
        pop esi
        public_402662 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x402640)
    }
}

#undef public_402653
#undef public_40265b
#undef public_402662
