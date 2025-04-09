#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58cd00);

#define public_58cd48 _public_58cd48
#define public_58cd53 _public_58cd53
#define public_58cd9f _public_58cd9f

PROC_DECLARE(0x58cd00, internal_58cd00, public_58cd00);
extern "C" NAKED register_t __cdecl internal_58cd00()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        push esi
        push edi
        je public_58cd9f
        mov eax, dword ptr ds : [ecx+0x4A8]
        mov edi, dword ptr ss : [esp+0xC]
        sub eax, edx
        sar eax, 2
        cmp edi, eax
        jae public_58cd9f
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_58cd9f
        mov eax, dword ptr ds : [ecx+0x4B8]
        mov esi, dword ptr ss : [esp+0x10]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_58cd9f
        test edx, edx
        jne public_58cd48
        xor eax, eax
        jmp public_58cd53
        public_58cd48 : nop
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        public_58cd53 : nop
        imul eax, edi
        add eax, esi
        mov esi, eax
        mov eax, dword ptr ds : [ecx+0x494]
        test eax, eax
        je public_58cd9f
        mov edi, dword ptr ds : [ecx+0x498]
        sub edi, eax
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp esi, edx
        jae public_58cd9f
        mov edx, dword ptr ds : [ecx+0x494]
        imul esi, 0x1C
        add esi, edx
        test esi, esi
        je public_58cd9f
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], esi
        mov al, 1
        pop esi
        ret 0xC
        public_58cd9f : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x58cd00)
    }
}

#undef public_58cd48
#undef public_58cd53
#undef public_58cd9f
