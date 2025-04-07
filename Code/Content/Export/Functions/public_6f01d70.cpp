#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f031d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03480);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6facb9a);

#define public_6f01de0 _public_6f01de0
#define public_6f01e18 _public_6f01e18
#define public_6f01e4d _public_6f01e4d
#define public_6f01e7e _public_6f01e7e
#define public_6f01ea0 _public_6f01ea0
#define public_6f01ecd _public_6f01ecd
#define public_6f01edd _public_6f01edd
#define public_6f01f74 _public_6f01f74
#define public_6f01f7d _public_6f01f7d
#define public_6f01f89 _public_6f01f89
#define public_6f01f9b _public_6f01f9b
#define public_6f01f9d _public_6f01f9d
#define public_6f01fb0 _public_6f01fb0
#define public_6f0203f _public_6f0203f
#define public_6f0204a _public_6f0204a
#define public_6f02055 _public_6f02055
#define public_6f0206f _public_6f0206f

PROC_DECLARE(0x6f01d70, internal_6f01d70, public_6f01d70);
extern "C" NAKED register_t __cdecl internal_6f01d70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6facb9a @0x6f01d78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facb9a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1580
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6fb300c]
        mov ecx, dword ptr ss : [esp+0x159C]
        lea eax, ss:[esp+0x24]
        push eax
        xor esi, esi
        push ecx
        mov dword ptr ss : [esp+0x159C], esi
        call public_6f24280
        add esp, 8
        test al, al
        je public_6f01fb0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f01fb0
        mov ebx, dword ptr ds : [public_6fb3054]
        push ebp
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f01de0 : nop
        push offset public_6fb8004 @0x6f01de0*/
  FIXUP public_6f01de0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8004
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f01f9d
        mov ebp, 2
        lea ecx, ss:[esp+0x28]
        mov esi, ebp
        mov dword ptr ss : [esp+0x10], 0x42
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f01f9b
/*FIXUP public_6f01e18 : nop
        push offset public_6fb7ff8 @0x6f01e18*/
  FIXUP public_6f01e18 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7ff8
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_6fb3014]
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_6f01e4d
        call ebx
/*FIXUP push offset public_6fb7ff0 @0x6f01e31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7ff0
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        mov ebp, eax
        neg ebp
        sbb ebp, ebp
        neg ebp
        jmp public_6f01f89
/*FIXUP public_6f01e4d : nop
        push offset public_6fb7fe4 @0x6f01e4d*/
  FIXUP public_6f01e4d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7fe4
        call dword ptr ds : [public_6fb3014]
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_6f01e7e
        call ebx
/*FIXUP push offset public_6fb7fdc @0x6f01e62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7fdc
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        mov esi, eax
        neg esi
        sbb esi, esi
        neg esi
        jmp public_6f01f89
/*FIXUP public_6f01e7e : nop
        push offset public_6fb7fd0 @0x6f01e7e*/
  FIXUP public_6f01e7e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7fd0
        call dword ptr ds : [public_6fb3014]
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_6f01edd
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        xor edi, edi
        lea esp, ss:[esp]
        public_6f01ea0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi*8+public_6fce384]
        push edx
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f01ecd
        inc edi
        cmp edi, 0x42
        jb public_6f01ea0
        mov dword ptr ss : [esp+0x10], 0x42
        jmp public_6f01f89
        public_6f01ecd : nop
        mov ecx, dword ptr ds : [edi*8+public_6fce380]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_6f01f89
/*FIXUP public_6f01edd : nop
        push offset public_6fb7fc8 @0x6f01edd*/
  FIXUP public_6f01edd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7fc8
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f01f89
        lea ecx, ss:[esp+0x28]
        call ebx
        mov edx, eax
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ss : [esp+0x18], al
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f03480
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[ebp+ecx*2]
        lea ecx, ds:[esi+edx*2]
        shl ecx, 4
        lea edx, ss:[esp+0x18]
        push edx
        add ecx, offset public_6fcf478
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        mov byte ptr ss : [esp+0x15A4], 1
        call public_6f031d0
        mov eax, dword ptr ss : [esp+0x1C]
        xor edi, edi
        cmp eax, edi
        mov byte ptr ss : [esp+0x1598], 0
        je public_6f01f7d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f01f74
        cmp cl, 0xFF
        je public_6f01f74
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f01f7d
        public_6f01f74 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f01f7d : nop
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        public_6f01f89 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f01e18
        public_6f01f9b : nop
        xor esi, esi
        public_6f01f9d : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f01de0
        pop ebp
        public_6f01fb0 : nop
        lea eax, ss:[esp+0x144C]
        mov dword ptr ss : [esp+0x1594], 2
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0x144C]
        mov byte ptr ss : [esp+0x1594], 3
        call dword ptr ds : [public_6fb304c]
        push 1
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x1598], 2
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ds : [public_6fb3304]
        mov edx, dword ptr ds : [ecx]
        push edx
        push esi
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x159C], 4
        call dword ptr ds : [public_6fb3308]
        mov eax, dword ptr ss : [esp+0x34]
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_6f02055
        cmp dword ptr ss : [esp+0x38], esi
        mov edi, dword ptr ds : [public_6fb32a8]
        je public_6f0204a
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, esi
        je public_6f0203f
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        public_6f0203f : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call edi
        mov dword ptr ss : [esp+0x38], esi
        public_6f0204a : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x34], ebx
        public_6f02055 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, esi
        je public_6f0206f
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        public_6f0206f : nop
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x1598], ebx
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ss : [esp+0x158C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x158C
        ret 
        UNREACHABLE_TRAP(0x6f01d70)
    }
}

#undef public_6f01de0
#undef public_6f01e18
#undef public_6f01e4d
#undef public_6f01e7e
#undef public_6f01ea0
#undef public_6f01ecd
#undef public_6f01edd
#undef public_6f01f74
#undef public_6f01f7d
#undef public_6f01f89
#undef public_6f01f9b
#undef public_6f01f9d
#undef public_6f01fb0
#undef public_6f0203f
#undef public_6f0204a
#undef public_6f02055
#undef public_6f0206f
