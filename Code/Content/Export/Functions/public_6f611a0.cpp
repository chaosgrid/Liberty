#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);

#define public_6f6125e _public_6f6125e
#define public_6f612ab _public_6f612ab
#define public_6f612d1 _public_6f612d1

PROC_DECLARE(0x6f611a0, internal_6f611a0, public_6f611a0);
extern "C" NAKED register_t __cdecl internal_6f611a0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov ebx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+8]
        sub esp, 0xC
        fsub dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fdivp 
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 0x41
        jne public_6f612ab
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ebx]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [ebx+8]
        public_6f6125e : nop
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x14]
        pop edi
        fmul dword ptr ss : [esp+0x10]
        pop esi
        fld dword ptr ss : [esp+8]
        pop ebx
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        add esp, 0x18
        ret 
        public_6f612ab : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, eax
        jp public_6f612d1
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [edi+8]
        jmp public_6f6125e
        public_6f612d1 : nop
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [eax]
        pop edi
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+8]
        pop esi
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        pop ebx
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f611a0)
    }
}

#undef public_6f6125e
#undef public_6f612ab
#undef public_6f612d1
