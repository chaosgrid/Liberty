#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_507340);

#define public_5073a0 _public_5073a0
#define public_5074bd _public_5074bd
#define public_5074bf _public_5074bf
#define public_5074d4 _public_5074d4

PROC_DECLARE(0x507340, internal_507340, public_507340);
extern "C" NAKED register_t __cdecl internal_507340()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        fsub dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi+0xE0]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x1C], eax
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0xDC]
        xor edi, edi
        test eax, eax
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x28]
        jle public_5074d4
        lea ecx, ds:[edx+0x18]
        public_5073a0 : nop
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ecx-0x14]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ecx-0x10]
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        fmul dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x3C]
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+4]
        fld st(1)
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx-4]
        faddp 
        fabs 
        fcomp qword ptr ds : [public_5cbf58]
        fnstsw ax
        test ah, 0x41
        jne public_5074bd
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx]
        fsubp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx-4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx]
        fld st(3)
        fmul dword ptr ds : [ecx-4]
        fsubp 
        fst dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        fmul dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x3C]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        fld st(1)
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx-4], eax
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        fxch 
        fmul dword ptr ss : [esp+8]
        fsubp 
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], eax
        jmp public_5074bf
        public_5074bd : nop
        fstp st(0)
        public_5074bf : nop
        mov eax, dword ptr ds : [esi+0xDC]
        inc edi
        add edx, 0x20
        add ecx, 0x20
        cmp edi, eax
        jl public_5073a0
        public_5074d4 : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x507340)
    }
}

#undef public_5073a0
#undef public_5074bd
#undef public_5074bf
#undef public_5074d4
