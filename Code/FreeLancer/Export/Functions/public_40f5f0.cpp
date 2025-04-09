#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_410190);

#define public_40f6d7 _public_40f6d7
#define public_40f74b _public_40f74b
#define public_40f774 _public_40f774
#define public_40f81b _public_40f81b
#define public_40f857 _public_40f857
#define public_40f882 _public_40f882
#define public_40f8a5 _public_40f8a5
#define public_40f8ad _public_40f8ad

PROC_DECLARE(0x40f5f0, internal_40f5f0, public_40f5f0);
extern "C" NAKED register_t __cdecl internal_40f5f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c6d24]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_5c89ac @0x40f5fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c89ac
        push edi
        mov esi, ecx
        call ebx
        add esp, 8
        test eax, eax
        jne public_40f774
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [public_5c71d0]
        fmul qword ptr ds : [public_5c75e8]
        xor ebx, ebx
        add esp, 4
        fst dword ptr ds : [esi+0x98]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fld st(0)
        fdiv dword ptr ds : [esi+0xA0]
        fst dword ptr ss : [esp+0x14]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [esi+0x80], 0x3F800000
        mov dword ptr ds : [esi+0x84], ebx
        fst dword ptr ds : [esi+0x88]
        fld dword ptr ds : [esi+0x88]
        fld dword ptr ds : [esi+0x84]
        fld dword ptr ds : [esi+0x80]
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
        fmul dword ptr ds : [esi+0x80]
        fstp dword ptr ds : [esi+0x80]
        fld st(0)
        fmul dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0x84]
        fmul dword ptr ds : [esi+0x88]
        fstp dword ptr ds : [esi+0x88]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40f6d7
        fld dword ptr ds : [esi+0x70]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x78]
        public_40f6d7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        fstp st(0)
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], 0x3F800000
        mov dword ptr ds : [esi+0x94], ecx
        fld dword ptr ds : [esi+0x94]
        fld dword ptr ds : [esi+0x90]
        fld dword ptr ds : [esi+0x8C]
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
        fmul dword ptr ds : [esi+0x8C]
        fstp dword ptr ds : [esi+0x8C]
        fld st(0)
        fmul dword ptr ds : [esi+0x90]
        fstp dword ptr ds : [esi+0x90]
        fmul dword ptr ds : [esi+0x94]
        fstp dword ptr ds : [esi+0x94]
        public_40f74b : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40f8a5
        fld dword ptr ds : [esi+0x74]
        pop edi
        fdiv dword ptr ss : [esp+0x10]
        mov al, 1
        fchs 
        fstp dword ptr ds : [esi+0x7C]
        pop esi
        pop ebx
        ret 8
/*FIXUP public_40f774 : nop
        push offset public_5c89a4 @0x40f774*/
  FIXUP public_40f774 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c89a4
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_40f857
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [public_5c71d0]
        fmul qword ptr ds : [public_5c75e8]
        lea edi, ds:[esi+0x80]
        xor ebx, ebx
        fst dword ptr ds : [esi+0x9C]
        add esp, 4
        fmul dword ptr ds : [public_5c77f4]
        mov ecx, edi
        fptan 
        fstp st(0)
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+0xA0]
        fst dword ptr ss : [esp+0x10]
        fld st(0)
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x98]
        mov dword ptr ds : [edi], 0x3F800000
        mov dword ptr ds : [edi+4], ebx
        fstp dword ptr ds : [edi+8]
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40f81b
        fld dword ptr ds : [esi+0x70]
        fdiv dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x78]
        public_40f81b : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea edi, ds:[esi+0x8C]
        mov ecx, edi
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], 0x3F800000
        mov dword ptr ds : [edi+8], eax
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        jmp public_40f74b
/*FIXUP public_40f857 : nop
        push offset public_5c899c @0x40f857*/
  FIXUP public_40f857 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c899c
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_40f882
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call dword ptr ds : [public_5c71d0]
        add esp, 4
        pop edi
        fstp dword ptr ds : [esi+0xA4]
        pop esi
        mov al, 1
        pop ebx
        ret 8
/*FIXUP public_40f882 : nop
        push offset public_5c8994 @0x40f882*/
  FIXUP public_40f882 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8994
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_40f8ad
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [public_5c71d0]
        fstp dword ptr ds : [esi+0xA8]
        add esp, 4
        public_40f8a5 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_40f8ad : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x40f5f0)
    }
}

#undef public_40f6d7
#undef public_40f74b
#undef public_40f774
#undef public_40f81b
#undef public_40f857
#undef public_40f882
#undef public_40f8a5
#undef public_40f8ad
