#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62aa680);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62aa6ec _public_62aa6ec
#define public_62aa766 _public_62aa766
#define public_62aa7d9 _public_62aa7d9
#define public_62aa7db _public_62aa7db
#define public_62aa876 _public_62aa876
#define public_62aa8c2 _public_62aa8c2
#define public_62aa935 _public_62aa935
#define public_62aa937 _public_62aa937
#define public_62aa971 _public_62aa971

PROC_DECLARE(0x62aa680, internal_62aa680, public_62aa680);
extern "C" NAKED register_t __cdecl internal_62aa680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call dword ptr ds : [ecx+0xD4]
        mov edx, dword ptr ds : [public_6399040]
        mov ebp, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov ebx, eax
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        jle public_62aa876
        cmp eax, 4
        jg public_62aa876
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        jne public_62aa6ec
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62aa6ec : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x10]
        push ecx
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x90]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [esi]
        push ebp
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x98]
        mov ebp, eax
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        jne public_62aa766
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62aa766 : nop
        mov edx, dword ptr ds : [eax]
        add ebx, 4
        push ebx
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ecx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
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
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62aa7d9
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        jmp public_62aa7db
        public_62aa7d9 : nop
        fstp st(0)
        public_62aa7db : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x90]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [eax+8]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
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
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62aa971
        fdivr dword ptr ds : [public_639a1d0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        add esp, 0xC
        ret 
        public_62aa876 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        jne public_62aa8c2
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62aa8c2 : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x10
        push ebx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
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
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62aa935
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        jmp public_62aa937
        public_62aa935 : nop
        fstp st(0)
        public_62aa937 : nop
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x24]
        fchs 
        pop edi
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+4]
        pop esi
        fchs 
        pop ebp
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        fchs 
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 0xC
        ret 
        public_62aa971 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62aa680)
    }
}

#undef public_62aa6ec
#undef public_62aa766
#undef public_62aa7d9
#undef public_62aa7db
#undef public_62aa876
#undef public_62aa8c2
#undef public_62aa935
#undef public_62aa937
#undef public_62aa971
