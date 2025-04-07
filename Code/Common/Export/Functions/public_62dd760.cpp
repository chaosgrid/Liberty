#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db7a0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc590);
CLANG_FORWARD_PROC_SYMBOL(public_62dd580);
CLANG_FORWARD_PROC_SYMBOL(public_62dd760);
CLANG_FORWARD_PROC_SYMBOL(public_62de490);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391fbc);

#define public_62dd7d4 _public_62dd7d4
#define public_62dd7d6 _public_62dd7d6
#define public_62dd829 _public_62dd829
#define public_62dd835 _public_62dd835
#define public_62dd849 _public_62dd849
#define public_62dd889 _public_62dd889
#define public_62dd8cc _public_62dd8cc
#define public_62dd8fe _public_62dd8fe
#define public_62dd931 _public_62dd931
#define public_62dd9b3 _public_62dd9b3
#define public_62dd9bb _public_62dd9bb
#define public_62dd9c1 _public_62dd9c1
#define public_62dd9c7 _public_62dd9c7
#define public_62dd9ee _public_62dd9ee
#define public_62dd9f8 _public_62dd9f8

PROC_DECLARE(0x62dd760, internal_62dd760, public_62dd760);
extern "C" NAKED register_t __cdecl internal_62dd760()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        test dword ptr ds : [esi+0x1C4], 0x7F0000
        push edi
        je public_62dd9f8
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x1C0]
        fadd dword ptr ds : [esi+0x1E0]
        mov ebx, dword ptr ds : [eax+0xC0]
        fst dword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x1E0]
        fcomp dword ptr ds : [esi+0x1E4]
        fnstsw ax
        test ah, 0x41
        jne public_62dd835
        fld dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x1E4]
        call public_6391fbc
        fstp dword ptr ds : [esi+0x1E0]
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62dd7d4
        lea ecx, ds:[eax-8]
        jmp public_62dd7d6
        public_62dd7d4 : nop
        xor ecx, ecx
        public_62dd7d6 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x1C0]
        mov ecx, dword ptr ds : [eax+0xEC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], 0x41A00000
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        test ah, 0x70
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        je public_62dd829
        mov dword ptr ds : [esi], 1
        public_62dd829 : nop
        cmp byte ptr ds : [esi+0x574], 1
        jne public_62dd835
        or dword ptr ds : [esi], 8
        public_62dd835 : nop
        cmp ebx, 6
        je public_62dd849
        cmp ebx, 8
        je public_62dd849
        cmp ebx, 0x13
        je public_62dd849
        cmp ebx, 0xFFFFFFFF
        jne public_62dd889
        public_62dd849 : nop
        lea ecx, ds:[esi+0x16C]
        mov byte ptr ds : [esi+0x53C], 0
        mov byte ptr ds : [esi+0x574], 0
        mov dword ptr ds : [esi+0x558], 0
        mov dword ptr ds : [esi+0x57C], 0
        mov dword ptr ds : [esi+0x578], 0
        call public_62db7a0
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        public_62dd889 : nop
        fld dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [esi+0x214]
        fadd dword ptr ds : [esi+0x20C]
        fst dword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x20C]
        fcomp dword ptr ds : [esi+0x210]
        fnstsw ax
        test ah, 0x41
        jne public_62dd8cc
        fld dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x210]
        call public_6391fbc
        fstp dword ptr ds : [esi+0x20C]
        mov ecx, esi
        call public_62dd580
        public_62dd8cc : nop
        test byte ptr ds : [esi+0x214], 1
        mov edi, dword ptr ss : [esp+0x24]
        je public_62dd8fe
        mov al, byte ptr ds : [esi+0x244]
        test al, al
        je public_62dd931
        mov eax, dword ptr ds : [esi+0x1C0]
        mov ecx, dword ptr ds : [eax+8]
        push edi
        lea edx, ds:[esi+0x220]
        push edx
        add ecx, 0x18
        call public_62e8e60
        jmp public_62dd931
        public_62dd8fe : nop
        test bl, 1
        je public_62dd931
        mov edx, dword ptr ds : [esi+0x1C0]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ds : [edx+8]
        add ecx, 0x18
        call public_62e8ce0
        public_62dd931 : nop
        mov al, byte ptr ds : [esi+0x245]
        test al, al
        je public_62dd9f8
        mov al, byte ptr ds : [esi+0x254]
        test al, al
        je public_62dd9f8
        push edi
        mov ecx, esi
        call public_62dc590
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x1E8]
        fst dword ptr ss : [esp+0x24]
        fst dword ptr ds : [esi+0x1E8]
        fcomp dword ptr ds : [esi+0x1EC]
        fnstsw ax
        test ah, 0x41
        jne public_62dd9c7
        fld dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x1EC]
        call public_6391fbc
        fstp dword ptr ds : [esi+0x1E8]
        mov eax, dword ptr ds : [esi+0x1EC]
        lea edi, ds:[esi+0x268]
        push eax
        mov ecx, edi
        call public_62de490
        mov al, byte ptr ds : [edi+0x2D4]
        test al, al
        jne public_62dd9b3
        mov al, byte ptr ds : [edi+0x30C]
        test al, al
        je public_62dd9bb
        public_62dd9b3 : nop
        fld dword ptr ds : [public_639d20c]
        jmp public_62dd9c1
        public_62dd9bb : nop
        fld dword ptr ds : [public_639c13c]
        public_62dd9c1 : nop
        fstp dword ptr ds : [esi+0x1EC]
        public_62dd9c7 : nop
        mov esi, dword ptr ds : [esi+0x1C0]
        add esi, 0xF0
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62dd9ee
        mov edx, dword ptr ds : [esi-8]
        lea ecx, ds:[esi-8]
        call dword ptr ds : [edx+0xBC]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        public_62dd9ee : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        public_62dd9f8 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62dd760)
    }
}

#undef public_62dd7d4
#undef public_62dd7d6
#undef public_62dd829
#undef public_62dd835
#undef public_62dd849
#undef public_62dd889
#undef public_62dd8cc
#undef public_62dd8fe
#undef public_62dd931
#undef public_62dd9b3
#undef public_62dd9bb
#undef public_62dd9c1
#undef public_62dd9c7
#undef public_62dd9ee
#undef public_62dd9f8
