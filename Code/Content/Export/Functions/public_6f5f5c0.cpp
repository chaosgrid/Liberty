#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f62880);

#define public_6f5f5e4 _public_6f5f5e4
#define public_6f5f5e8 _public_6f5f5e8
#define public_6f5f604 _public_6f5f604
#define public_6f5f6ff _public_6f5f6ff
#define public_6f5f71f _public_6f5f71f
#define public_6f5f740 _public_6f5f740
#define public_6f5f751 _public_6f5f751

PROC_DECLARE(0x6f5f5c0, internal_6f5f5c0, public_6f5f5c0);
extern "C" NAKED register_t __cdecl internal_6f5f5c0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0xC], 0xBF800000
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f5f751
        push ebp
        push esi
        jmp public_6f5f5e8
        public_6f5f5e4 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_6f5f5e8 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f5f6ff
        lea ebp, ds:[edi+0x1C]
        public_6f5f604 : nop
        push ebp
        lea ebx, ds:[esi+0xC]
        lea eax, ss:[esp+0x3C]
        push ebx
        push eax
        call public_6eeaee0
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [edi+0x30]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ds : [esi+0x20]
        sub esp, 0xC
        fsub dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x1C]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x18]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ds : [esi+0x18]
        fsub dword ptr ds : [edi+0x28]
        fld dword ptr ds : [esi+0x1C]
        fsub dword ptr ds : [edi+0x2C]
        fld dword ptr ds : [esi+0x20]
        fsub dword ptr ds : [edi+0x30]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        faddp 
        faddp 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x1C]
        fstp st(0)
        cmp esi, eax
        fstp st(0)
        jne public_6f5f604
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        public_6f5f6ff : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_6f5f71f
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6f5f740
        public_6f5f71f : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        add ecx, 0x28
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x4C]
        push ecx
        push edx
        call public_6f62880
        add esp, 0xC
        public_6f5f740 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6f5f5e4
        pop esi
        pop ebp
        public_6f5f751 : nop
        pop edi
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6f5f5c0)
    }
}

#undef public_6f5f5e4
#undef public_6f5f5e8
#undef public_6f5f604
#undef public_6f5f6ff
#undef public_6f5f71f
#undef public_6f5f740
#undef public_6f5f751
