#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_491be0);
CLANG_FORWARD_PROC_SYMBOL(public_491e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4900);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a20);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a50);
CLANG_FORWARD_PROC_SYMBOL(public_53eb10);

#define public_491c50 _public_491c50
#define public_491c73 _public_491c73
#define public_491ccb _public_491ccb
#define public_491d4e _public_491d4e
#define public_491da4 _public_491da4
#define public_491dbb _public_491dbb
#define public_491dbd _public_491dbd
#define public_491dd0 _public_491dd0
#define public_491de7 _public_491de7
#define public_491de9 _public_491de9
#define public_491e03 _public_491e03

PROC_DECLARE(0x491be0, internal_491be0, public_491be0);
extern "C" NAKED register_t __cdecl internal_491be0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x7D0]
        test eax, eax
        push esi
        push edi
        jne public_491ccb
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [edx], 0
        call dword ptr ds : [public_5c63ec]
        mov edi, eax
        test edi, edi
        je public_491e03
        mov ebx, dword ptr ds : [public_5c63e8]
        lea esp, ss:[esp]
        public_491c50 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ebp, eax
        call public_4c4830
        cmp ebp, eax
        je public_491c73
        call ebx
        mov edi, eax
        test edi, edi
        jne public_491c50
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_491c73 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x44]
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_5d3d34]
        pop edi
        mov dword ptr ds : [esi+4], 0
        fsub dword ptr ds : [public_5d3d28]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_5d3d34]
        fsub dword ptr ds : [public_5d3d28]
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fadd dword ptr ds : [public_5d3d24]
        fstp dword ptr ds : [esi+8]
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_491ccb : nop
        call public_4c4a20
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [edi], 0
        call public_4c4810
        test al, al
        je public_491d4e
        call public_4c4900
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_5c6090]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_491de9
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov edx, dword ptr ds : [edi]
        add esp, 4
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_491e10
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_491de9
        public_491d4e : nop
        call public_4c4a50
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fxch st(2)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        fstp st(0)
        call public_53eb10
        fchs 
        fmul dword ptr ds : [public_5d3d38]
        add esp, 8
        fcom dword ptr ds : [public_5c7474]
        fst dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_491dbb
        public_491da4 : nop
        fadd dword ptr ds : [public_5ca23c]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_491da4
        fstp dword ptr ds : [edi]
        jmp public_491dbd
        public_491dbb : nop
        fstp st(0)
        public_491dbd : nop
        fld dword ptr ds : [edi]
        fcom dword ptr ds : [public_5ca23c]
        fnstsw ax
        test ah, 1
        jne public_491de7
        lea esp, ss:[esp]
        public_491dd0 : nop
        fsub dword ptr ds : [public_5ca23c]
        fcom dword ptr ds : [public_5ca23c]
        fnstsw ax
        test ah, 1
        je public_491dd0
        fstp dword ptr ds : [edi]
        jmp public_491de9
        public_491de7 : nop
        fstp st(0)
        public_491de9 : nop
        fld dword ptr ds : [ebx+0xF48]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_491e03 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x491be0)
    }
}

#undef public_491c50
#undef public_491c73
#undef public_491ccb
#undef public_491d4e
#undef public_491da4
#undef public_491dbb
#undef public_491dbd
#undef public_491dd0
#undef public_491de7
#undef public_491de9
#undef public_491e03
