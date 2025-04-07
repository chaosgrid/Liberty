#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444f90);

#define public_445023 _public_445023
#define public_445050 _public_445050
#define public_445092 _public_445092
#define public_4450aa _public_4450aa
#define public_4450f9 _public_4450f9
#define public_4450fe _public_4450fe
#define public_445102 _public_445102
#define public_445118 _public_445118
#define public_445140 _public_445140

PROC_DECLARE(0x444f90, internal_444f90, public_444f90);
extern "C" NAKED register_t __cdecl internal_444f90()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        call dword ptr ds : [eax+0x18]
        cmp eax, 0xFFFFFFFF
        mov esi, dword ptr ss : [esp+0x44]
        je public_445023
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], ecx
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x3C], edx
        fsub dword ptr ss : [esp+0x3C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_445023 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x20]
        fild dword ptr ds : [public_610850]
        xor eax, eax
        lea ecx, ds:[edi+0x1C0]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ecx
        lea esp, ss:[esp]
        public_445050 : nop
        mov ecx, dword ptr ds : [edi+ebx*4+0x34]
        test ecx, ecx
        jle public_445118
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ds : [edi+ebx*4+0x144]
        call dword ptr ds : [public_5c61d8]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [edi+ebx*4+0x34]
        or ecx, 0xFFFFFFFF
        xor esi, esi
        test edx, edx
        jle public_445102
        mov eax, ebx
        shl eax, 6
        lea ebp, ds:[eax+edi+0x44]
        public_445092 : nop
        fld dword ptr ss : [ebp]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 1
        je public_4450aa
        inc esi
        add ebp, 4
        cmp esi, edx
        jl public_445092
        jmp public_445102
        public_4450aa : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ecx
        je public_445102
/*FIXUP push offset public_5cb918 @0x4450b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb918
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_4450fe
        mov ecx, dword ptr ds : [edi+ebx*4+0x144]
        push 0x42C80000
        call dword ptr ds : [public_5c61a0]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 5
        jp public_4450fe
        mov eax, dword ptr ds : [edi+ebx*4+0x34]
        lea ecx, ds:[esi+1]
        cmp ecx, eax
        jl public_445102
        test ebx, ebx
        jne public_4450f9
        mov ecx, dword ptr ds : [edi+0x34]
        dec ecx
        jmp public_445102
        public_4450f9 : nop
        or ecx, 0xFFFFFFFF
        jmp public_445102
        public_4450fe : nop
        mov ecx, dword ptr ss : [esp+0x24]
        public_445102 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        mov dword ptr ds : [edx], ecx
        add edx, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edx
        public_445118 : nop
        inc ebx
        cmp ebx, 4
        jl public_445050
        cmp eax, 4
        jge public_445140
        mov ecx, 4
        lea edi, ds:[edi+eax*4+0x1C0]
        sub ecx, eax
        or eax, 0xFFFFFFFF
        rep stosd
        lea ebx, ds:[ebx]
        public_445140 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x444f90)
    }
}

#undef public_445023
#undef public_445050
#undef public_445092
#undef public_4450aa
#undef public_4450f9
#undef public_4450fe
#undef public_445102
#undef public_445118
#undef public_445140
