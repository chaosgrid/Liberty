#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714bd0);
CLANG_FORWARD_PROC_SYMBOL(public_671696a);
CLANG_FORWARD_PROC_SYMBOL(public_6716970);
CLANG_FORWARD_PROC_SYMBOL(public_6716976);
CLANG_FORWARD_PROC_SYMBOL(public_67169b2);

#define public_6714bf1 _public_6714bf1
#define public_6714c2a _public_6714c2a
#define public_6714ce5 _public_6714ce5
#define public_6714d9e _public_6714d9e
#define public_6714daf _public_6714daf
#define public_6714dc3 _public_6714dc3
#define public_6714dd4 _public_6714dd4
#define public_6714df1 _public_6714df1

PROC_DECLARE(0x6714bd0, internal_6714bd0, public_6714bd0);
extern "C" NAKED register_t __cdecl internal_6714bd0()
{
    __asm
    {
        sub esp, 0x40C
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x41C]
        cmp edi, 2
        jb public_6714bf1
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x40C
        ret 
        public_6714bf1 : nop
        mov eax, dword ptr ds : [public_671cfc4]
        mov ecx, dword ptr ds : [public_671cfd0]
        cmp ecx, eax
        je public_6714dc3
        mov ebp, eax
        mov dword ptr ds : [public_671cfd0], eax
        and ebp, 0xFFFF
        cmp eax, 0xE0080404
        je public_6714c2a
        cmp eax, 0xE0090404
        je public_6714c2a
        cmp eax, 0xE00E0804
        jne public_6714daf
        public_6714c2a : nop
        lea ecx, ss:[esp+0x18]
        push 0x3FF
        push ecx
        push eax
        call public_67169b2
        test eax, eax
        jbe public_6714daf
        mov eax, dword ptr ds : [public_671b548]
        test eax, eax
        jne public_6714ce5
        mov esi, dword ptr ds : [public_6717088]
        push 0xFFFFFFFF
/*FIXUP push offset public_671922c @0x6714c57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671922c
        lea edx, ss:[esp+0x20]
        push 0xFFFFFFFF
        push edx
        push 1
        push 0x409
        call esi
        cmp eax, 2
        je public_6714ce5
        push 0xFFFFFFFF
/*FIXUP push offset public_671921c @0x6714c73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671921c
        lea eax, ss:[esp+0x20]
        push 0xFFFFFFFF
        push eax
        push 1
        push 0x409
        call esi
        cmp eax, 2
        je public_6714ce5
        push 0xFFFFFFFF
/*FIXUP push offset public_671920c @0x6714c8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671920c
        lea ecx, ss:[esp+0x20]
        push 0xFFFFFFFF
        push ecx
        push 1
        push 0x409
        call esi
        cmp eax, 2
        je public_6714ce5
        push 0xFFFFFFFF
/*FIXUP push offset public_67191fc @0x6714cab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191fc
        lea edx, ss:[esp+0x20]
        push 0xFFFFFFFF
        push edx
        push 1
        push 0x409
        call esi
        cmp eax, 2
        je public_6714ce5
        push 0xFFFFFFFF
/*FIXUP push offset public_67191ec @0x6714cc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191ec
        lea eax, ss:[esp+0x20]
        push 0xFFFFFFFF
        push eax
        push 1
        push 0x409
        call esi
        cmp eax, 2
        jne public_6714daf
        public_6714ce5 : nop
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        call public_6716976
        mov esi, eax
        test esi, esi
        je public_6714daf
        push esi
        call dword ptr ds : [public_671b408]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6714d9e
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push esi
        lea ecx, ss:[esp+0x20]
        push eax
        push ecx
        call public_6716970
        test eax, eax
        je public_6714d9e
        lea edx, ss:[esp+0x14]
        lea eax, ss:[esp+0xC]
        push edx
        push eax
/*FIXUP push offset public_67191e8 @0x6714d31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191e8
        push edi
        call public_671696a
        test eax, eax
        je public_6714d9e
        mov ecx, dword ptr ss : [esp+0xC]
        xor edx, edx
        mov eax, dword ptr ds : [ecx+8]
        mov dh, al
        and eax, 0xFFFF0000
        or edx, eax
        shl edx, 8
        mov eax, edx
        mov edx, dword ptr ds : [public_671b548]
        test edx, edx
        jne public_6714df1
        cmp ebp, 0x404
        jne public_6714dd4
        cmp eax, 0x4020000
        je public_6714df1
        cmp eax, 0x4030000
        je public_6714df1
        cmp eax, 0x4040000
        je public_6714df1
        cmp eax, 0x5000000
        je public_6714df1
        cmp eax, 0x5010000
        je public_6714df1
        cmp eax, 0x5020000
        je public_6714df1
        cmp eax, 0x6000000
        je public_6714df1
        public_6714d9e : nop
        push edi
        call dword ptr ds : [public_671b404]
        mov edi, dword ptr ss : [esp+0x420]
        add esp, 4
        public_6714daf : nop
        mov dword ptr ds : [public_671cfd8], 0
        mov dword ptr ds : [public_671cfd4], 0
        public_6714dc3 : nop
        mov eax, dword ptr ds : [edi*4+public_671cfd4]
        pop edi
        pop esi
        pop ebp
        add esp, 0x40C
        ret 
        public_6714dd4 : nop
        cmp ebp, 0x804
        jne public_6714d9e
        cmp eax, 0x4010000
        je public_6714df1
        cmp eax, 0x4020000
        je public_6714df1
        cmp eax, 0x5030000
        jne public_6714d9e
        public_6714df1 : nop
        or eax, ebp
        push edi
        mov dword ptr ds : [public_671cfd4], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [public_671cfd8], eax
        call dword ptr ds : [public_671b404]
        mov eax, dword ptr ds : [public_671cfd4]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        add esp, 0x40C
        ret 
        UNREACHABLE_TRAP(0x6714bd0)
    }
}

#undef public_6714bf1
#undef public_6714c2a
#undef public_6714ce5
#undef public_6714d9e
#undef public_6714daf
#undef public_6714dc3
#undef public_6714dd4
#undef public_6714df1
