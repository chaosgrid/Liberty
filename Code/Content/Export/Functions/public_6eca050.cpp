#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9b30);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6eca091 _public_6eca091

PROC_DECLARE(0x6eca050, internal_6eca050, public_6eca050);
extern "C" NAKED register_t __cdecl internal_6eca050()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15b90
        lea ecx, ds:[esi+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        mov edi, eax
        call public_6f15b90
        test edi, 0x3FFFFFFF
        je public_6eca091
        test eax, 0x3FFFFFFF
        je public_6eca091
        mov edx, dword ptr ds : [esi+0x78]
        mov ecx, dword ptr ds : [esi+0x74]
        push edx
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push edi
        call public_6ec9b30
        fstp st(0)
        public_6eca091 : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eca050)
    }
}

#undef public_6eca091
