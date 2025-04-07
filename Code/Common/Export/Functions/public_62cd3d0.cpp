#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec970);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cd3fc _public_62cd3fc
#define public_62cd3fe _public_62cd3fe
#define public_62cd40a _public_62cd40a
#define public_62cd482 _public_62cd482
#define public_62cd484 _public_62cd484
#define public_62cd4a3 _public_62cd4a3
#define public_62cd4ac _public_62cd4ac

PROC_DECLARE(0x62cd3d0, internal_62cd3d0, public_62cd3d0);
extern "C" NAKED register_t __cdecl internal_62cd3d0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        mov esi, ecx
        je public_62cd4ac
        mov ecx, dword ptr ds : [esi+0x24]
        lea eax, ds:[edi+0xC]
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        lea ebx, ds:[esi+0x2C]
        je public_62cd3fc
        add eax, 8
        jmp public_62cd3fe
        public_62cd3fc : nop
        xor eax, eax
        public_62cd3fe : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62cd40a
        push eax
        mov ecx, ebx
        call public_6341610
        public_62cd40a : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62cd4a3
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cd4a3
        lea eax, ds:[esi+0x290]
        push ebp
        lea ecx, ds:[edi+0x14]
        mov ebp, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [eax]
        add ecx, 4
        fld st(0)
        push eax
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ds : [esi+0x2A8]
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x2A0], edx
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        pop ebp
        je public_62cd482
        add eax, 0xFFFFFFF8
        jmp public_62cd484
        public_62cd482 : nop
        xor eax, eax
        public_62cd484 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x1364
        call public_62ec970
        mov al, byte ptr ds : [esi+0x28]
        or al, 2
        pop edi
        mov byte ptr ds : [esi+0x28], al
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_62cd4a3 : nop
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x2B4], eax
        public_62cd4ac : nop
        mov al, byte ptr ds : [esi+0x28]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x28], al
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62cd3d0)
    }
}

#undef public_62cd3fc
#undef public_62cd3fe
#undef public_62cd40a
#undef public_62cd482
#undef public_62cd484
#undef public_62cd4a3
#undef public_62cd4ac
