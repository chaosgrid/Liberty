#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63848a0);
CLANG_FORWARD_PROC_SYMBOL(public_6384ce0);

#define public_6384d04 _public_6384d04
#define public_6384d17 _public_6384d17
#define public_6384d2a _public_6384d2a
#define public_6384d3a _public_6384d3a
#define public_6384d44 _public_6384d44
#define public_6384d8e _public_6384d8e

PROC_DECLARE(0x6384ce0, internal_6384ce0, public_6384ce0);
extern "C" NAKED register_t __cdecl internal_6384ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_6384d04
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
/*FIXUP push offset public_63f7630 @0x6384cf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7630
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6384d04 : nop
        test edi, edi
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0xC]
        jle public_6384d44
        push ebp
        push esi
        lea edx, ds:[ebx-2]
        mov esi, edi
        public_6384d17 : nop
        fld qword ptr ds : [eax]
        mov ecx, edx
        add eax, 8
        fld st(0)
        mov ebp, ecx
        fmulp 
        dec ecx
        test ebp, ebp
        je public_6384d3a
        inc ecx
        public_6384d2a : nop
        fld qword ptr ds : [eax]
        add eax, 8
        dec ecx
        fld st(0)
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jne public_6384d2a
        public_6384d3a : nop
        fstp qword ptr ds : [eax]
        add eax, 8
        dec esi
        jne public_6384d17
        pop esi
        pop ebp
        public_6384d44 : nop
        fld qword ptr ds : [public_658b928]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6384d8e
        mov ecx, dword ptr ds : [public_658b93c]
        mov edx, dword ptr ds : [public_658b938]
        mov eax, dword ptr ds : [public_658b934]
        push ecx
        mov ecx, dword ptr ds : [public_658b930]
        push edx
        mov edx, dword ptr ds : [public_658b92c]
        push eax
        mov eax, dword ptr ds : [public_658b928]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ebx
        push edi
        push ecx
        call public_63848a0
        add esp, 0x24
        public_6384d8e : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6384ce0)
    }
}

#undef public_6384d04
#undef public_6384d17
#undef public_6384d2a
#undef public_6384d3a
#undef public_6384d44
#undef public_6384d8e
