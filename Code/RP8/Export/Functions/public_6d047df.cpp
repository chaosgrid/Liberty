#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d046e6);
CLANG_FORWARD_PROC_SYMBOL(public_6d047df);
CLANG_FORWARD_PROC_SYMBOL(public_6d15bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16530);
CLANG_FORWARD_PROC_SYMBOL(public_6d16570);
CLANG_FORWARD_PROC_SYMBOL(public_6d16690);
CLANG_FORWARD_PROC_SYMBOL(public_6d166b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d167a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d167d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a950);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc90);

#define public_6d048e0 _public_6d048e0
#define public_6d048ea _public_6d048ea
#define public_6d04956 _public_6d04956
#define public_6d049a3 _public_6d049a3
#define public_6d04a2b _public_6d04a2b
#define public_6d04a35 _public_6d04a35
#define public_6d04aa1 _public_6d04aa1
#define public_6d04aee _public_6d04aee
#define public_6d04b76 _public_6d04b76
#define public_6d04b80 _public_6d04b80
#define public_6d04bec _public_6d04bec
#define public_6d04c39 _public_6d04c39
#define public_6d04cc1 _public_6d04cc1
#define public_6d04ccb _public_6d04ccb
#define public_6d04d37 _public_6d04d37
#define public_6d04d84 _public_6d04d84
#define public_6d04e0c _public_6d04e0c
#define public_6d04e16 _public_6d04e16
#define public_6d04e82 _public_6d04e82
#define public_6d04ecf _public_6d04ecf
#define public_6d04f57 _public_6d04f57
#define public_6d04f61 _public_6d04f61
#define public_6d04fcd _public_6d04fcd
#define public_6d0501a _public_6d0501a
#define public_6d050b8 _public_6d050b8
#define public_6d050c2 _public_6d050c2
#define public_6d0512e _public_6d0512e
#define public_6d0517b _public_6d0517b
#define public_6d05203 _public_6d05203
#define public_6d0520d _public_6d0520d
#define public_6d05279 _public_6d05279
#define public_6d052c6 _public_6d052c6
#define public_6d0534e _public_6d0534e
#define public_6d05358 _public_6d05358
#define public_6d053c4 _public_6d053c4
#define public_6d05411 _public_6d05411
#define public_6d05499 _public_6d05499
#define public_6d054a3 _public_6d054a3
#define public_6d0550f _public_6d0550f
#define public_6d0555c _public_6d0555c
#define public_6d055e4 _public_6d055e4
#define public_6d055ee _public_6d055ee
#define public_6d0565a _public_6d0565a
#define public_6d056a7 _public_6d056a7
#define public_6d05a59 _public_6d05a59
#define public_6d05ad2 _public_6d05ad2
#define public_6d05ade _public_6d05ade
#define public_6d05b18 _public_6d05b18
#define public_6d05b55 _public_6d05b55
#define public_6d05bc1 _public_6d05bc1
#define public_6d05bed _public_6d05bed
#define public_6d05bfc _public_6d05bfc
#define public_6d05c0d _public_6d05c0d
#define public_6d05c47 _public_6d05c47
#define public_6d05c53 _public_6d05c53
#define public_6d05c7f _public_6d05c7f
#define public_6d05ca4 _public_6d05ca4
#define public_6d05d60 _public_6d05d60
#define public_6d05d65 _public_6d05d65
#define public_6d05d6a _public_6d05d6a
#define public_6d05d8f _public_6d05d8f

PROC_DECLARE(0x6d047df, internal_6d047df, public_6d047df);
extern "C" NAKED register_t __cdecl internal_6d047df()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x5DC
        push esi
        push edi
        mov dword ptr ss : [ebp-0x5A4], ecx
        mov dword ptr ss : [ebp-0x41C], 0
        mov eax, dword ptr ss : [ebp-0x5A4]
        add eax, 0x188
        mov dword ptr ss : [ebp-0x4C4], eax
        mov ecx, dword ptr ss : [ebp-0x4C4]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x4BC], edx
        mov eax, dword ptr ss : [ebp-0x4C4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x4C0], ecx
        mov edx, dword ptr ss : [ebp-0x4BC]
        push edx
        mov eax, dword ptr ss : [ebp-0x4C0]
        push eax
        mov ecx, dword ptr ss : [ebp-0x4C4]
        call public_6d1a950
        push 0x504F4144
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 0
        push 0
        push 0
        push 0
        push 8
        lea ecx, ss:[ebp-0x444]
        call public_6d5cc90
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x444], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d049a3
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-0x4CC], ecx
        mov edx, dword ptr ss : [ebp-0x4CC]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x4D0], eax
        cmp dword ptr ss : [ebp-0x4D0], 0
        je public_6d048e0
