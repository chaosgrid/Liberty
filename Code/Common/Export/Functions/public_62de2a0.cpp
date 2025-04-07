#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62de2a0);

#define public_62de2d1 _public_62de2d1
#define public_62de3cb _public_62de3cb
#define public_62de478 _public_62de478
#define public_62de482 _public_62de482

PROC_DECLARE(0x62de2a0, internal_62de2a0, public_62de2a0);
extern "C" NAKED register_t __cdecl internal_62de2a0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x10], ebx
        lea esi, ds:[ecx+8]
        mov ebp, 0x19
        public_62de2d1 : nop
        fld dword ptr ds : [esi-8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62de3cb
        fld dword ptr ds : [edi+0x2C]
        sub esp, 0xC
        fsub dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x28]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0x24]
        fsub dword ptr ds : [esi-4]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x38]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd st(0), st
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x10]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        inc ebx
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x28]
        public_62de3cb : nop
        add esi, 0x1C
        dec ebp
        jne public_62de2d1
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+4], ebx
        test ebx, ebx
        pop ebx
        jle public_62de482
        fild dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, ecx
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fmul st, st(1)
        mov dword ptr ds : [eax], edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        fmul st, st(1)
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fstp st(0)
        mov dword ptr ds : [eax+8], edx
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
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
        fcom qword ptr ds : [public_639f418]
        fnstsw ax
        test ah, 0x41
        jne public_62de478
        fsqrt 
        mov al, 1
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        add esp, 0x34
        ret 8
        public_62de478 : nop
        fstp st(0)
        mov al, 1
        add esp, 0x34
        ret 8
        public_62de482 : nop
        xor al, al
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x62de2a0)
    }
}

#undef public_62de2d1
#undef public_62de3cb
#undef public_62de478
#undef public_62de482
