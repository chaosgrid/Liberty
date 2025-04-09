#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9950);
CLANG_FORWARD_PROC_SYMBOL(public_5a9970);

#define public_565e01 _public_565e01
#define public_565e0b _public_565e0b
#define public_565e2c _public_565e2c

PROC_DECLARE(0x565dd0, internal_565dd0, public_565dd0);
extern "C" NAKED register_t __cdecl internal_565dd0()
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
        je public_565e01
        test al, al
        jne public_565e0b
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        public_565e01 : nop
        test al, al
        je public_565e2c
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_565e0b : nop
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
        seta al
        pop ebx
        ret 
        public_565e2c : nop
        add edi, 0x44
        push edi
        add esi, 0x44
        push esi
        call dword ptr ds : [public_5c7028]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x565dd0)
    }
}

#undef public_565e01
#undef public_565e0b
#undef public_565e2c
