#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b720);

#define public_62afbf5 _public_62afbf5
#define public_62afc01 _public_62afc01
#define public_62afc0d _public_62afc0d
#define public_62afc0f _public_62afc0f
#define public_62afc30 _public_62afc30
#define public_62afc32 _public_62afc32
#define public_62afc98 _public_62afc98
#define public_62afcc2 _public_62afcc2
#define public_62afcc4 _public_62afcc4
#define public_62afcde _public_62afcde
#define public_62afcff _public_62afcff
#define public_62afd14 _public_62afd14
#define public_62afd69 _public_62afd69

PROC_DECLARE(0x62afbe0, internal_62afbe0, public_62afbe0);
extern "C" NAKED register_t __cdecl internal_62afbe0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        push edi
        je public_62afbf5
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62afc01
        public_62afbf5 : nop
        pop edi
        mov byte ptr ds : [esi+0x5C], 1
        pop esi
        add esp, 0x18
        ret 8
        public_62afc01 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_62afc0d
        lea ecx, ds:[eax-8]
        jmp public_62afc0f
        public_62afc0d : nop
        xor ecx, ecx
        public_62afc0f : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62afc30
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62afc30
        mov edi, eax
        jmp public_62afc32
        public_62afc30 : nop
        xor edi, edi
        public_62afc32 : nop
        fld dword ptr ds : [esi+0x18]
        mov edx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edx]
        fcom dword ptr ds : [esi+0x1C]
        fst dword ptr ds : [esi+0x18]
        fnstsw ax
        test ah, 1
        jne public_62afcde
        push ebx
        fstp st(0)
        push 0
        lea ecx, ds:[esi+0x24]
        push ecx
        lea edx, ds:[esi+0x48]
        mov byte ptr ds : [esi+0x5C], 1
        mov eax, dword ptr ds : [edi]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x7C]
        push 0x20000
        lea ecx, ds:[edi+0xE4]
        mov dword ptr ds : [edi+0x29C], 0
        call public_629b720
        mov ebx, eax
        test ebx, ebx
        je public_62afc98
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        test al, al
        jne public_62afc98
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx+0x30]
        public_62afc98 : nop
        mov edi, dword ptr ds : [edi+0xAC]
        test edi, edi
        pop ebx
        je public_62afd69
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_62afd69
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        je public_62afcc2
        lea ecx, ds:[esi-8]
        jmp public_62afcc4
        public_62afcc2 : nop
        xor ecx, ecx
        public_62afcc4 : nop
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx+4]
        lea esi, ds:[ecx+4]
        mov ecx, eax
        call dword ptr ds : [edx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edi+0x74]
        pop edi
        pop esi
        add esp, 0x18
        ret 8
        public_62afcde : nop
        fsubr dword ptr ds : [esi+0x1C]
        fdiv dword ptr ds : [esi+0x1C]
        fld st(0)
        fmulp 
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62afcff
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62afd14
        public_62afcff : nop
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62afd14
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62afd14 : nop
        fmul dword ptr ds : [esi+0x20]
        lea eax, ds:[esi+0x24]
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edi]
        fld dword ptr ds : [eax+0x14]
        push 0
        fld dword ptr ds : [eax+0x20]
        push eax
        fstp dword ptr ss : [esp+0x24]
        fxch 
        lea eax, ss:[esp+0x1C]
        fmul st, st(2)
        push eax
        mov ecx, edi
        fstp dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0x48]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x50]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0x7C]
        public_62afd69 : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x62afbe0)
    }
}

#undef public_62afbf5
#undef public_62afc01
#undef public_62afc0d
#undef public_62afc0f
#undef public_62afc30
#undef public_62afc32
#undef public_62afc98
#undef public_62afcc2
#undef public_62afcc4
#undef public_62afcde
#undef public_62afcff
#undef public_62afd14
#undef public_62afd69
