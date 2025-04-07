#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_63687b0);

#define public_63687ce _public_63687ce
#define public_6368805 _public_6368805
#define public_636880b _public_636880b
#define public_6368822 _public_6368822
#define public_636882a _public_636882a
#define public_636883b _public_636883b
#define public_63688a4 _public_63688a4
#define public_6368931 _public_6368931
#define public_6368940 _public_6368940
#define public_6368946 _public_6368946
#define public_6368966 _public_6368966

PROC_DECLARE(0x63687b0, internal_63687b0, public_63687b0);
extern "C" NAKED register_t __cdecl internal_63687b0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0x20]
        xor edx, edx
        xor ebp, ebp
        cmp esi, edx
        mov dword ptr ss : [esp+0xC], ecx
        je public_6368966
        push ebx
        push edi
        public_63687ce : nop
        mov eax, dword ptr ss : [esp+0x3C]
        movsx eax, word ptr ds : [eax+0x40]
        cmp ebp, eax
        jl public_6368940
        mov eax, dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [eax+ebp*4]
        fcom dword ptr ds : [public_63a53d4]
        fst dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_636880b
        mov eax, dword ptr ds : [esi+0x64]
        cmp eax, edx
        jl public_6368805
        mov dword ptr ds : [esi+0x64], 0xFFFFFFFF
        jmp public_636883b
        public_6368805 : nop
        dec eax
        mov dword ptr ds : [esi+0x64], eax
        jmp public_636883b
        public_636880b : nop
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        je public_6368822
        fstp st(0)
        mov dword ptr ds : [esi+0x64], edx
        jmp public_6368940
        public_6368822 : nop
        cmp dword ptr ds : [esi+0x64], edx
        jge public_636882a
        mov dword ptr ds : [esi+0x64], edx
        public_636882a : nop
        mov edi, dword ptr ds : [esi+0x64]
        inc edi
        mov eax, edi
        cmp eax, 9
        mov dword ptr ds : [esi+0x64], edi
        jle public_636883b
        mov dword ptr ds : [esi+0x64], edx
        public_636883b : nop
        mov edi, dword ptr ds : [esi+0x40]
        mov ebx, dword ptr ds : [edi+0x70]
        cmp ebx, edx
        je public_63688a4
        fld dword ptr ds : [edi+0xB8]
        lea ecx, ds:[ebx+0x74]
        fmul dword ptr ds : [ebx+0x34]
        push ecx
        lea edx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+0xBC]
        fmul dword ptr ds : [ebx+0x38]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+0xC0]
        fmul dword ptr ds : [ebx+0x3C]
        fstp dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        call public_628be60
        fld dword ptr ds : [ebx+0x40]
        fmul dword ptr ss : [esp+0x10]
        lea ecx, ds:[ebx+0x84]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push edi
        push ecx
        call public_628be60
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        xor edx, edx
        public_63688a4 : nop
        mov eax, dword ptr ds : [edi+0x74]
        cmp eax, edx
        je public_6368931
        fld dword ptr ds : [edi+0xC8]
        fmul dword ptr ds : [eax+0x34]
        fld dword ptr ds : [edi+0xCC]
        fmul dword ptr ds : [eax+0x38]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+0xD0]
        fmul dword ptr ds : [eax+0x3C]
        fstp dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fadd dword ptr ds : [eax+0x74]
        fstp dword ptr ds : [eax+0x74]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fadd dword ptr ds : [eax+0x78]
        fstp dword ptr ds : [eax+0x78]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fadd dword ptr ds : [eax+0x7C]
        fstp dword ptr ds : [eax+0x7C]
        fld dword ptr ds : [eax+0x40]
        fmul st, st(1)
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fadd dword ptr ds : [eax+0x88]
        fld st(1)
        fmul dword ptr ds : [edi+8]
        fadd dword ptr ds : [eax+0x8C]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [edi]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x8C], edi
        fadd dword ptr ds : [eax+0x84]
        fstp dword ptr ds : [eax+0x84]
        fstp dword ptr ds : [eax+0x88]
        public_6368931 : nop
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6368946
        fstp st(0)
        public_6368940 : nop
        fld dword ptr ds : [public_63a53d4]
        public_6368946 : nop
        mov eax, dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [eax+4]
        inc ebp
        fstp dword ptr ds : [esi+0x54]
        mov esi, dword ptr ds : [esi]
        cmp esi, edx
        jne public_63687ce
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x28
        ret 4
        public_6368966 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x63687b0)
    }
}

#undef public_63687ce
#undef public_6368805
#undef public_636880b
#undef public_6368822
#undef public_636882a
#undef public_636883b
#undef public_63688a4
#undef public_6368931
#undef public_6368940
#undef public_6368946
#undef public_6368966