/*FIXUP push offset _public_6d16690 @0x6d048b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov eax, dword ptr ss : [ebp-0x4CC]
        push eax
        push 4
        mov ecx, dword ptr ss : [ebp-0x4D0]
        push ecx
        call public_6d166b0
        mov edx, dword ptr ss : [ebp-0x4D0]
        mov dword ptr ss : [ebp-0x5A8], edx
        jmp public_6d048ea
        public_6d048e0 : nop
        mov dword ptr ss : [ebp-0x5A8], 0
        public_6d048ea : nop
        mov eax, dword ptr ss : [ebp-0x5A8]
        mov dword ptr ss : [ebp-0x4C8], eax
        cmp dword ptr ss : [ebp-0x4C8], 0
        je public_6d049a3
        mov ecx, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d04956
        mov edx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [edx+4]
        shl ecx, 2
        mov eax, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [ebp-0x4C8]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x4D4], ecx
        mov edx, dword ptr ss : [ebp-0x4D4]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d04956 : nop
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ss : [ebp-0x4C8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x4D8], eax
        mov ecx, dword ptr ss : [ebp-0x4D8]
        mov edx, dword ptr ss : [ebp-0x444]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [edx+4], ecx
        public_6d049a3 : nop
        push 0
        push 5
        push 6
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x448]
        call public_6d5cc90
        xor eax, eax
        cmp dword ptr ss : [ebp-0x448], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d04aee
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov dword ptr ss : [ebp-0x4E0], eax
        mov ecx, dword ptr ss : [ebp-0x4E0]
        shl ecx, 2
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x4E4], eax
        cmp dword ptr ss : [ebp-0x4E4], 0
        je public_6d04a2b
/*FIXUP push offset _public_6d16690 @0x6d04a03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov edx, dword ptr ss : [ebp-0x4E0]
        push edx
        push 4
        mov eax, dword ptr ss : [ebp-0x4E4]
        push eax
        call public_6d166b0
        mov ecx, dword ptr ss : [ebp-0x4E4]
        mov dword ptr ss : [ebp-0x5AC], ecx
        jmp public_6d04a35
        public_6d04a2b : nop
        mov dword ptr ss : [ebp-0x5AC], 0
        public_6d04a35 : nop
        mov edx, dword ptr ss : [ebp-0x5AC]
        mov dword ptr ss : [ebp-0x4DC], edx
        cmp dword ptr ss : [ebp-0x4DC], 0
        je public_6d04aee
        mov eax, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d04aa1
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [ecx+4]
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp-0x4DC]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x4E8], edx
        mov eax, dword ptr ss : [ebp-0x4E8]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d04aa1 : nop
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ss : [ebp-0x4DC]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x4EC], ecx
        mov edx, dword ptr ss : [ebp-0x4EC]
        mov eax, dword ptr ss : [ebp-0x448]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+4]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [eax+4], edx
        public_6d04aee : nop
        push 0
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x44C]
        call public_6d5cc90
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x44C], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d04c39
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-0x4F4], ecx
        mov edx, dword ptr ss : [ebp-0x4F4]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x4F8], eax
        cmp dword ptr ss : [ebp-0x4F8], 0
        je public_6d04b76
/*FIXUP push offset _public_6d16690 @0x6d04b4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov eax, dword ptr ss : [ebp-0x4F4]
        push eax
        push 4
        mov ecx, dword ptr ss : [ebp-0x4F8]
        push ecx
        call public_6d166b0
        mov edx, dword ptr ss : [ebp-0x4F8]
        mov dword ptr ss : [ebp-0x5B0], edx
        jmp public_6d04b80
        public_6d04b76 : nop
        mov dword ptr ss : [ebp-0x5B0], 0
        public_6d04b80 : nop
        mov eax, dword ptr ss : [ebp-0x5B0]
        mov dword ptr ss : [ebp-0x4F0], eax
        cmp dword ptr ss : [ebp-0x4F0], 0
        je public_6d04c39
        mov ecx, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d04bec
        mov edx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [edx+4]
        shl ecx, 2
        mov eax, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [ebp-0x4F0]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x4FC], ecx
        mov edx, dword ptr ss : [ebp-0x4FC]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d04bec : nop
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ss : [ebp-0x4F0]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x500], eax
        mov ecx, dword ptr ss : [ebp-0x500]
        mov edx, dword ptr ss : [ebp-0x44C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [edx+4], ecx
        public_6d04c39 : nop
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x450]
        call public_6d5cc90
        xor eax, eax
        cmp dword ptr ss : [ebp-0x450], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d04d84
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov dword ptr ss : [ebp-0x508], eax
        mov ecx, dword ptr ss : [ebp-0x508]
        shl ecx, 2
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x50C], eax
        cmp dword ptr ss : [ebp-0x50C], 0
        je public_6d04cc1
/*FIXUP push offset _public_6d16690 @0x6d04c99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov edx, dword ptr ss : [ebp-0x508]
        push edx
        push 4
        mov eax, dword ptr ss : [ebp-0x50C]
        push eax
        call public_6d166b0
        mov ecx, dword ptr ss : [ebp-0x50C]
        mov dword ptr ss : [ebp-0x5B4], ecx
        jmp public_6d04ccb
        public_6d04cc1 : nop
        mov dword ptr ss : [ebp-0x5B4], 0
        public_6d04ccb : nop
        mov edx, dword ptr ss : [ebp-0x5B4]
        mov dword ptr ss : [ebp-0x504], edx
        cmp dword ptr ss : [ebp-0x504], 0
        je public_6d04d84
        mov eax, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d04d37
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [ecx+4]
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp-0x504]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x510], edx
        mov eax, dword ptr ss : [ebp-0x510]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d04d37 : nop
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ss : [ebp-0x504]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x514], ecx
        mov edx, dword ptr ss : [ebp-0x514]
        mov eax, dword ptr ss : [ebp-0x450]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+4]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [eax+4], edx
        public_6d04d84 : nop
        push 0
        push 8
        push 8
        push 8
        push 0x18
        lea ecx, ss:[ebp-0x454]
        call public_6d5cc90
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x454], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d04ecf
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-0x51C], ecx
        mov edx, dword ptr ss : [ebp-0x51C]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x520], eax
        cmp dword ptr ss : [ebp-0x520], 0
        je public_6d04e0c
/*FIXUP push offset _public_6d16690 @0x6d04de4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov eax, dword ptr ss : [ebp-0x51C]
        push eax
        push 4
        mov ecx, dword ptr ss : [ebp-0x520]
        push ecx
        call public_6d166b0
        mov edx, dword ptr ss : [ebp-0x520]
        mov dword ptr ss : [ebp-0x5B8], edx
        jmp public_6d04e16
        public_6d04e0c : nop
        mov dword ptr ss : [ebp-0x5B8], 0
        public_6d04e16 : nop
        mov eax, dword ptr ss : [ebp-0x5B8]
        mov dword ptr ss : [ebp-0x518], eax
        cmp dword ptr ss : [ebp-0x518], 0
        je public_6d04ecf
        mov ecx, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d04e82
        mov edx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [edx+4]
        shl ecx, 2
        mov eax, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [ebp-0x518]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x524], ecx
        mov edx, dword ptr ss : [ebp-0x524]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d04e82 : nop
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ss : [ebp-0x518]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x528], eax
        mov ecx, dword ptr ss : [ebp-0x528]
        mov edx, dword ptr ss : [ebp-0x454]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [edx+4], ecx
        public_6d04ecf : nop
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x458]
        call public_6d5cc90
        xor eax, eax
        cmp dword ptr ss : [ebp-0x458], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d0501a
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov dword ptr ss : [ebp-0x530], eax
        mov ecx, dword ptr ss : [ebp-0x530]
        shl ecx, 2
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x534], eax
        cmp dword ptr ss : [ebp-0x534], 0
        je public_6d04f57
/*FIXUP push offset _public_6d16690 @0x6d04f2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov edx, dword ptr ss : [ebp-0x530]
        push edx
        push 4
        mov eax, dword ptr ss : [ebp-0x534]
        push eax
        call public_6d166b0
        mov ecx, dword ptr ss : [ebp-0x534]
        mov dword ptr ss : [ebp-0x5BC], ecx
        jmp public_6d04f61
        public_6d04f57 : nop
        mov dword ptr ss : [ebp-0x5BC], 0
        public_6d04f61 : nop
        mov edx, dword ptr ss : [ebp-0x5BC]
        mov dword ptr ss : [ebp-0x52C], edx
        cmp dword ptr ss : [ebp-0x52C], 0
        je public_6d0501a
        mov eax, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d04fcd
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [ecx+4]
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp-0x52C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x538], edx
        mov eax, dword ptr ss : [ebp-0x538]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d04fcd : nop
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ss : [ebp-0x52C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x53C], ecx
        mov edx, dword ptr ss : [ebp-0x53C]
        mov eax, dword ptr ss : [ebp-0x458]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+4]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [eax+4], edx
        public_6d0501a : nop
        push 0x544F4144
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 0
        push 5
        push 6
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x45C]
        call public_6d5cc90
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x45C], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0517b
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-0x544], ecx
        mov edx, dword ptr ss : [ebp-0x544]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x548], eax
        cmp dword ptr ss : [ebp-0x548], 0
        je public_6d050b8
/*FIXUP push offset _public_6d16690 @0x6d05090*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov eax, dword ptr ss : [ebp-0x544]
        push eax
        push 4
        mov ecx, dword ptr ss : [ebp-0x548]
        push ecx
        call public_6d166b0
        mov edx, dword ptr ss : [ebp-0x548]
        mov dword ptr ss : [ebp-0x5C0], edx
        jmp public_6d050c2
        public_6d050b8 : nop
        mov dword ptr ss : [ebp-0x5C0], 0
        public_6d050c2 : nop
        mov eax, dword ptr ss : [ebp-0x5C0]
        mov dword ptr ss : [ebp-0x540], eax
        cmp dword ptr ss : [ebp-0x540], 0
        je public_6d0517b
        mov ecx, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d0512e
        mov edx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [edx+4]
        shl ecx, 2
        mov eax, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [ebp-0x540]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x54C], ecx
        mov edx, dword ptr ss : [ebp-0x54C]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d0512e : nop
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ss : [ebp-0x540]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x550], eax
        mov ecx, dword ptr ss : [ebp-0x550]
        mov edx, dword ptr ss : [ebp-0x45C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [edx+4], ecx
        public_6d0517b : nop
        push 0
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x460]
        call public_6d5cc90
        xor eax, eax
        cmp dword ptr ss : [ebp-0x460], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d052c6
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov dword ptr ss : [ebp-0x558], eax
        mov ecx, dword ptr ss : [ebp-0x558]
        shl ecx, 2
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x55C], eax
        cmp dword ptr ss : [ebp-0x55C], 0
        je public_6d05203
/*FIXUP push offset _public_6d16690 @0x6d051db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov edx, dword ptr ss : [ebp-0x558]
        push edx
        push 4
        mov eax, dword ptr ss : [ebp-0x55C]
        push eax
        call public_6d166b0
        mov ecx, dword ptr ss : [ebp-0x55C]
        mov dword ptr ss : [ebp-0x5C4], ecx
        jmp public_6d0520d
        public_6d05203 : nop
        mov dword ptr ss : [ebp-0x5C4], 0
        public_6d0520d : nop
        mov edx, dword ptr ss : [ebp-0x5C4]
        mov dword ptr ss : [ebp-0x554], edx
        cmp dword ptr ss : [ebp-0x554], 0
        je public_6d052c6
        mov eax, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d05279
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [ecx+4]
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp-0x554]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x560], edx
        mov eax, dword ptr ss : [ebp-0x560]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d05279 : nop
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ss : [ebp-0x554]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x564], ecx
        mov edx, dword ptr ss : [ebp-0x564]
        mov eax, dword ptr ss : [ebp-0x460]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+4]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [eax+4], edx
        public_6d052c6 : nop
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x464]
        call public_6d5cc90
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x464], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d05411
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-0x56C], ecx
        mov edx, dword ptr ss : [ebp-0x56C]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x570], eax
        cmp dword ptr ss : [ebp-0x570], 0
        je public_6d0534e
/*FIXUP push offset _public_6d16690 @0x6d05326*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov eax, dword ptr ss : [ebp-0x56C]
        push eax
        push 4
        mov ecx, dword ptr ss : [ebp-0x570]
        push ecx
        call public_6d166b0
        mov edx, dword ptr ss : [ebp-0x570]
        mov dword ptr ss : [ebp-0x5C8], edx
        jmp public_6d05358
        public_6d0534e : nop
        mov dword ptr ss : [ebp-0x5C8], 0
        public_6d05358 : nop
        mov eax, dword ptr ss : [ebp-0x5C8]
        mov dword ptr ss : [ebp-0x568], eax
        cmp dword ptr ss : [ebp-0x568], 0
        je public_6d05411
        mov ecx, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d053c4
        mov edx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [edx+4]
        shl ecx, 2
        mov eax, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [ebp-0x568]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x574], ecx
        mov edx, dword ptr ss : [ebp-0x574]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d053c4 : nop
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ss : [ebp-0x568]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x578], eax
        mov ecx, dword ptr ss : [ebp-0x578]
        mov edx, dword ptr ss : [ebp-0x464]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [edx+4], ecx
        public_6d05411 : nop
        push 0
        push 8
        push 8
        push 8
        push 0x18
        lea ecx, ss:[ebp-0x468]
        call public_6d5cc90
        xor eax, eax
        cmp dword ptr ss : [ebp-0x468], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d0555c
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov dword ptr ss : [ebp-0x580], eax
        mov ecx, dword ptr ss : [ebp-0x580]
        shl ecx, 2
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x584], eax
        cmp dword ptr ss : [ebp-0x584], 0
        je public_6d05499
/*FIXUP push offset _public_6d16690 @0x6d05471*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov edx, dword ptr ss : [ebp-0x580]
        push edx
        push 4
        mov eax, dword ptr ss : [ebp-0x584]
        push eax
        call public_6d166b0
        mov ecx, dword ptr ss : [ebp-0x584]
        mov dword ptr ss : [ebp-0x5CC], ecx
        jmp public_6d054a3
        public_6d05499 : nop
        mov dword ptr ss : [ebp-0x5CC], 0
        public_6d054a3 : nop
        mov edx, dword ptr ss : [ebp-0x5CC]
        mov dword ptr ss : [ebp-0x57C], edx
        cmp dword ptr ss : [ebp-0x57C], 0
        je public_6d0555c
        mov eax, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d0550f
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [ecx+4]
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp-0x57C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x588], edx
        mov eax, dword ptr ss : [ebp-0x588]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d0550f : nop
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ss : [ebp-0x57C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x58C], ecx
        mov edx, dword ptr ss : [ebp-0x58C]
        mov eax, dword ptr ss : [ebp-0x468]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+4]
        add edx, 1
        mov eax, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [eax+4], edx
        public_6d0555c : nop
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x46C]
        call public_6d5cc90
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x46C], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d056a7
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-0x594], ecx
        mov edx, dword ptr ss : [ebp-0x594]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0x598], eax
        cmp dword ptr ss : [ebp-0x598], 0
        je public_6d055e4
/*FIXUP push offset _public_6d16690 @0x6d055bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d16690
        mov eax, dword ptr ss : [ebp-0x594]
        push eax
        push 4
        mov ecx, dword ptr ss : [ebp-0x598]
        push ecx
        call public_6d166b0
        mov edx, dword ptr ss : [ebp-0x598]
        mov dword ptr ss : [ebp-0x5D0], edx
        jmp public_6d055ee
        public_6d055e4 : nop
        mov dword ptr ss : [ebp-0x5D0], 0
        public_6d055ee : nop
        mov eax, dword ptr ss : [ebp-0x5D0]
        mov dword ptr ss : [ebp-0x590], eax
        cmp dword ptr ss : [ebp-0x590], 0
        je public_6d056a7
        mov ecx, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d0565a
        mov edx, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [edx+4]
        shl ecx, 2
        mov eax, dword ptr ss : [ebp-0x41C]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [ebp-0x590]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x59C], ecx
        mov edx, dword ptr ss : [ebp-0x59C]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d0565a : nop
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ss : [ebp-0x590]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x41C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x41C]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ss : [ebp-0x5A0], eax
        mov ecx, dword ptr ss : [ebp-0x5A0]
        mov edx, dword ptr ss : [ebp-0x46C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x41C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0x41C]
        mov dword ptr ds : [edx+4], ecx
        public_6d056a7 : nop
        push 0x31414144
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x470]
        call public_6d5cc90
        lea eax, ss:[ebp-0x470]
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x474]
        call public_6d5cc90
        lea ecx, ss:[ebp-0x474]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x478]
        call public_6d5cc90
        lea edx, ss:[ebp-0x478]
        push edx
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x34414144
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x47C]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x480]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x484]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x38414144
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x488]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x48C]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x490]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x31545844
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[ebp-0x494]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x498]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x32545844
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x49C]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x4A0]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x33545844
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x4A4]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x4A8]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x34545844
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x4AC]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x4B0]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 0x35545844
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        push 8
        push 8
        push 8
        push 8
        push 0x20
        lea ecx, ss:[ebp-0x4B4]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        push 4
        push 4
        push 4
        push 4
        push 0x10
        lea ecx, ss:[ebp-0x4B8]
        call public_6d15bc0
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        call dword ptr ds : [public_6d5e014]
        mov dword ptr ss : [ebp-0x414], eax
        mov dword ptr ss : [ebp-0x418], 0
        mov dword ptr ss : [ebp-0x410], 0
        lea eax, ss:[ebp-0x418]
        push eax
/*FIXUP push offset public_6d64c48 @0x6d05a03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c48
        mov ecx, dword ptr ss : [ebp-0x414]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x414]
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6d05d8f
        push 3
/*FIXUP push offset public_6d64c5c @0x6d05a23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c5c
        mov ecx, dword ptr ss : [ebp-0x418]
        mov dword ptr ss : [ebp-0x5D4], ecx
        mov edx, dword ptr ss : [ebp-0x5D4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x5D4]
        push ecx
        call dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x420], eax
        cmp dword ptr ss : [ebp-0x420], 0
        je public_6d05d8f
        public_6d05a59 : nop
        push 0x400
        lea edx, ss:[ebp-0x408]
        push edx
        mov eax, dword ptr ss : [ebp-0x410]
        push eax
        mov ecx, dword ptr ss : [ebp-0x420]
        push ecx
        mov edx, dword ptr ss : [ebp-0x418]
        mov dword ptr ss : [ebp-0x5D8], edx
        mov eax, dword ptr ss : [ebp-0x5D8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x5D8]
        push edx
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_6d05d6a
        mov eax, dword ptr ss : [ebp-0x410]
        add eax, 1
        mov dword ptr ss : [ebp-0x410], eax
        push 0x3B
        lea ecx, ss:[ebp-0x408]
        push ecx
        call dword ptr ds : [public_6d5e0d0]
        add esp, 8
        mov dword ptr ss : [ebp-0x40C], eax
        cmp dword ptr ss : [ebp-0x40C], 0
        je public_6d05ad2
        mov edx, dword ptr ss : [ebp-0x40C]
        mov byte ptr ds : [edx], 0
        public_6d05ad2 : nop
        lea eax, ss:[ebp-0x408]
        mov dword ptr ss : [ebp-0x40C], eax
        public_6d05ade : nop
        mov ecx, dword ptr ss : [ebp-0x40C]
        movsx edx, byte ptr ds : [ecx]
        test edx, edx
        je public_6d05b18
        mov eax, dword ptr ss : [ebp-0x40C]
        movsx ecx, byte ptr ds : [eax]
        push ecx
/*FIXUP push offset public_6d64c74 @0x6d05af5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c74
        call dword ptr ds : [public_6d5e0d0]
        add esp, 8
        test eax, eax
        je public_6d05b18
        mov edx, dword ptr ss : [ebp-0x40C]
        add edx, 1
        mov dword ptr ss : [ebp-0x40C], edx
        jmp public_6d05ade
        public_6d05b18 : nop
        mov eax, dword ptr ss : [ebp-0x40C]
        mov dword ptr ss : [ebp-0x424], eax
        push 3
/*FIXUP push offset public_6d64c78 @0x6d05b26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c78
        mov ecx, dword ptr ss : [ebp-0x424]
        push ecx
        call dword ptr ds : [public_6d5e104]
        add esp, 0xC
        test eax, eax
        jne public_6d05b55
        mov ecx, dword ptr ss : [ebp-0x5A4]
        add ecx, 0x188
        call public_6d167d0
        jmp public_6d05a59
        public_6d05b55 : nop
        mov edx, dword ptr ss : [ebp-0x424]
        movzx eax, byte ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x424]
        movzx edx, byte ptr ds : [ecx+1]
        shl edx, 8
        or eax, edx
        mov ecx, dword ptr ss : [ebp-0x424]
        movzx edx, byte ptr ds : [ecx+2]
        shl edx, 0x10
        or eax, edx
        mov ecx, dword ptr ss : [ebp-0x424]
        movzx edx, byte ptr ds : [ecx+3]
        shl edx, 0x18
        or eax, edx
        push eax
        mov ecx, dword ptr ss : [ebp-0x5A4]
        call public_6d046e6
        mov dword ptr ss : [ebp-0x41C], eax
        cmp dword ptr ss : [ebp-0x41C], 0
        je public_6d05d65
        mov eax, dword ptr ss : [ebp-0x41C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d05bc1
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16530
        public_6d05bc1 : nop
        mov ecx, dword ptr ss : [ebp-0x40C]
        movsx edx, byte ptr ds : [ecx]
        test edx, edx
        je public_6d05bed
        mov eax, dword ptr ss : [ebp-0x40C]
        movsx ecx, byte ptr ds : [eax]
        cmp ecx, 0x3D
        je public_6d05bed
        mov edx, dword ptr ss : [ebp-0x40C]
        add edx, 1
        mov dword ptr ss : [ebp-0x40C], edx
        jmp public_6d05bc1
        public_6d05bed : nop
        mov eax, dword ptr ss : [ebp-0x40C]
        add eax, 1
        mov dword ptr ss : [ebp-0x40C], eax
        public_6d05bfc : nop
        mov ecx, dword ptr ss : [ebp-0x40C]
        movsx edx, byte ptr ds : [ecx]
        test edx, edx
        je public_6d05d65
        public_6d05c0d : nop
        mov eax, dword ptr ss : [ebp-0x40C]
        movsx ecx, byte ptr ds : [eax]
        test ecx, ecx
        je public_6d05c47
        mov edx, dword ptr ss : [ebp-0x40C]
        movsx eax, byte ptr ds : [edx]
        push eax
/*FIXUP push offset public_6d64c80 @0x6d05c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c80
        call dword ptr ds : [public_6d5e0d0]
        add esp, 8
        test eax, eax
        je public_6d05c47
        mov ecx, dword ptr ss : [ebp-0x40C]
        add ecx, 1
        mov dword ptr ss : [ebp-0x40C], ecx
        jmp public_6d05c0d
        public_6d05c47 : nop
        mov edx, dword ptr ss : [ebp-0x40C]
        mov dword ptr ss : [ebp-0x428], edx
        public_6d05c53 : nop
        mov eax, dword ptr ss : [ebp-0x40C]
        movsx ecx, byte ptr ds : [eax]
        test ecx, ecx
        je public_6d05c7f
        mov edx, dword ptr ss : [ebp-0x40C]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0x2C
        je public_6d05c7f
        mov ecx, dword ptr ss : [ebp-0x40C]
        add ecx, 1
        mov dword ptr ss : [ebp-0x40C], ecx
        jmp public_6d05c53
        public_6d05c7f : nop
        mov edx, dword ptr ss : [ebp-0x40C]
        movsx eax, byte ptr ds : [edx]
        test eax, eax
        je public_6d05ca4
        mov ecx, dword ptr ss : [ebp-0x40C]
        mov byte ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0x40C]
        add edx, 1
        mov dword ptr ss : [ebp-0x40C], edx
        public_6d05ca4 : nop
        mov eax, dword ptr ss : [ebp-0x428]
        cmp eax, dword ptr ss : [ebp-0x40C]
        je public_6d05d60
        mov dword ptr ss : [ebp-0x43C], 0
        mov dword ptr ss : [ebp-0x434], 0
        mov dword ptr ss : [ebp-0x438], 0
        mov dword ptr ss : [ebp-0x430], 0
        mov dword ptr ss : [ebp-0x42C], 0
        lea ecx, ss:[ebp-0x42C]
        push ecx
        lea edx, ss:[ebp-0x430]
        push edx
        lea eax, ss:[ebp-0x438]
        push eax
        lea ecx, ss:[ebp-0x434]
        push ecx
        lea edx, ss:[ebp-0x43C]
        push edx
/*FIXUP push offset public_6d64c84 @0x6d05d0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64c84
        mov eax, dword ptr ss : [ebp-0x428]
        push eax
        call dword ptr ds : [public_6d5e0cc]
        add esp, 0x1C
        mov ecx, dword ptr ss : [ebp-0x42C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x430]
        push edx
        mov eax, dword ptr ss : [ebp-0x438]
        push eax
        mov ecx, dword ptr ss : [ebp-0x434]
        push ecx
        mov edx, dword ptr ss : [ebp-0x43C]
        push edx
        lea ecx, ss:[ebp-0x440]
        call public_6d15bc0
        lea eax, ss:[ebp-0x440]
        push eax
        mov ecx, dword ptr ss : [ebp-0x41C]
        call public_6d16570
        public_6d05d60 : nop
        jmp public_6d05bfc
        public_6d05d65 : nop
        jmp public_6d05a59
        public_6d05d6a : nop
        mov ecx, dword ptr ss : [ebp-0x420]
        push ecx
        mov edx, dword ptr ss : [ebp-0x418]
        mov dword ptr ss : [ebp-0x5DC], edx
        mov eax, dword ptr ss : [ebp-0x5DC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x5DC]
        push edx
        call dword ptr ds : [ecx+0x18]
        public_6d05d8f : nop
        lea ecx, ss:[ebp-0x418]
        call public_6d167a0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d047df)
    }
}

#undef public_6d048e0
#undef public_6d048ea
#undef public_6d04956
#undef public_6d049a3
#undef public_6d04a2b
#undef public_6d04a35
#undef public_6d04aa1
#undef public_6d04aee
#undef public_6d04b76
#undef public_6d04b80
#undef public_6d04bec
#undef public_6d04c39
#undef public_6d04cc1
#undef public_6d04ccb
#undef public_6d04d37
#undef public_6d04d84
#undef public_6d04e0c
#undef public_6d04e16
#undef public_6d04e82
#undef public_6d04ecf
#undef public_6d04f57
#undef public_6d04f61
#undef public_6d04fcd
#undef public_6d0501a
#undef public_6d050b8
#undef public_6d050c2
#undef public_6d0512e
#undef public_6d0517b
#undef public_6d05203
#undef public_6d0520d
#undef public_6d05279
#undef public_6d052c6
#undef public_6d0534e
#undef public_6d05358
#undef public_6d053c4
#undef public_6d05411
#undef public_6d05499
#undef public_6d054a3
#undef public_6d0550f
#undef public_6d0555c
#undef public_6d055e4
#undef public_6d055ee
#undef public_6d0565a
#undef public_6d056a7
#undef public_6d05a59
#undef public_6d05ad2
#undef public_6d05ade
#undef public_6d05b18
#undef public_6d05b55
#undef public_6d05bc1
#undef public_6d05bed
#undef public_6d05bfc
#undef public_6d05c0d
#undef public_6d05c47
#undef public_6d05c53
#undef public_6d05c7f
#undef public_6d05ca4
#undef public_6d05d60
#undef public_6d05d65
#undef public_6d05d6a
#undef public_6d05d8f
