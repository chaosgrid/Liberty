#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);
CLANG_FORWARD_PROC_SYMBOL(public_5480c0);

#define public_5480e0 _public_5480e0
#define public_5480f1 _public_5480f1
#define public_5480ff _public_5480ff

PROC_DECLARE(0x5480c0, internal_5480c0, public_5480c0);
extern "C" NAKED register_t __cdecl internal_5480c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_5480e0
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push ebx
        push eax
        call public_4f7d20
        public_5480e0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5480f1
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [edx+0x94]
        public_5480f1 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_5480ff
        push edi
        push ebx
        call public_5377c0
        public_5480ff : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5480c0)
    }
}

#undef public_5480e0
#undef public_5480f1
#undef public_5480ff
