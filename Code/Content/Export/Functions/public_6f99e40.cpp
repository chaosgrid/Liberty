#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f99d60);

#define public_6f99e57 _public_6f99e57
#define public_6f99e6d _public_6f99e6d
#define public_6f99e75 _public_6f99e75
#define public_6f99e8c _public_6f99e8c

PROC_DECLARE(0x6f99e40, internal_6f99e40, public_6f99e40);
extern "C" NAKED register_t __cdecl internal_6f99e40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3018]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ebx
        test al, al
        je public_6f99e75
        public_6f99e57 : nop
        push esi
        mov ecx, edi
        call public_6f99d60
        test al, al
        jne public_6f99e6d
        mov eax, dword ptr ds : [edi+0x40]
        lea ecx, ds:[edi+0x40]
        push esi
        call dword ptr ds : [eax+4]
        public_6f99e6d : nop
        mov ecx, esi
        call ebx
        test al, al
        jne public_6f99e57
        public_6f99e75 : nop
        fld dword ptr ds : [edi+0x44]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f99e8c
        mov dword ptr ds : [edi+0x44], 0x3F800000
        public_6f99e8c : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f99e40)
    }
}

#undef public_6f99e57
#undef public_6f99e6d
#undef public_6f99e75
#undef public_6f99e8c
