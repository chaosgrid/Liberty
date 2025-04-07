#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6350fb0);

#define public_6350d02 _public_6350d02
#define public_6350d30 _public_6350d30
#define public_6350d47 _public_6350d47
#define public_6350d8a _public_6350d8a

PROC_DECLARE(0x6350ca0, internal_6350ca0, public_6350ca0);
extern "C" NAKED register_t __cdecl internal_6350ca0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0x14]
        sub esp, 0x10
        fadd dword ptr ds : [edx]
        fadd dword ptr ds : [edx+0x28]
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6350d02
        fadd dword ptr ds : [public_63a53d0]
        fsqrt 
        fld st(0)
        fmul dword ptr ds : [public_63a5460]
        fstp dword ptr ds : [ecx+0xC]
        fdivr dword ptr ds : [public_63a5460]
        fld dword ptr ds : [edx+0x24]
        fsub dword ptr ds : [edx+0x18]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [edx+0x20]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [edx+0x10]
        fsub dword ptr ds : [edx+4]
        fmul st, st(1)
        fstp dword ptr ds : [ecx+8]
        fstp st(0)
        call public_6350fb0
        add esp, 0x10
        ret 4
        public_6350d02 : nop
        fstp st(0)
        push ebx
        fld dword ptr ds : [edx+0x14]
        push esi
        fld dword ptr ds : [edx]
        fcompp 
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0xC], 1
        fnstsw ax
        mov dword ptr ss : [esp+0x10], 2
        mov dword ptr ss : [esp+0x14], esi
        test ah, 1
        je public_6350d30
        mov esi, 1
        public_6350d30 : nop
        fld dword ptr ds : [edx+0x28]
        lea eax, ds:[esi+esi*4]
        fld dword ptr ds : [edx+eax*4]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6350d47
        mov esi, 2
        public_6350d47 : nop
        mov edi, dword ptr ss : [esp+esi*4+0xC]
        mov ebx, dword ptr ss : [esp+edi*4+0xC]
        lea eax, ds:[esi+esi*4]
        fld dword ptr ds : [edx+eax*4]
        lea eax, ds:[ebx+ebx*4]
        fld dword ptr ds : [edx+eax*4]
        lea eax, ds:[edi+edi*4]
        fadd dword ptr ds : [edx+eax*4]
        fsubp 
        fadd dword ptr ds : [public_63a53d0]
        fsqrt 
        fld st(0)
        fmul dword ptr ds : [public_63a5460]
        fstp dword ptr ss : [esp+esi*4+0xC]
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6350d8a
        fdivr dword ptr ds : [public_63a5460]
        public_6350d8a : nop
        lea eax, ds:[edi+ebx*4]
        fld dword ptr ds : [edx+eax*4]
        lea eax, ds:[ebx+edi*4]
        fsub dword ptr ds : [edx+eax*4]
        lea eax, ds:[esi+edi*4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edx+eax*4]
        lea eax, ds:[edi+esi*4]
        fadd dword ptr ds : [edx+eax*4]
        lea eax, ds:[esi+ebx*4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+edi*4+0xC]
        pop edi
        fld dword ptr ds : [edx+eax*4]
        lea eax, ds:[ebx+esi*4]
        fadd dword ptr ds : [edx+eax*4]
        pop esi
        fmul st, st(1)
        fstp dword ptr ss : [esp+ebx*4+4]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        fstp st(0)
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        call public_6350fb0
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6350ca0)
    }
}

#undef public_6350d02
#undef public_6350d30
#undef public_6350d47
#undef public_6350d8a
