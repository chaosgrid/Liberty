#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_63606de _public_63606de
#define public_636074d _public_636074d
#define public_6360772 _public_6360772
#define public_6360798 _public_6360798
#define public_63607b3 _public_63607b3

PROC_DECLARE(0x63606d0, internal_63606d0, public_63606d0);
extern "C" NAKED register_t __cdecl internal_63606d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        public_63606de : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x14]
        fadd dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+0x18]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6360798
        mov eax, dword ptr ds : [ecx+4]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xE]
        shl edx, 4
        mov edi, dword ptr ds : [edx+eax+0xC]
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6363280
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+4], 0xFFFF
        mov dword ptr ds : [esi+0x10], eax
        fld dword ptr ds : [esi+0x14]
        fst dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x18]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_63607b3
        public_636074d : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_636074d
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        public_6360772 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push ebx
        mov ecx, esi
        call public_6360ab0
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx+4], 1
        jne public_63606de
        public_6360798 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_6360ab0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0x10
        public_63607b3 : nop
        fstp st(0)
        fstp st(0)
        jmp public_6360772
        UNREACHABLE_TRAP(0x63606d0)
    }
}

#undef public_63606de
#undef public_636074d
#undef public_6360772
#undef public_6360798
#undef public_63607b3
