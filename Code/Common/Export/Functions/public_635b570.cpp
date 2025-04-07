#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_635b030);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_635b570);
CLANG_FORWARD_PROC_SYMBOL(public_635ba10);

#define public_635b6d3 _public_635b6d3
#define public_635b76a _public_635b76a
#define public_635b7df _public_635b7df
#define public_635b7e1 _public_635b7e1
#define public_635b833 _public_635b833
#define public_635b8aa _public_635b8aa
#define public_635b8ac _public_635b8ac

PROC_DECLARE(0x635b570, internal_635b570, public_635b570);
extern "C" NAKED register_t __cdecl internal_635b570()
{
    __asm
    {
        sub esp, 0x80
        push esi
        mov esi, dword ptr ss : [esp+0x88]
        fld dword ptr ds : [esi+0x60]
        push edi
        fld dword ptr ds : [esi+0x5C]
        lea edi, ds:[esi+0x58]
        fld dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a5610]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_635b6d3
        push edi
        lea eax, ds:[esi+0x28]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_628bed0
        push edi
        lea ecx, ds:[esi+0x38]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_628bed0
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x90]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0x10]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+8]
        faddp 
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+0x10]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+0x20]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x18]
        mov esi, dword ptr ds : [esi]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi]
        faddp 
        pop edi
        pop esi
        fstp dword ptr ss : [esp]
        fld st(0)
        fsub dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp]
        fsub dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+4]
        mov eax, 1
        add esp, 0x80
        ret 
        public_635b6d3 : nop
        mov edx, dword ptr ds : [esi+0x54]
        mov edi, dword ptr ss : [esp+0x90]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], 0x60AD78EC
        mov dword ptr ss : [esp+0x5C], 0xBF800000
        mov dword ptr ss : [esp+0x60], 0x3F000000
        mov dword ptr ss : [esp+0x64], 0x40000000
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x70], 0xBA83126F
        mov dword ptr ss : [esp+0x74], 0x3A83126F
        mov dword ptr ss : [esp+0x78], 0x3F7FBE77
        mov dword ptr ss : [esp+0x7C], 0x3F8020C5
        mov dword ptr ss : [esp+0x80], 0xB58637BD
        mov dword ptr ss : [esp+0x84], 0x358637BD
        mov dword ptr ss : [esp+0x88], 0x3F7FFFEF
        mov dword ptr ss : [esp+0x8C], 0x3F800008
        lea ebx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x10], 0xB
        public_635b76a : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], eax
        push ecx
        lea eax, ds:[esi+0x18]
        push eax
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6347e00
        mov eax, dword ptr ds : [esi+0x4C]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        push ebp
        call public_635ba10
        fcom dword ptr ss : [esp+0x24]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_635b7df
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_63a53d0]
        lea edx, ss:[esp+0x1C]
        fsub dword ptr ss : [esp+0x14]
        push edx
        lea eax, ss:[esp+0x30]
        mov dword ptr ds : [edi], ecx
        fstp dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        push ecx
        push ebp
        call public_635b150
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x10
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], eax
        jmp public_635b7e1
        public_635b7df : nop
        fstp st(0)
        public_635b7e1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_635b76a
        mov edx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [esi+0x54]
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push ecx
        call public_635b030
        mov eax, dword ptr ds : [esi+0x50]
        mov ecx, dword ptr ds : [esi+0x54]
        lea edx, ss:[esp+0x5C]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        call public_635b030
        mov eax, dword ptr ds : [esi+0x50]
        mov ebp, dword ptr ds : [eax+4]
        add esp, 0x20
        lea ebx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x10], 9
        public_635b833 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, ecx
        push edx
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_6347e00
        mov eax, dword ptr ds : [esi+0x48]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        push ebp
        call public_635ba10
        fcom dword ptr ss : [esp+0x24]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_635b8aa
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_63a53d0]
        lea edx, ss:[esp+0x1C]
        fsub dword ptr ss : [esp+0x14]
        push edx
        lea eax, ss:[esp+0x30]
        mov dword ptr ds : [edi+8], ecx
        fstp dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [esi+0x48]
        push eax
        push ecx
        push ebp
        call public_635b150
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x10
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edi+4], eax
        jmp public_635b8ac
        public_635b8aa : nop
        fstp st(0)
        public_635b8ac : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_635b833
        pop ebp
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x635b570)
    }
}

#undef public_635b6d3
#undef public_635b76a
#undef public_635b7df
#undef public_635b7e1
#undef public_635b833
#undef public_635b8aa
#undef public_635b8ac
