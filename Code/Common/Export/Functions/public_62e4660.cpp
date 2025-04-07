#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4660);
CLANG_FORWARD_PROC_SYMBOL(public_62e4910);

#define public_62e46ac _public_62e46ac
#define public_62e4751 _public_62e4751
#define public_62e4882 _public_62e4882
#define public_62e48e5 _public_62e48e5

PROC_DECLARE(0x62e4660, internal_62e4660, public_62e4660);
extern "C" NAKED register_t __cdecl internal_62e4660()
{
    __asm
    {
        sub esp, 0x6C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x78]
        mov al, byte ptr ds : [esi+0x7F]
        test al, al
        push edi
        jne public_62e46ac
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x58]
        mov byte ptr ds : [esi+0x7F], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0x1C]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x5C]
        push eax
        call dword ptr ds : [edx+0x10]
        push eax
        call public_62e4910
        add esp, 0x10
        public_62e46ac : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ebp, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        lea edi, ds:[eax+0x24]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jne public_62e4751
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e4751 : nop
        fld dword ptr ds : [esi+0x18]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x60]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x1C]
        push edi
        push ecx
        call public_62887d0
        mov edx, dword ptr ss : [ebp]
        add esp, 0xC
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x64], edx
        lea edx, ss:[esp+0x7C]
        push edx
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x78], ecx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x88], 0
        call dword ptr ds : [edx+0x10]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_62dffd0
        add esp, 0x18
        cmp eax, 1
        je public_62e4882
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [edi]
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [edi+8]
        pop edi
        fld st(0)
        pop esi
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        pop ebp
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x70]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x70], eax
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x70]
        fmulp 
        add esp, 0x6C
        ret 
        public_62e4882 : nop
        fld dword ptr ss : [esp+0x48]
        mov al, byte ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x18]
        mov edx, 0x5F3759DF
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x80]
        sar ecx, 1
        sub edx, ecx
        test al, al
        mov dword ptr ss : [esp+0x80], edx
        je public_62e48e5
        pop edi
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        pop esi
        pop ebp
        add esp, 0x6C
        ret 
        public_62e48e5 : nop
        fld dword ptr ss : [esp+0x80]
        pop edi
        fmul dword ptr ss : [esp+0x7C]
        pop esi
        pop ebp
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x74]
        fmulp 
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x62e4660)
    }
}

#undef public_62e46ac
#undef public_62e4751
#undef public_62e4882
#undef public_62e48e5
