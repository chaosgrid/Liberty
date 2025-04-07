#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9950);
CLANG_FORWARD_PROC_SYMBOL(public_5a9970);

#define public_565fef _public_565fef
#define public_565ff9 _public_565ff9
#define public_56601a _public_56601a

PROC_DECLARE(0x565fc0, internal_565fc0, public_565fc0);
extern "C" NAKED register_t __cdecl internal_565fc0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov ecx, offset public_67e7b8
        call public_5a9950
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov ecx, offset public_67e7b8
        mov bl, al
        call public_5a9950
        test bl, bl
        je public_565fef
        test al, al
        jne public_565ff9
        pop edi
        pop esi
        pop ebx
        ret 
        public_565fef : nop
        test al, al
        je public_56601a
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        public_565ff9 : nop
        push esi
        mov ecx, offset public_67e7b8
        call public_5a9970
        push edi
        mov ecx, offset public_67e7b8
        mov esi, eax
        call public_5a9970
        pop edi
        cmp esi, eax
        pop esi
        setb al
        pop ebx
        ret 
        public_56601a : nop
        add edi, 0x44
        push edi
        add esi, 0x44
        push esi
        call dword ptr ds : [public_5c702c]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x565fc0)
    }
}

#undef public_565fef
#undef public_565ff9
#undef public_56601a
