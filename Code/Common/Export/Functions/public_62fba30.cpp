#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b160);
CLANG_FORWARD_PROC_SYMBOL(public_62fba30);

#define public_62fba43 _public_62fba43
#define public_62fba5f _public_62fba5f

PROC_DECLARE(0x62fba30, internal_62fba30, public_62fba30);
extern "C" NAKED register_t __cdecl internal_62fba30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_62fba5f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_62fba43 : nop
        push esi
        push edi
        call public_627b160
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_62fba43
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_62fba5f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62fba30)
    }
}

#undef public_62fba43
#undef public_62fba5f
