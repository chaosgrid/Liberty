#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5309c0);
CLANG_FORWARD_PROC_SYMBOL(public_530a10);
CLANG_FORWARD_PROC_SYMBOL(public_536b50);

#define public_536b81 _public_536b81
#define public_536b89 _public_536b89
#define public_536b92 _public_536b92
#define public_536ba9 _public_536ba9
#define public_536bb6 _public_536bb6
#define public_536bc8 _public_536bc8
#define public_536c0d _public_536c0d

PROC_DECLARE(0x536b50, internal_536b50, public_536b50);
extern "C" NAKED register_t __cdecl internal_536b50()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_5c71dc]
        mov ebx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_5c7474]
        jne public_536b81
        xor ecx, ecx
        jmp public_536b89
        public_536b81 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edi
        sar ecx, 3
        public_536b89 : nop
        xor esi, esi
        test ecx, ecx
        jle public_536ba9
        lea edx, ds:[edi+4]
        public_536b92 : nop
        fadd dword ptr ds : [edx]
        fld dword ptr ss : [esp+0xC]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_536bb6
        inc esi
        add edx, 8
        cmp esi, ecx
        jl public_536b92
        public_536ba9 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        add esp, 4
        jmp public_530a10
        public_536bb6 : nop
        cmp esi, 0xFFFFFFFF
        fstp st(0)
        jne public_536bc8
        pop edi
        pop esi
        pop ebx
        add esp, 4
        jmp public_530a10
        public_536bc8 : nop
        lea eax, ds:[edi+esi*8]
        push eax
        call public_5309c0
        add esp, 4
        test eax, eax
        jne public_536c0d
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+esi*8]
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x70
/*FIXUP push offset public_5de5f0 @0x536bf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de5f0
/*FIXUP push offset public_5de5a0 @0x536bf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de5a0
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 4
        jmp public_530a10
        public_536c0d : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x536b50)
    }
}

#undef public_536b81
#undef public_536b89
#undef public_536b92
#undef public_536ba9
#undef public_536bb6
#undef public_536bc8
#undef public_536c0d
