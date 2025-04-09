#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e830);

#define public_55e843 _public_55e843
#define public_55e85b _public_55e85b
#define public_55e868 _public_55e868

PROC_DECLARE(0x55e830, internal_55e830, public_55e830);
extern "C" NAKED register_t __cdecl internal_55e830()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_55e868
        push ebx
        push esi
        push edi
        public_55e843 : nop
        test eax, eax
        je public_55e85b
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_55e85b : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_55e843
        pop edi
        pop esi
        pop ebx
        public_55e868 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x55e830)
    }
}

#undef public_55e843
#undef public_55e85b
#undef public_55e868
