#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402610);

#define public_402621 _public_402621
#define public_402629 _public_402629
#define public_402634 _public_402634

PROC_DECLARE(0x402610, internal_402610, public_402610);
extern "C" NAKED register_t __cdecl internal_402610()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_402634
        push esi
        public_402621 : nop
        test eax, eax
        je public_402629
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_402629 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_402621
        pop esi
        public_402634 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x402610)
    }
}

#undef public_402621
#undef public_402629
#undef public_402634
