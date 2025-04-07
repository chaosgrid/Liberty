#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62ef3d0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd060);
CLANG_FORWARD_PROC_SYMBOL(public_6302940);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);

#define public_6302970 _public_6302970
#define public_63029c8 _public_63029c8
#define public_63029d8 _public_63029d8
#define public_63029db _public_63029db
#define public_63029df _public_63029df
#define public_6302a01 _public_6302a01
#define public_6302a25 _public_6302a25
#define public_6302a2e _public_6302a2e
#define public_6302a53 _public_6302a53
#define public_6302a72 _public_6302a72
#define public_6302a74 _public_6302a74
#define public_6302a86 _public_6302a86
#define public_6302a8d _public_6302a8d

PROC_DECLARE(0x6302940, internal_6302940, public_6302940);
extern "C" NAKED register_t __cdecl internal_6302940()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_63a266c @0x6302948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a266c
        mov ecx, ebp
        call public_63103c0
        test al, al
        je public_6302a8d
        mov ecx, ebp
        call public_6310170
        test al, al
        je public_6302a86
        push ebx
        push esi
        push edi
        mov edi, edi
/*FIXUP public_6302970 : nop
        push offset public_63a1d68 @0x6302970*/
  FIXUP public_6302970 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d68
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_6302a53
        push 0
        call public_6310a30
        push eax
        call public_62ef3d0
        add esp, 4
        push 1
        mov ecx, ebp
        mov ebx, eax
        call public_63108f0
        test ebx, ebx
        je public_6302a72
        mov ecx, dword ptr ds : [public_63fcc5c]
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_63fcc60]
        mov dword ptr ss : [esp+0x1C], ebx
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_63029df
        public_63029c8 : nop
        cmp ebx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_63029d8
        mov esi, dword ptr ds : [esi]
        jmp public_63029db
        public_63029d8 : nop
        mov esi, dword ptr ds : [esi+8]
        public_63029db : nop
        cmp esi, edx
        jne public_63029c8
        public_63029df : nop
        mov dl, byte ptr ds : [public_63fcc64]
        test dl, dl
        je public_6302a01
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_63fcc58
        call public_62fd060
        jmp public_6302a74
        public_6302a01 : nop
        test al, al
        mov dword ptr ss : [esp+0x28], edi
        je public_6302a2e
        cmp edi, dword ptr ds : [ecx]
        jne public_6302a25
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_63fcc58
        call public_62fd060
        jmp public_6302a74
        public_6302a25 : nop
        lea ecx, ss:[esp+0x28]
        call public_626ba00
        public_6302a2e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [esp+0x1C]
        jae public_6302a74
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, offset public_63fcc58
        call public_62fd060
        jmp public_6302a74
/*FIXUP public_6302a53 : nop
        push offset public_63a2658 @0x6302a53*/
  FIXUP public_6302a53 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2658
        call public_6310410
        test al, al
        je public_6302a74
        push 0
        mov ecx, ebp
        call public_63108f0
        fstp dword ptr ds : [public_63ed178]
        jmp public_6302a74
        public_6302a72 : nop
        fstp st(0)
        public_6302a74 : nop
        mov ecx, ebp
        call public_6310170
        test al, al
        jne public_6302970
        pop edi
        pop esi
        pop ebx
        public_6302a86 : nop
        mov al, 1
        pop ebp
        add esp, 0x14
        ret 
        public_6302a8d : nop
        xor al, al
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6302940)
    }
}

#undef public_6302970
#undef public_63029c8
#undef public_63029d8
#undef public_63029db
#undef public_63029df
#undef public_6302a01
#undef public_6302a25
#undef public_6302a2e
#undef public_6302a53
#undef public_6302a72
#undef public_6302a74
#undef public_6302a86
#undef public_6302a8d
