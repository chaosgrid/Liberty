#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2c70);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);

#define public_62c2ca9 _public_62c2ca9
#define public_62c2cb1 _public_62c2cb1
#define public_62c2ce2 _public_62c2ce2
#define public_62c2ce4 _public_62c2ce4
#define public_62c2d17 _public_62c2d17
#define public_62c2d19 _public_62c2d19
#define public_62c2d47 _public_62c2d47
#define public_62c2d61 _public_62c2d61
#define public_62c2d74 _public_62c2d74
#define public_62c2d78 _public_62c2d78
#define public_62c2d8a _public_62c2d8a

PROC_DECLARE(0x62c2c70, internal_62c2c70, public_62c2c70);
extern "C" NAKED register_t __cdecl internal_62c2c70()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [public_6399408]
        push esi
        mov esi, ecx
        fst dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c2d8a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c2d8a
        push edi
        fstp st(0)
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, 1
        jne public_62c2ca9
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_62c2cb1
        public_62c2ca9 : nop
        mov dword ptr ss : [esp+0x18], 0x3F800000
        public_62c2cb1 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        push edx
        call public_62e5af0
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0xC
        test al, 3
        jne public_62c2d47
        test al, 4
        je public_62c2d74
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c2ce2
        add eax, 0xFFFFFFF8
        jmp public_62c2ce4
        public_62c2ce2 : nop
        xor eax, eax
        public_62c2ce4 : nop
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0x14FC
        push eax
        call public_62e4bb0
        fsub dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+0xC]
        add esp, 8
        fsub dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi]
        test esi, esi
        fdivp 
        fsubr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x18]
        je public_62c2d17
        lea eax, ds:[esi-8]
        jmp public_62c2d19
        public_62c2d17 : nop
        xor eax, eax
        public_62c2d19 : nop
        push edi
        push 0x3F800000
        push eax
        call public_62e5af0
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_639e884]
        fnstsw ax
        test ah, 5
        jp public_62c2d78
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        jmp public_62c2d78
        public_62c2d47 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62c2d61
        push edi
        lea eax, ds:[esi-8]
        push 0x3F800000
        push eax
        call public_62e5af0
        add esp, 0xC
        jmp public_62c2d78
        public_62c2d61 : nop
        push edi
        xor eax, eax
        push 0x3F800000
        push eax
        call public_62e5af0
        add esp, 0xC
        jmp public_62c2d78
        public_62c2d74 : nop
        fld dword ptr ss : [esp+8]
        public_62c2d78 : nop
        fcom dword ptr ss : [esp+0x1C]
        pop edi
        fnstsw ax
        test ah, 0x41
        jne public_62c2d8a
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        public_62c2d8a : nop
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x62c2c70)
    }
}

#undef public_62c2ca9
#undef public_62c2cb1
#undef public_62c2ce2
#undef public_62c2ce4
#undef public_62c2d17
#undef public_62c2d19
#undef public_62c2d47
#undef public_62c2d61
#undef public_62c2d74
#undef public_62c2d78
#undef public_62c2d8a
