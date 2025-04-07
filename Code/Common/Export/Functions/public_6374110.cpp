#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6373fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6374110);

#define public_6374145 _public_6374145
#define public_637415e _public_637415e

PROC_DECLARE(0x6374110, internal_6374110, public_6374110);
extern "C" NAKED register_t __cdecl internal_6374110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b8fc]
        push esi
        push edi
        push eax
        call public_636ec10
        mov edi, dword ptr ds : [public_658b254]
        mov esi, eax
        add esi, edi
        push esi
        call public_636ec70
        push esi
        mov edi, eax
        push 0
        push edi
        call public_636eed0
        mov esi, dword ptr ds : [public_658b838]
        add esp, 0x14
        test esi, esi
        je public_637415e
        public_6374145 : nop
        cmp dword ptr ds : [esi], 0
        je public_637415e
        mov ecx, dword ptr ds : [esi+8]
        push esi
        push ecx
        push edi
        call public_6373fa0
        mov esi, dword ptr ds : [esi]
        add esp, 0xC
        test esi, esi
        jne public_6374145
        public_637415e : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6374110)
    }
}

#undef public_6374145
#undef public_637415e
