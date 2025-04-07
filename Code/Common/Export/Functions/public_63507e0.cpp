#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bea0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_6350630);
CLANG_FORWARD_PROC_SYMBOL(public_6350690);
CLANG_FORWARD_PROC_SYMBOL(public_63507e0);
CLANG_FORWARD_PROC_SYMBOL(public_635d360);

#define public_63508a2 _public_63508a2
#define public_635092c _public_635092c
#define public_6350955 _public_6350955
#define public_63509b6 _public_63509b6
#define public_63509dd _public_63509dd
#define public_63509f1 _public_63509f1
#define public_6350a01 _public_6350a01
#define public_6350a08 _public_6350a08
#define public_6350a23 _public_6350a23
#define public_6350a2e _public_6350a2e
#define public_6350a36 _public_6350a36
#define public_6350a51 _public_6350a51

PROC_DECLARE(0x63507e0, internal_63507e0, public_63507e0);
extern "C" NAKED register_t __cdecl internal_63507e0()
{
    __asm
    {
        sub esp, 0x40
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [edi+0x220]
        push ebp
        call public_635d360
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63a5460]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x54]
        fst dword ptr ss : [esp+0x2C]
        fst dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x34]
        fld st(0)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [ecx]
        fabs 
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edx]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6350a51
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [ecx+4]
        fabs 
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [edx+4]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6350a51
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ecx+8]
        fabs 
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [edx+8]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6350a51
        push ebx
        xor ebx, ebx
        cmp word ptr ss : [ebp+0x22], bx
        mov dword ptr ss : [esp+0x10], ebx
        jbe public_6350a23
        public_63508a2 : nop
        mov edx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [edx+ebx*4]
        mov esi, dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0x218]
        add eax, 0x124
        push eax
        lea eax, ds:[edi+0x208]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x20], edx
        call public_628bea0
        fld dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x1C]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_6350a08
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_635092c
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_635092c : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_6350955
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_6350955
        call public_634d640
        public_6350955 : nop
        mov ebx, dword ptr ds : [esi+0x40]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea eax, ds:[edi+0x208]
        push eax
        mov ecx, ebx
        call public_634d860
        mov edx, dword ptr ds : [edi+0x218]
        mov ecx, dword ptr ds : [edi+0x21C]
        mov dword ptr ds : [public_658ab48], 0
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 2
        mov dword ptr ss : [esp+0x54], edx
        jne public_63509b6
        mov eax, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edx
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax+0x20]
        lea edx, ss:[esp+0x2C]
        push edx
        add ecx, eax
        push ecx
        call public_6350690
        mov eax, dword ptr ds : [public_658ab48]
        add esp, 0x14
        jmp public_63509dd
        public_63509b6 : nop
        cmp eax, 3
        jne public_6350a01
        mov eax, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [eax+4]
        push edx
        add eax, 0x124
        push eax
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_6350630
        add esp, 0x10
        public_63509dd : nop
        test eax, eax
        je public_6350a01
        mov dx, word ptr ds : [edi+2]
        cmp dx, word ptr ds : [edi]
        jb public_63509f1
        mov ecx, edi
        call public_63441a0
        public_63509f1 : nop
        mov ecx, dword ptr ds : [edi+4]
        xor eax, eax
        mov ax, word ptr ds : [edi+2]
        mov dword ptr ds : [ecx+eax*4], esi
        inc word ptr ds : [edi+2]
        public_6350a01 : nop
        dec dword ptr ds : [ebx+4]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6350a08 : nop
        xor edx, edx
        mov dx, word ptr ss : [ebp+0x22]
        inc ebx
        mov dword ptr ss : [esp+0x10], ebx
        cmp ebx, edx
        jl public_63508a2
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        public_6350a23 : nop
        xor esi, esi
        cmp word ptr ss : [ebp+0x1A], si
        pop ebx
        jbe public_6350a51
        jmp public_6350a36
        public_6350a2e : nop
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x58]
        public_6350a36 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [eax+esi*4]
        push edx
        push ecx
        mov ecx, edi
        call public_63507e0
        xor edx, edx
        mov dx, word ptr ss : [ebp+0x1A]
        inc esi
        cmp esi, edx
        jl public_6350a2e
        public_6350a51 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x63507e0)
    }
}

#undef public_63508a2
#undef public_635092c
#undef public_6350955
#undef public_63509b6
#undef public_63509dd
#undef public_63509f1
#undef public_6350a01
#undef public_6350a08
#undef public_6350a23
#undef public_6350a2e
#undef public_6350a36
#undef public_6350a51
