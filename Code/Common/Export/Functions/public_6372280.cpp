#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_6372280);
CLANG_FORWARD_PROC_SYMBOL(public_6373e20);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_63722d1 _public_63722d1
#define public_6372303 _public_6372303
#define public_6372312 _public_6372312
#define public_6372332 _public_6372332
#define public_6372351 _public_6372351
#define public_6372385 _public_6372385
#define public_637238d _public_637238d
#define public_63723a8 _public_63723a8

PROC_DECLARE(0x6372280, internal_6372280, public_6372280);
extern "C" NAKED register_t __cdecl internal_6372280()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        push eax
        xor ebp, ebp
        call public_636ec10
        mov ebx, eax
        push ebx
        call public_636ec70
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 8
        test ah, 0x10
        je public_6372332
        cmp ebx, 3
        je public_63722d1
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
        push ebx
/*FIXUP push offset public_63f0588 @0x63722bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0588
        call public_6356960
        push ebp
        push esi
        push 5
        call public_6378600
        add esp, 0x18
        public_63722d1 : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [edx+4]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [esi+0x34]
        add esp, 8
        test ah, 8
        mov eax, dword ptr ds : [edx+8]
        push eax
        je public_6372303
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_636e1b0
        add esp, 8
        jmp public_6372312
        public_6372303 : nop
        lea ecx, ss:[esp+0x20]
        push 0
        push ecx
        call public_636e100
        add esp, 0xC
        public_6372312 : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [edx+0xC]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6372332 : nop
        mov edx, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call public_6373e20
        mov edi, eax
        add esp, 0xC
        test edi, edi
        je public_637238d
        public_6372351 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_636e1b0
        add esp, 8
        inc ebp
        cmp ebp, ebx
        jg public_6372385
        cmp edi, dword ptr ss : [esp+0x14]
        je public_6372385
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        push edi
        call public_6373e20
        mov edi, eax
        add esp, 0xC
        test edi, edi
        jne public_6372351
        jmp public_637238d
        public_6372385 : nop
        test edi, edi
        je public_637238d
        cmp ebp, ebx
        je public_63723a8
        public_637238d : nop
        mov edx, dword ptr ds : [esi+0x4C]
        push ebp
        push edx
/*FIXUP push offset public_63f0528 @0x6372392*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0528
        call public_6356960
        push edi
        push esi
        push 5
        call public_6378600
        add esp, 0x18
        public_63723a8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6372280)
    }
}

#undef public_63722d1
#undef public_6372303
#undef public_6372312
#undef public_6372332
#undef public_6372351
#undef public_6372385
#undef public_637238d
#undef public_63723a8
