#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18652 _public_6d18652

PROC_DECLARE(0x6d18610, internal_6d18610, public_6d18610);
extern "C" NAKED register_t __cdecl internal_6d18610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        push edi
        mov edi, 0xFFFFFFFC
        je public_6d18652
        mov esi, dword ptr ss : [esp+0x10]
        test esi, 0x3FFFFFFF
        je public_6d18652
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d140f0
        test eax, eax
        je public_6d18652
        push esi
        mov ecx, eax
        call public_6d12cd0
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        fstp dword ptr ds : [eax]
        xor eax, eax
        pop esi
        ret 
        public_6d18652 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18610)
    }
}

#undef public_6d18652
