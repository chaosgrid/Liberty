#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_552ea0);
CLANG_FORWARD_PROC_SYMBOL(public_552fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c13f8);

#define public_552ee5 _public_552ee5
#define public_552efc _public_552efc
#define public_552f0b _public_552f0b
#define public_552f10 _public_552f10
#define public_552f18 _public_552f18
#define public_552f20 _public_552f20
#define public_552f26 _public_552f26
#define public_552f71 _public_552f71
#define public_552f8c _public_552f8c
#define public_552fa6 _public_552fa6
#define public_552fbd _public_552fbd

PROC_DECLARE(0x552ea0, internal_552ea0, public_552ea0);
extern "C" NAKED register_t __cdecl internal_552ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c13f8 @0x552ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c13f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x19
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_552fbd
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, dword ptr ds : [esi+0x3C]
        je public_552f26
        dec eax
        mov ecx, esi
        je public_552f0b
        dec eax
        je public_552efc
        dec eax
        je public_552ee5
        call public_420f70
        jmp public_552f10
        public_552ee5 : nop
        call public_552fd0
        lea ecx, ds:[esi+0x14]
        call public_420f70
        lea ecx, ds:[esi+0x28]
        call public_552fd0
        jmp public_552f20
        public_552efc : nop
        call public_552fd0
        lea ecx, ds:[esi+0x14]
        call public_552fd0
        jmp public_552f18
        public_552f0b : nop
        call public_552fd0
        public_552f10 : nop
        lea ecx, ds:[esi+0x14]
        call public_420f70
        public_552f18 : nop
        lea ecx, ds:[esi+0x28]
        call public_420f70
        public_552f20 : nop
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x3C], eax
        public_552f26 : nop
        push edi
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
/*FIXUP push offset public_5cad80 @0x552f3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [edx]
        test eax, eax
        jne public_552fa6
        lea ecx, ds:[esi+0x14]
        call public_420d60
        test al, al
        mov edi, dword ptr ss : [esp+0x1C]
        je public_552f71
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        push ecx
        call dword ptr ds : [edx+0x28]
        public_552f71 : nop
        lea ecx, ds:[esi+0x28]
        call public_420d60
        test al, al
        je public_552f8c
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        push ecx
        call dword ptr ds : [edx+0x28]
        public_552f8c : nop
        mov ecx, esi
        call public_420d60
        test al, al
        je public_552fa6
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x28]
        public_552fa6 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        pop edi
        je public_552fbd
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_552fbd : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x552ea0)
    }
}

#undef public_552ee5
#undef public_552efc
#undef public_552f0b
#undef public_552f10
#undef public_552f18
#undef public_552f20
#undef public_552f26
#undef public_552f71
#undef public_552f8c
#undef public_552fa6
#undef public_552fbd
