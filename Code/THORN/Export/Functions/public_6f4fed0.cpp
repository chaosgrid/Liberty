#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);

#define public_6f4fef5 _public_6f4fef5
#define public_6f4ff08 _public_6f4ff08
#define public_6f4ff1e _public_6f4ff1e
#define public_6f4ff36 _public_6f4ff36
#define public_6f4ff66 _public_6f4ff66
#define public_6f4ff89 _public_6f4ff89
#define public_6f4ffa0 _public_6f4ffa0
#define public_6f4ffcd _public_6f4ffcd

PROC_DECLARE(0x6f4fed0, internal_6f4fed0, public_6f4fed0);
extern "C" NAKED register_t __cdecl internal_6f4fed0()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        push ebp
        push esi
        push edi
        push 1
        xor ebp, ebp
        call public_6f4b090
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f4ff1e
        mov edi, 1
        lea ebx, ss:[esp+0x14]
        public_6f4fef5 : nop
        cmp edi, 0x29
        jl public_6f4ff08
/*FIXUP push offset public_6f60d80 @0x6f4fefa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d80
        push edi
        call public_6f4f570
        add esp, 8
        public_6f4ff08 : nop
        mov dword ptr ds : [ebx], esi
        inc ebp
        add ebx, 4
        inc edi
        push edi
        call public_6f4b090
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f4fef5
        public_6f4ff1e : nop
        mov ebx, dword ptr ds : [public_6f5a0dc]
        xor esi, esi
        test ebp, ebp
        jle public_6f4ffcd
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        public_6f4ff36 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_6f4b900
/*FIXUP push offset public_6f60c18 @0x6f4ff42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60c18
        call public_6f4b370
        push eax
        call public_6f4b0b0
        add esp, 0xC
        test eax, eax
        je public_6f4ff66
/*FIXUP push offset public_6f60d58 @0x6f4ff59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d58
        call public_6f4c7f0
        add esp, 4
        public_6f4ff66 : nop
        push 1
        call public_6f4b090
        mov edi, eax
        push edi
        call public_6f4b500
        add esp, 8
        test eax, eax
        jne public_6f4ff89
/*FIXUP push offset public_6f60d2c @0x6f4ff7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d2c
        call public_6f4c7f0
        add esp, 4
        public_6f4ff89 : nop
        test esi, esi
        jle public_6f4ffa0
        mov eax, dword ptr ds : [public_6f5a0b8]
        add eax, 0x20
        push eax
/*FIXUP push offset public_6f60d28 @0x6f4ff96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d28
        call ebx
        add esp, 8
        public_6f4ffa0 : nop
        mov ecx, dword ptr ds : [public_6f5a0b8]
        add ecx, 0x20
        push ecx
        push edi
        call public_6f4b590
        add esp, 4
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        inc esi
        add ecx, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jl public_6f4ff36
        public_6f4ffcd : nop
        mov edx, dword ptr ds : [public_6f5a0b8]
        add edx, 0x20
        push edx
/*FIXUP push offset public_6f60d24 @0x6f4ffd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d24
        call ebx
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x6f4fed0)
    }
}

#undef public_6f4fef5
#undef public_6f4ff08
#undef public_6f4ff1e
#undef public_6f4ff36
#undef public_6f4ff66
#undef public_6f4ff89
#undef public_6f4ffa0
#undef public_6f4ffcd
