#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25730);
CLANG_FORWARD_PROC_SYMBOL(public_6c292b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29310);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2575a _public_6c2575a
#define public_6c25763 _public_6c25763
#define public_6c2577d _public_6c2577d

PROC_DECLARE(0x6c25730, internal_6c25730, public_6c25730);
extern "C" NAKED register_t __cdecl internal_6c25730()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push 0x20
        mov edi, ecx
        mov dword ptr ds : [ebx], 0
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2575a
        mov ecx, eax
        call public_6c292b0
        mov esi, eax
        test esi, esi
        jne public_6c25763
        public_6c2575a : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c25763 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push edi
        mov ecx, esi
        call public_6c29310
        test eax, eax
        jge public_6c2577d
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c2577d : nop
        pop edi
        mov dword ptr ds : [ebx], esi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c25730)
    }
}

#undef public_6c2575a
#undef public_6c25763
#undef public_6c2577d
