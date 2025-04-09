#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb80);

#define public_40fccb _public_40fccb
#define public_40fd5a _public_40fd5a

PROC_DECLARE(0x40fb80, internal_40fb80, public_40fb80);
extern "C" NAKED register_t __cdecl internal_40fb80()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        lea eax, ds:[ecx+0xAC]
        push edi
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0xB4]
        sub edx, eax
        inc edx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ecx+0xB8]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [ecx+0xB0]
        sub edx, eax
        inc edx
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        fld st(1)
        mov esi, 0x3F800000
        xor edx, edx
        fdiv st, st(1)
        fst dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0xA0]
        fxch 
        fmul qword ptr ds : [public_5c75e8]
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ecx+0x70]
        fmul qword ptr ds : [public_5c75e8]
        fst dword ptr ds : [ecx+0x74]
        fild dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ecx+0x68]
        fild dword ptr ss : [esp+0xC]
        fadd st, st(1)
        fstp dword ptr ds : [ecx+0x6C]
        fstp st(0)
        fld dword ptr ds : [ecx+0x98]
        fst dword ptr ds : [ecx+0x98]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fdivr st, st(1)
        fst dword ptr ss : [esp+0x18]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x9C]
        mov dword ptr ds : [ecx+0x80], esi
        mov dword ptr ds : [ecx+0x84], edx
        fst dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x84]
        fld dword ptr ds : [ecx+0x80]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x80]
        fstp dword ptr ds : [ecx+0x80]
        fld st(0)
        fmul dword ptr ds : [ecx+0x84]
        fstp dword ptr ds : [ecx+0x84]
        fmul dword ptr ds : [ecx+0x88]
        fstp dword ptr ds : [ecx+0x88]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40fccb
        fld dword ptr ds : [ecx+0x70]
        fdiv st, st(1)
        fstp dword ptr ds : [ecx+0x78]
        public_40fccb : nop
        mov eax, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov dword ptr ds : [ecx+0x90], esi
        mov dword ptr ds : [ecx+0x94], eax
        mov dword ptr ds : [ecx+0x8C], edx
        fld dword ptr ds : [ecx+0x94]
        fld dword ptr ds : [ecx+0x90]
        pop edi
        fld dword ptr ds : [ecx+0x8C]
        pop esi
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x8C]
        fstp dword ptr ds : [ecx+0x8C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x90]
        fstp dword ptr ds : [ecx+0x90]
        fmul dword ptr ds : [ecx+0x94]
        fstp dword ptr ds : [ecx+0x94]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40fd5a
        fld dword ptr ds : [ecx+0x74]
        fdiv dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ds : [ecx+0x7C]
        public_40fd5a : nop
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x40fb80)
    }
}

#undef public_40fccb
#undef public_40fd5a
