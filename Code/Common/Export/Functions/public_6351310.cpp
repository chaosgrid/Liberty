#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6351010);
CLANG_FORWARD_PROC_SYMBOL(public_6351310);
CLANG_FORWARD_PROC_SYMBOL(public_6351700);
CLANG_FORWARD_PROC_SYMBOL(public_6351a50);
CLANG_FORWARD_PROC_SYMBOL(public_6352140);

#define public_6351336 _public_6351336
#define public_635135a _public_635135a
#define public_635136b _public_635136b
#define public_635136d _public_635136d
#define public_6351385 _public_6351385
#define public_6351399 _public_6351399
#define public_635139b _public_635139b
#define public_63513b3 _public_63513b3
#define public_63513c7 _public_63513c7
#define public_63513de _public_63513de
#define public_6351411 _public_6351411
#define public_6351413 _public_6351413
#define public_6351449 _public_6351449
#define public_6351646 _public_6351646
#define public_63516e3 _public_63516e3
#define public_63516f4 _public_63516f4

PROC_DECLARE(0x6351310, internal_6351310, public_6351310);
extern "C" NAKED register_t __cdecl internal_6351310()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6351336
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6351449
        public_6351336 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov ebp, dword ptr ds : [eax+0x24]
        lea ebx, ds:[esi+0x94]
        je public_63513c7
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_635135a
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx], ecx
        jmp public_635136d
        public_635135a : nop
        fld dword ptr ds : [ecx]
        fchs 
        fcom dword ptr ds : [ebx]
        fnstsw ax
        test ah, 0x41
        jne public_635136b
        fstp dword ptr ds : [ebx]
        jmp public_635136d
        public_635136b : nop
        fstp st(0)
        public_635136d : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6351385
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx+4], edx
        jmp public_635139b
        public_6351385 : nop
        fld dword ptr ds : [ecx+4]
        fchs 
        fcom dword ptr ds : [ebx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6351399
        fstp dword ptr ds : [ebx+4]
        jmp public_635139b
        public_6351399 : nop
        fstp st(0)
        public_635139b : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x41
        jne public_63513b3
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ebx+8], eax
        jmp public_6351413
        public_63513b3 : nop
        fld dword ptr ds : [ecx+8]
        fchs 
        fcom dword ptr ds : [ebx+8]
        fnstsw ax
        test ah, 0x41
        jne public_6351411
        fstp dword ptr ds : [ebx+8]
        jmp public_6351413
        public_63513c7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_63513de
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6351413
        public_63513de : nop
        mov ecx, ebx
        call public_62c4780
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+0xB0]
        fmul dword ptr ss : [ebp+0x10]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6351413
        mov ecx, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        push ebp
        call dword ptr ds : [edx+4]
        jmp public_6351413
        public_6351411 : nop
        fstp st(0)
        public_6351413 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x10], eax
        call public_62c4780
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6351449
        mov ecx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xA4]
        push eax
        push esi
        push ebp
        call dword ptr ds : [edx]
        public_6351449 : nop
        mov ecx, dword ptr ds : [edi]
        add ecx, 0xA4
        call public_6347e60
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [esp+0x34]
        fstp dword ptr ds : [eax+0x144]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x34], ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [edx+0x70], eax
        mov edx, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        mov ecx, edi
        call public_6351700
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+0x68]
        mov edx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx+0xF8]
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [eax+0x68], edx
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ds : [eax+0x6C], ecx
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[eax+0xB4]
        push edx
        add eax, 0xC4
        push eax
        push ecx
        call public_628be60
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [eax+0xAC]
        fld dword ptr ds : [eax+0xA4]
        mov edx, ecx
        mov dword ptr ds : [eax+0xCC], edx
        fstp dword ptr ds : [eax+0xC4]
        mov dword ptr ss : [esp+0x34], ecx
        fstp dword ptr ds : [eax+0xC8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[eax+0xE4]
        mov edx, dword ptr ds : [ecx]
        add eax, 0xD4
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        fmul dword ptr ds : [eax+0xF0]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0xE8]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+0xEC]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax+0xE4]
        fsubp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax+0xF0]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+0xE4]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0xEC]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+0xE8]
        fsubp 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [eax+0xF0]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+0xE4]
        fsubp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+0xE8]
        fsubp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax+0xEC]
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax+0xE8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+0xF0]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax+0xE4]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [eax+0xEC]
        mov dword ptr ds : [eax+0xF0], ecx
        mov dword ptr ds : [eax+0xEC], edx
        fsubp 
        fstp dword ptr ds : [eax+0xE4]
        fstp dword ptr ds : [eax+0xE8]
        mov ecx, dword ptr ds : [edi]
        add ecx, 0xE4
        call public_6351010
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6351a50
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [eax+0x14C]
        xor ebp, ebp
        mov bp, word ptr ds : [eax+0x52]
        fadd dword ptr ds : [eax+0x144]
        dec ebp
        js public_63516f4
        fmul dword ptr ds : [public_63a5638]
        fstp dword ptr ss : [esp+0x34]
        public_6351646 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x54]
        fld dword ptr ds : [eax+0x144]
        mov esi, dword ptr ds : [ecx+ebp*4]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0xF8]
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov edx, dword ptr ds : [ebx]
        add esi, 0x44
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        fld st(0)
        fmul dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+8], edx
        fadd dword ptr ds : [esi+0x10]
        fstp dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [esi+0x14]
        fstp dword ptr ds : [esi+0x14]
        fstp dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x10]
        fst dword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0x28]
        fsub st, st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        fstp st(0)
        test ah, 1
        je public_63516e3
        mov ecx, dword ptr ss : [esp+0x38]
        call public_6352140
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax+4]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+2]
        mov dword ptr ds : [edx+ecx*4], esi
        inc word ptr ds : [eax+2]
        public_63516e3 : nop
        dec ebp
        jns public_6351646
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        public_63516f4 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6351310)
    }
}

#undef public_6351336
#undef public_635135a
#undef public_635136b
#undef public_635136d
#undef public_6351385
#undef public_6351399
#undef public_635139b
#undef public_63513b3
#undef public_63513c7
#undef public_63513de
#undef public_6351411
#undef public_6351413
#undef public_6351449
#undef public_6351646
#undef public_63516e3
#undef public_63516f4
