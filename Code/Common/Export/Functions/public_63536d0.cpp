#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_63536d0);

#define public_63536f4 _public_63536f4
#define public_635371d _public_635371d
#define public_635373f _public_635373f
#define public_6353768 _public_6353768
#define public_63537d1 _public_63537d1
#define public_63537d7 _public_63537d7

PROC_DECLARE(0x63536d0, internal_63536d0, public_63536d0);
extern "C" NAKED register_t __cdecl internal_63536d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push esi
        mov esi, dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_63536f4
        mov ecx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ecx+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_63536f4 : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_635371d
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [eax+0x110]
        cmp edx, dword ptr ds : [ecx]
        jle public_635371d
        call public_634d640
        public_635371d : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [esi+0x40]
        push edi
        mov edi, dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [edi+0x40]
        test eax, eax
        jne public_635373f
        mov ecx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [ecx+0x94]
        push edi
        call public_634d530
        mov dword ptr ds : [edi+0x40], eax
        public_635373f : nop
        mov eax, dword ptr ds : [edi+0x40]
        inc dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_6353768
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x40]
        mov edx, dword ptr ds : [eax+0x110]
        cmp edx, dword ptr ds : [ecx]
        jle public_6353768
        call public_634d640
        public_6353768 : nop
        mov ecx, dword ptr ds : [edi+0x40]
        fld dword ptr ds : [esi+0x50]
        fsub dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [esi+0x54]
        add eax, 0x60
        fsub dword ptr ds : [ecx+0x54]
        pop edi
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [ecx+0x4C]
        mov dword ptr ds : [eax+8], edx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ebx]
        fld dword ptr ds : [edx+0x68]
        fld dword ptr ds : [edx+0x64]
        fld dword ptr ds : [edx+0x60]
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
        fld st(0)
        fabs 
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_63537d1
        fld st(0)
        fsqrt 
        fdivr dword ptr ds : [public_63a53d0]
        jmp public_63537d7
        public_63537d1 : nop
        fld dword ptr ds : [public_63a53d0]
        public_63537d7 : nop
        fld st(0)
        fmul st, st(2)
        fsub dword ptr ds : [edx+0x50]
        fstp dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [ebx]
        add eax, 0x60
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx]
        fstp st(0)
        fld dword ptr ds : [esi+0x5C]
        fsub dword ptr ds : [ecx+0x5C]
        fld dword ptr ds : [esi+0x60]
        fsub dword ptr ds : [ecx+0x60]
        fld dword ptr ds : [esi+0x64]
        fsub dword ptr ds : [ecx+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        dec dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        pop esi
        mov dword ptr ds : [ecx+4], eax
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63536d0)
    }
}

#undef public_63536f4
#undef public_635371d
#undef public_635373f
#undef public_6353768
#undef public_63537d1
#undef public_63537d7
