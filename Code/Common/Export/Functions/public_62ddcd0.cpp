#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_62ddcd0);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);

#define public_62ddcf8 _public_62ddcf8
#define public_62ddcfa _public_62ddcfa
#define public_62ddd69 _public_62ddd69
#define public_62ddde1 _public_62ddde1
#define public_62dddf8 _public_62dddf8
#define public_62dde6a _public_62dde6a
#define public_62dde70 _public_62dde70
#define public_62ddf02 _public_62ddf02
#define public_62ddf04 _public_62ddf04
#define public_62ddfb7 _public_62ddfb7
#define public_62ddfed _public_62ddfed
#define public_62de032 _public_62de032

PROC_DECLARE(0x62ddcd0, internal_62ddcd0, public_62ddcd0);
extern "C" NAKED register_t __cdecl internal_62ddcd0()
{
    __asm
    {
        sub esp, 0x4C
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        push edi
        je public_62de032
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ddcf8
        add eax, 0xFFFFFFF8
        jmp public_62ddcfa
        public_62ddcf8 : nop
        xor eax, eax
        public_62ddcfa : nop
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_62e60e0
        fld dword ptr ds : [public_6399408]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        sub eax, 0
        je public_62ddf02
        dec eax
        je public_62ddd69
        dec eax
        jne public_62ddfb7
        mov ecx, dword ptr ds : [esi+0x1C0]
        fstp st(0)
        mov ecx, dword ptr ds : [ecx+0xEC]
        test ecx, ecx
        je public_62de032
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x60]
        push eax
        call dword ptr ds : [edx+4]
        test eax, eax
        je public_62de032
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_62ddf04
        public_62ddd69 : nop
        push ebx
        fstp st(0)
        lea edi, ds:[esi+0x24]
        lea ecx, ds:[edi+0x24]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edi
        push edx
        call public_62dbb90
        add esp, 0x18
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, edi
        call public_62dba00
        lea edx, ss:[esp+0x4C]
        mov bl, al
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        add esp, 0xC
        test bl, bl
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        jne public_62ddde1
        fchs 
        public_62ddde1 : nop
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jp public_62dddf8
        mov dword ptr ss : [esp+0xC], 0
        jmp public_62dde70
        public_62dddf8 : nop
        lea edx, ds:[edi+0x24]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_6288800
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x44]
        push edi
        push eax
        call public_62dbb90
        add esp, 0x18
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, edi
        call public_62dba00
        mov bl, al
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        add esp, 0xC
        test bl, bl
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        jne public_62dde6a
        fchs 
        public_62dde6a : nop
        fsqrt 
        fstp dword ptr ss : [esp+0xC]
        public_62dde70 : nop
        fld dword ptr ds : [esi+0x50]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x4C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x48]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        faddp 
        pop ebx
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        jmp public_62ddfb7
        public_62ddf02 : nop
        fstp st(0)
        public_62ddf04 : nop
        lea edi, ds:[esi+0x14]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        add esp, 0xC
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fsub dword ptr ds : [edi+0xC]
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], edx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        public_62ddfb7 : nop
        fcomp qword ptr ds : [public_639c430]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        fnstsw ax
        jne public_62ddfed
        test ah, 0x41
        jne public_62de032
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        pop edi
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        pop esi
        add esp, 0x4C
        ret 4
        public_62ddfed : nop
        test ah, 5
        jp public_62de032
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x58]
        fchs 
        pop edi
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        fchs 
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x24]
        fchs 
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+8], edx
        xor eax, eax
        pop esi
        add esp, 0x4C
        ret 4
        public_62de032 : nop
        pop edi
        mov eax, 2
        pop esi
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x62ddcd0)
    }
}

#undef public_62ddcf8
#undef public_62ddcfa
#undef public_62ddd69
#undef public_62ddde1
#undef public_62dddf8
#undef public_62dde6a
#undef public_62dde70
#undef public_62ddf02
#undef public_62ddf04
#undef public_62ddfb7
#undef public_62ddfed
#undef public_62de032
