#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72dd0);

#define public_6f72e10 _public_6f72e10
#define public_6f72e67 _public_6f72e67
#define public_6f72e6b _public_6f72e6b
#define public_6f72e6d _public_6f72e6d
#define public_6f72e7a _public_6f72e7a
#define public_6f72e86 _public_6f72e86

PROC_DECLARE(0x6f72dd0, internal_6f72dd0, public_6f72dd0);
extern "C" NAKED register_t __cdecl internal_6f72dd0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        fld st(0)
        push ebp
        fmul st, st(1)
        push esi
        push edi
        mov edi, ecx
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx], 0xBF800000
        mov esi, dword ptr ds : [edi+0xBC]
        fstp st(0)
        mov eax, dword ptr ds : [edi+0xC0]
        xor dl, dl
        cmp esi, eax
        je public_6f72e7a
        mov ebp, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6f72e10 : nop
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f72e6d
        lea edx, ss:[esp+0x10]
        push edx
        call public_6eb70f0
        fld dword ptr ss : [ebp]
        fsub dword ptr ds : [eax]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [eax+8]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jnp public_6f72e86
        mov eax, dword ptr ds : [ebx]
        xor dl, dl
        cmp eax, 0xBF800000
        je public_6f72e67
        fcom dword ptr ds : [ebx]
        fnstsw ax
        test ah, 5
        jp public_6f72e6b
        public_6f72e67 : nop
        fstp dword ptr ds : [ebx]
        jmp public_6f72e6d
        public_6f72e6b : nop
        fstp st(0)
        public_6f72e6d : nop
        mov eax, dword ptr ds : [edi+0xC0]
        add esi, 4
        cmp esi, eax
        jne public_6f72e10
        public_6f72e7a : nop
        pop edi
        pop esi
        pop ebp
        mov al, dl
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f72e86 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        mov dword ptr ds : [ebx], 0xBF800000
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f72dd0)
    }
}

#undef public_6f72e10
#undef public_6f72e67
#undef public_6f72e6b
#undef public_6f72e6d
#undef public_6f72e7a
#undef public_6f72e86
