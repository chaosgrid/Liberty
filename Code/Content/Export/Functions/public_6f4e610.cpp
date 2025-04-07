#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e610);

#define public_6f4e624 _public_6f4e624
#define public_6f4e634 _public_6f4e634

PROC_DECLARE(0x6f4e610, internal_6f4e610, public_6f4e610);
extern "C" NAKED register_t __cdecl internal_6f4e610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov ecx, eax
        jbe public_6f4e634
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        public_6f4e624 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [ecx], di
        add ecx, 2
        add edx, 2
        dec esi
        jne public_6f4e624
        pop edi
        public_6f4e634 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e610)
    }
}

#undef public_6f4e624
#undef public_6f4e634
