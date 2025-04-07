#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4f60);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62e7820);

#define public_62e7850 _public_62e7850
#define public_62e786d _public_62e786d
#define public_62e792d _public_62e792d
#define public_62e7939 _public_62e7939
#define public_62e793d _public_62e793d
#define public_62e797a _public_62e797a
#define public_62e7998 _public_62e7998
#define public_62e7a02 _public_62e7a02
#define public_62e7a04 _public_62e7a04
#define public_62e7a1b _public_62e7a1b

PROC_DECLARE(0x62e7820, internal_62e7820, public_62e7820);
extern "C" NAKED register_t __cdecl internal_62e7820()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        add ecx, 0x34
        call public_62e7580
        mov esi, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0xC], 0x7F7FFFFF
        je public_62e7a1b
        push ebp
        push edi
        lea esp, ss:[esp]
        public_62e7850 : nop
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e786d
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62e786d : nop
        test dword ptr ds : [esi+8], 0x7F0000
        je public_62e7a04
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62e7a04
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x74]
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        je public_62e7a04
        mov eax, dword ptr ds : [ebx+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp eax, ebp
        jne public_62e7a04
        mov ecx, dword ptr ds : [ebx+4]
        push 0
        add ecx, 0x14FC
        push ecx
        push esi
        call public_62e4f60
        add esp, 0xC
        test al, al
        je public_62e7a04
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        jne public_62e793d
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x84]
        lea edi, ds:[esi+4]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi], 0
        je public_62e792d
        test eax, eax
        je public_62e792d
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push esi
        call dword ptr ds : [edx+0x6C]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x13], al
        jne public_62e7939
        public_62e792d : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [edi], 0
        public_62e7939 : nop
        mov byte ptr ds : [esi+0x7C], 1
        public_62e793d : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_63a0794]
        fnstsw ax
        test ah, 0x41
        jp public_62e7a04
        mov edi, dword ptr ds : [ebx+4]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62e797a
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e797a : nop
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e7998
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e7998 : nop
        fld dword ptr ds : [esi+0xC]
        mov ecx, 0x5F3759DF
        fsub dword ptr ds : [edi+0xC]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [edi+0x10]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edi+0x14]
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
        fst dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x18]
        fmulp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_62e7a02
        fstp dword ptr ss : [esp+0x14]
        jmp public_62e7a04
        public_62e7a02 : nop
        fstp st(0)
        public_62e7a04 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62e7850
        pop edi
        pop ebp
        public_62e7a1b : nop
        fld dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62e7820)
    }
}

#undef public_62e7850
#undef public_62e786d
#undef public_62e792d
#undef public_62e7939
#undef public_62e793d
#undef public_62e797a
#undef public_62e7998
#undef public_62e7a02
#undef public_62e7a04
#undef public_62e7a1b
