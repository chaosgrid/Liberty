#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264d80);
CLANG_FORWARD_PROC_SYMBOL(public_6264ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6265100);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_639254e);

#define public_6265190 _public_6265190
#define public_62651e0 _public_62651e0
#define public_626520f _public_626520f
#define public_626521e _public_626521e
#define public_6265232 _public_6265232
#define public_6265240 _public_6265240
#define public_6265265 _public_6265265
#define public_62652d6 _public_62652d6
#define public_62652e7 _public_62652e7
#define public_62652fc _public_62652fc
#define public_6265321 _public_6265321
#define public_6265346 _public_6265346
#define public_626534f _public_626534f
#define public_62653b5 _public_62653b5
#define public_62653c6 _public_62653c6
#define public_62653db _public_62653db
#define public_62653fb _public_62653fb
#define public_6265420 _public_6265420
#define public_6265429 _public_6265429

PROC_DECLARE(0x6265100, internal_6265100, public_6265100);
extern "C" NAKED register_t __cdecl internal_6265100()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639254e @0x6265108*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639254e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1670
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ss : [esp+0x1684]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [public_639905c]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x168C]
        push edx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6302df0
        add esp, 0xC
        lea ecx, ss:[esp+0x114]
        call public_630f660
        xor ebx, ebx
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x168C], ebx
        call public_630f9b0
        test al, al
        je public_6265240
        lea ecx, ss:[esp+0x114]
        call public_6310070
        test al, al
        je public_6265232
        mov edi, edi
/*FIXUP public_6265190 : nop
        push offset public_63995d4 @0x6265190*/
  FIXUP public_6265190 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63995d4
        lea ecx, ss:[esp+0x118]
        call public_63103c0
        test al, al
        jne public_626520f
/*FIXUP push offset public_63995c8 @0x62651a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63995c8
        lea ecx, ss:[esp+0x118]
        call public_63103c0
        test al, al
        jne public_626520f
/*FIXUP push offset public_63995c0 @0x62651ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63995c0
        lea ecx, ss:[esp+0x118]
        call public_63103c0
        test al, al
        je public_62651e0
        lea eax, ss:[esp+0x114]
        push eax
        mov ecx, edi
        call public_6264ea0
        jmp public_626521e
        public_62651e0 : nop
        lea ecx, ss:[esp+0x114]
        mov esi, 0x100001
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0xE2
/*FIXUP push offset public_6399484 @0x62651fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_639958c @0x6265202*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639958c
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_626521e
        public_626520f : nop
        lea edx, ss:[esp+0x114]
        push edx
        mov ecx, edi
        call public_6264d80
        public_626521e : nop
        lea ecx, ss:[esp+0x114]
        call public_6310070
        test al, al
        jne public_6265190
        public_6265232 : nop
        lea ecx, ss:[esp+0x114]
        call public_630f770
        jmp public_6265265
        public_6265240 : nop
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0xEA
/*FIXUP push offset public_6399484 @0x6265250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100001
/*FIXUP push offset public_6399558 @0x626525a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399558
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6265265 : nop
        push ebp
        lea eax, ss:[esp+0x1540]
        mov dword ptr ss : [esp+0x1688], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x1548]
        mov byte ptr ss : [esp+0x1690], 2
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x1550], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6399138]
        mov esi, dword ptr ds : [public_639913c]
        je public_62652fc
        cmp dword ptr ss : [esp+0x1554], ebx
        je public_62652e7
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, ebx
        je public_62652d6
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1558], ebx
        mov dword ptr ss : [esp+0x155C], ebx
        public_62652d6 : nop
        mov eax, dword ptr ss : [esp+0x1554]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1554], ebx
        public_62652e7 : nop
        mov ecx, dword ptr ss : [esp+0x1550]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1550], 0xFFFFFFFF
        public_62652fc : nop
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_639932c]
        je public_6265321
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1558], ebx
        mov dword ptr ss : [esp+0x155C], ebx
        public_6265321 : nop
        mov eax, dword ptr ss : [esp+0x1544]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1560], ebx
        je public_626534f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6265346
        cmp cl, 0xFF
        je public_6265346
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_626534f
        public_6265346 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_626534f : nop
        mov dword ptr ss : [esp+0x1544], ebx
        mov dword ptr ss : [esp+0x1548], ebx
        mov dword ptr ss : [esp+0x154C], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x1690], 3
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x128], 0xFFFFFFFF
        je public_62653db
        cmp dword ptr ss : [esp+0x12C], ebx
        je public_62653c6
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, ebx
        je public_62653b5
        push eax
        call ebp
        mov dword ptr ss : [esp+0x130], ebx
        mov dword ptr ss : [esp+0x134], ebx
        public_62653b5 : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x12C], ebx
        public_62653c6 : nop
        mov edx, dword ptr ss : [esp+0x128]
        push edx
        call esi
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        public_62653db : nop
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, ebx
        pop ebp
        je public_62653fb
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x12C], ebx
        mov dword ptr ss : [esp+0x130], ebx
        public_62653fb : nop
        mov eax, dword ptr ss : [esp+0x118]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x134], ebx
        je public_6265429
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6265420
        cmp cl, 0xFF
        je public_6265420
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6265429
        public_6265420 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6265429 : nop
        mov ecx, dword ptr ss : [esp+0x167C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 8
        UNREACHABLE_TRAP(0x6265100)
    }
}

#undef public_6265190
#undef public_62651e0
#undef public_626520f
#undef public_626521e
#undef public_6265232
#undef public_6265240
#undef public_6265265
#undef public_62652d6
#undef public_62652e7
#undef public_62652fc
#undef public_6265321
#undef public_6265346
#undef public_626534f
#undef public_62653b5
#undef public_62653c6
#undef public_62653db
#undef public_62653fb
#undef public_6265420
#undef public_6265429
