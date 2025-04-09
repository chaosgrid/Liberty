#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_5a8960);
CLANG_FORWARD_PROC_SYMBOL(public_5a96b0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5ab0f0);
CLANG_FORWARD_PROC_SYMBOL(public_5accb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b20a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5b20ce _public_5b20ce
#define public_5b20d0 _public_5b20d0
#define public_5b20eb _public_5b20eb
#define public_5b20f7 _public_5b20f7
#define public_5b211a _public_5b211a
#define public_5b2161 _public_5b2161
#define public_5b2186 _public_5b2186

PROC_DECLARE(0x5b20a0, internal_5b20a0, public_5b20a0);
extern "C" NAKED register_t __cdecl internal_5b20a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_67e7b8
        mov esi, 6
        call public_5a96b0
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_5b20ce
        cmp word ptr ds : [public_67e9a0], 0
        je public_5b20ce
        mov bl, 1
        jmp public_5b20d0
        public_5b20ce : nop
        xor bl, bl
        public_5b20d0 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_5b20f7
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5b20eb
        cmp cl, 0xFF
        je public_5b20eb
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_5b20f7
        public_5b20eb : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5b20f7 : nop
        test bl, bl
        je public_5b2186
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5b211a
/*FIXUP push offset public_67e84c @0x5b2109*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67e84c
        call public_5accb0
        add esp, 4
        test al, al
        je public_5b2186
/*FIXUP public_5b211a : nop
        push offset public_679d04 @0x5b211a*/
  FIXUP public_5b211a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_679d04
        mov esi, 1
        call public_5a8960
        add esp, 4
        test al, al
        je public_5b2161
        mov ecx, offset public_67e7b8
        call public_5aa680
        test eax, eax
        je public_5b2161
        mov ecx, offset public_67e7b8
        call public_5ab0f0
        test al, al
        je public_5b2161
        call public_4c4810
        neg al
        sbb eax, eax
        neg eax
        add eax, 2
        mov esi, eax
        cmp esi, 1
        jne public_5b2186
        public_5b2161 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e6cb0 @0x5b2167*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6cb0
        push 0x476
/*FIXUP push offset public_5e6a08 @0x5b2171*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6a08
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x5b217b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_5b2186 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5b20a0)
    }
}

#undef public_5b20ce
#undef public_5b20d0
#undef public_5b20eb
#undef public_5b20f7
#undef public_5b211a
#undef public_5b2161
#undef public_5b2186
