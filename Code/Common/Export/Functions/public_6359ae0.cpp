#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be40);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6359ae0);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);

#define public_6359c14 _public_6359c14
#define public_6359c2e _public_6359c2e
#define public_6359ce9 _public_6359ce9
#define public_6359ceb _public_6359ceb
#define public_6359cfd _public_6359cfd

PROC_DECLARE(0x6359ae0, internal_6359ae0, public_6359ae0);
extern "C" NAKED register_t __cdecl internal_6359ae0()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x60]
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x3C]
        push eax
        push edi
        push esi
        mov ebx, ecx
        call public_635bda0
        mov edx, esi
        lea ecx, ss:[esp+0x58]
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4e0]
        push ecx
        add eax, esi
        push edi
        push eax
        call public_635bda0
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0x54]
        mov edi, dword ptr ss : [esp+0x78]
        add esp, 0x14
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fstp dword ptr ss : [esp]
        call public_6347df0
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x38]
        add esp, 4
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        call public_6347e60
        fmul dword ptr ss : [esp+0x68]
        fst dword ptr ds : [ebx+0x58]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6359c14
        fdivr dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jmp public_6359c2e
        public_6359c14 : nop
        fstp st(0)
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        public_6359c2e : nop
        fld dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x20]
        mov ecx, esi
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ds : [esi+8]
        call public_6347ef0
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0x20]
        mov edx, ecx
        fstp dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x28], edx
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x64], ecx
        fstp dword ptr ds : [esi+0x78]
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x7C]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [ebx+0x60]
        cmp al, 1
        jne public_6359cfd
        and eax, 0xFFFFFF00
        mov dword ptr ds : [ebx+0x60], eax
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628be40
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        fmulp 
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6359ce9
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_6359cfd
        jmp public_6359ceb
        public_6359ce9 : nop
        fstp st(0)
        public_6359ceb : nop
        mov ecx, dword ptr ds : [esi+0x54]
        and ecx, 0xFFFFFDFF
        or ecx, 0x100
        mov dword ptr ds : [esi+0x54], ecx
        public_6359cfd : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x50
        ret 0x14
        UNREACHABLE_TRAP(0x6359ae0)
    }
}

#undef public_6359c14
#undef public_6359c2e
#undef public_6359ce9
#undef public_6359ceb
#undef public_6359cfd
