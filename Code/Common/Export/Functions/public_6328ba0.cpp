#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6328ba0);

#define public_6328bbd _public_6328bbd
#define public_6328bce _public_6328bce
#define public_6328bf9 _public_6328bf9
#define public_6328c0d _public_6328c0d
#define public_6328c19 _public_6328c19
#define public_6328c23 _public_6328c23
#define public_6328c2c _public_6328c2c
#define public_6328c37 _public_6328c37
#define public_6328c46 _public_6328c46

PROC_DECLARE(0x6328ba0, internal_6328ba0, public_6328ba0);
extern "C" NAKED register_t __cdecl internal_6328ba0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov esi, ecx
        jge public_6328bbd
        push ebp
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov edi, eax
        public_6328bbd : nop
        add esi, 4
        cmp edi, 0x7FFFFFFD
        jbe public_6328bce
        call dword ptr ds : [public_63991b4]
        public_6328bce : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6328bf9
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6328bf9
        cmp cl, 0xFF
        je public_6328bf9
        test edi, edi
        jne public_6328c23
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        pop ebp
        ret 8
        public_6328bf9 : nop
        test edi, edi
        jne public_6328c0d
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        pop edi
        pop esi
        pop ebp
        ret 8
        public_6328c0d : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_6328c19
        cmp eax, edi
        jae public_6328c2c
        public_6328c19 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        public_6328c23 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6399158]
        public_6328c2c : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, ebp
        jbe public_6328c46
        mov edx, edi
        public_6328c37 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6328c37
        public_6328c46 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6328ba0)
    }
}

#undef public_6328bbd
#undef public_6328bce
#undef public_6328bf9
#undef public_6328c0d
#undef public_6328c19
#undef public_6328c23
#undef public_6328c2c
#undef public_6328c37
#undef public_6328c46
