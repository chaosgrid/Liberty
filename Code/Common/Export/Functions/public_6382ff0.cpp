#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6382ff0);

#define public_6383049 _public_6383049
#define public_638307b _public_638307b
#define public_63830a6 _public_63830a6
#define public_63830c4 _public_63830c4
#define public_6383135 _public_6383135
#define public_6383146 _public_6383146
#define public_6383149 _public_6383149
#define public_6383158 _public_6383158
#define public_63831a3 _public_63831a3
#define public_63831ac _public_63831ac
#define public_63831db _public_63831db

PROC_DECLARE(0x6382ff0, internal_6382ff0, public_6382ff0);
extern "C" NAKED register_t __cdecl internal_6382ff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0x50]
        xor ebx, ebx
        test eax, 0x40000
        push edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], 0xFFEFFFFF
        mov dword ptr ss : [esp+0x14], 0
        je public_6383049
        mov eax, dword ptr ds : [public_658ba68]
        mov ecx, dword ptr ss : [ebp+8]
        inc eax
        mov dword ptr ds : [public_658ba68], eax
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        push ecx
        call public_637fd60
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], esi
        mov ebx, 1
        public_6383049 : nop
        push esi
        call public_63705e0
        push esi
        call public_636ef40
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax], esi
        mov ecx, dword ptr ds : [public_658b8e0]
        add esp, 8
        inc ecx
        mov dword ptr ds : [public_658b8e0], ecx
        mov dword ptr ds : [esi+0x48], ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6383158
        mov dword ptr ss : [esp+0x10], eax
        public_638307b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_6383158
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        je public_6383149
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6383146
        public_63830a6 : nop
        mov eax, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], eax
        je public_6383135
        test ebx, ebx
        mov dword ptr ds : [esi+0x48], eax
        je public_63830c4
        test dword ptr ds : [esi+0x50], 0x40000
        je public_6383135
        public_63830c4 : nop
        mov ecx, dword ptr ds : [public_658ba68]
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x20]
        push edx
        inc ecx
        push esi
        push eax
        mov dword ptr ds : [public_658ba68], ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_6383135
        push esi
        call public_63705e0
        push esi
        call public_636ef40
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 8
        test eax, 0x40000
        je public_6383135
        fld qword ptr ss : [esp+0x20]
        mov ebx, 1
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6383135
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x14], esi
        public_6383135 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_63830a6
        mov ecx, dword ptr ss : [esp+0x10]
        public_6383146 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        public_6383149 : nop
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_638307b
        public_6383158 : nop
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_63831ac
        mov eax, dword ptr ss : [ebp+0x10]
        fld qword ptr ss : [esp+0x18]
        fstp qword ptr ds : [eax]
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, 2
        jl public_63831a3
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push edx
        push eax
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f6e18 @0x6383194*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6e18
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_63831a3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63831ac : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_63831db
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f6de4 @0x63831cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6de4
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_63831db : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6382ff0)
    }
}

#undef public_6383049
#undef public_638307b
#undef public_63830a6
#undef public_63830c4
#undef public_6383135
#undef public_6383146
#undef public_6383149
#undef public_6383158
#undef public_63831a3
#undef public_63831ac
#undef public_63831db
