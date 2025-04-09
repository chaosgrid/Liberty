#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58ce10);

#define public_58ce58 _public_58ce58
#define public_58ce63 _public_58ce63
#define public_58cea9 _public_58cea9

PROC_DECLARE(0x58ce10, internal_58ce10, public_58ce10);
extern "C" NAKED register_t __cdecl internal_58ce10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        push esi
        push edi
        je public_58cea9
        mov eax, dword ptr ds : [ecx+0x4A8]
        mov edi, dword ptr ss : [esp+0xC]
        sub eax, edx
        sar eax, 2
        cmp edi, eax
        jae public_58cea9
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_58cea9
        mov eax, dword ptr ds : [ecx+0x4B8]
        mov esi, dword ptr ss : [esp+0x10]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_58cea9
        test edx, edx
        jne public_58ce58
        xor eax, eax
        jmp public_58ce63
        public_58ce58 : nop
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        public_58ce63 : nop
        imul eax, edi
        add eax, esi
        mov esi, eax
        mov eax, dword ptr ds : [ecx+0x494]
        test eax, eax
        je public_58cea9
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
        jae public_58cea9
        mov edx, dword ptr ds : [ecx+0x494]
        imul esi, 0x1C
        add esi, edx
        test esi, esi
        je public_58cea9
        mov cl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x18], cl
        public_58cea9 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x58ce10)
    }
}

#undef public_58ce58
#undef public_58ce63
#undef public_58cea9
