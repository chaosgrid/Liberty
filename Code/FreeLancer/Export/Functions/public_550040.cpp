#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550040);

#define public_550146 _public_550146
#define public_55015d _public_55015d
#define public_550160 _public_550160

PROC_DECLARE(0x550040, internal_550040, public_550040);
extern "C" NAKED register_t __cdecl internal_550040()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ds : [public_5c71dc]
        push esi
        mov esi, ecx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        push edi
        mov dword ptr ds : [ecx+8], eax
        call ebx
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5e0bd8]
        fadd qword ptr ds : [public_5e0bd0]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [esi+0x18]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x14]
        call ebx
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0xC]
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        call ebx
        mov edi, dword ptr ss : [esp+0x3C]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ds : [esi+0x1C], eax
        call ebx
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5caeec]
        xor ebx, ebx
        xor ecx, ecx
        cmp edi, ebx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_5c7474]
        jle public_550160
        mov edx, dword ptr ss : [esp+0x38]
        public_550146 : nop
        fadd dword ptr ds : [edx+ecx*4]
        fld dword ptr ss : [esp+0x28]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_55015d
        inc ecx
        cmp ecx, edi
        jl public_550146
        jmp public_550160
        public_55015d : nop
        mov dword ptr ds : [esi+0x1C], ecx
        public_550160 : nop
        pop edi
        fstp st(0)
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x38], 0xBF800000
        pop esi
        pop ebx
        add esp, 0x18
        ret 0x18
        UNREACHABLE_TRAP(0x550040)
    }
}

#undef public_550146
#undef public_55015d
#undef public_550160
