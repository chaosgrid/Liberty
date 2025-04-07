#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d76d0);

#define public_62d76e7 _public_62d76e7
#define public_62d76ee _public_62d76ee
#define public_62d76fd _public_62d76fd
#define public_62d7704 _public_62d7704
#define public_62d7713 _public_62d7713
#define public_62d771a _public_62d771a
#define public_62d7729 _public_62d7729
#define public_62d7730 _public_62d7730
#define public_62d7770 _public_62d7770
#define public_62d7792 _public_62d7792
#define public_62d77b6 _public_62d77b6

PROC_DECLARE(0x62d76d0, internal_62d76d0, public_62d76d0);
extern "C" NAKED register_t __cdecl internal_62d76d0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp eax, 1
        jne public_62d76e7
        mov dword ptr ss : [esp+4], 0
        jmp public_62d76ee
        public_62d76e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+4], ecx
        public_62d76ee : nop
        cmp eax, 2
        jne public_62d76fd
        mov dword ptr ss : [esp+8], 0
        jmp public_62d7704
        public_62d76fd : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+8], edx
        public_62d7704 : nop
        cmp eax, 3
        jne public_62d7713
        mov dword ptr ss : [esp+0xC], 0
        jmp public_62d771a
        public_62d7713 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        public_62d771a : nop
        cmp eax, 4
        jne public_62d7729
        mov dword ptr ss : [esp+0x10], 0
        jmp public_62d7730
        public_62d7729 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x10], edx
        public_62d7730 : nop
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+4]
        fmulp 
        fmul dword ptr ds : [public_63997d0]
        fcom dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_62d7770
        mov dword ptr ds : [esi], 1
        fstp st(0)
        mov eax, dword ptr ds : [esi]
        pop esi
        add esp, 0x14
        ret 
        public_62d7770 : nop
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+4]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62d7792
        mov dword ptr ds : [esi], 2
        fstp st(0)
        mov eax, dword ptr ds : [esi]
        pop esi
        add esp, 0x14
        ret 
        public_62d7792 : nop
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+4]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62d77b6
        mov dword ptr ds : [esi], 3
        mov eax, dword ptr ds : [esi]
        pop esi
        add esp, 0x14
        ret 
        public_62d77b6 : nop
        mov dword ptr ds : [esi], 4
        mov eax, dword ptr ds : [esi]
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62d76d0)
    }
}

#undef public_62d76e7
#undef public_62d76ee
#undef public_62d76fd
#undef public_62d7704
#undef public_62d7713
#undef public_62d771a
#undef public_62d7729
#undef public_62d7730
#undef public_62d7770
#undef public_62d7792
#undef public_62d77b6
