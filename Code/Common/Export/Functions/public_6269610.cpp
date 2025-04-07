#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267e10);

#define public_626962b _public_626962b
#define public_6269632 _public_6269632

PROC_DECLARE(0x6269610, internal_6269610, public_6269610);
extern "C" NAKED register_t __cdecl internal_6269610()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_626962b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 5
        cmp eax, edi
        ja public_6269632
        public_626962b : nop
        mov ecx, esi
        call public_6267e10
        public_6269632 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edi
        shl eax, 5
        pop edi
        add eax, ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6269610)
    }
}

#undef public_626962b
#undef public_6269632
