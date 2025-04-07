#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62e4f60);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);

#define public_62e5007 _public_62e5007
#define public_62e5025 _public_62e5025
#define public_62e50ae _public_62e50ae
#define public_62e50bf _public_62e50bf
#define public_62e514b _public_62e514b
#define public_62e5160 _public_62e5160
#define public_62e5182 _public_62e5182
#define public_62e5184 _public_62e5184

PROC_DECLARE(0x62e4f60, internal_62e4f60, public_62e4f60);
extern "C" NAKED register_t __cdecl internal_62e4f60()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_628b030
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_62c5a70
        mov edi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [edi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        call public_628b030
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_62c5a70
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        faddp 
        fstp dword ptr ss : [esp+0x40]
        jne public_62e5007
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e5007 : nop
        mov al, byte ptr ds : [edi+0x7E]
        test al, al
        jne public_62e5025
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e5025 : nop
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+8]
        fsub dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e50ae
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jmp public_62e50bf
        public_62e50ae : nop
        push 0
        fstp st(0)
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        call public_636cf40
        public_62e50bf : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x38]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        call public_62c47a0
        fcom dword ptr ds : [public_639a1d0]
        add esp, 8
        pop edi
        pop esi
        fnstsw ax
        test ah, 0x41
        jne public_62e514b
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e5160
        public_62e514b : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e5160
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e5160 : nop
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e5182
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 5
        jp public_62e5184
        mov al, 1
        add esp, 0x30
        ret 
        public_62e5182 : nop
        fstp st(0)
        public_62e5184 : nop
        xor al, al
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x62e4f60)
    }
}

#undef public_62e5007
#undef public_62e5025
#undef public_62e50ae
#undef public_62e50bf
#undef public_62e514b
#undef public_62e5160
#undef public_62e5182
#undef public_62e5184
