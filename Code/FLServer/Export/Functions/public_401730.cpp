#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401730);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_JUMP_SYMBOL(public_419a7a);

#define public_40177a _public_40177a
#define public_401786 _public_401786
#define public_4017c4 _public_4017c4
#define public_4017d0 _public_4017d0
#define public_4017ff _public_4017ff
#define public_40180b _public_40180b
#define public_40183a _public_40183a
#define public_401843 _public_401843
#define public_401872 _public_401872
#define public_40187e _public_40187e

PROC_DECLARE(0x401730, internal_401730, public_401730);
extern "C" NAKED register_t __cdecl internal_401730()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419a7a @0x401732*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419a7a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov al, byte ptr ds : [esi+0x9AC]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ss : [esp+0x14], 4
        je public_401786
        mov eax, dword ptr ds : [esi+0x76C]
        cmp eax, ebx
        je public_40177a
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        lea ecx, ds:[edx+eax]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_40177a : nop
        mov dword ptr ds : [esi+0x76C], ebx
        mov byte ptr ds : [esi+0x9AC], bl
        public_401786 : nop
        mov ecx, dword ptr ds : [esi+0x774]
        push ecx
        call public_418978
        mov dword ptr ds : [esi+0x774], ebx
        mov dword ptr ds : [esi+0x778], ebx
        mov dword ptr ds : [esi+0x77C], ebx
        mov eax, dword ptr ds : [esi+0x760]
        add esp, 4
        cmp eax, ebx
        je public_4017d0
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_4017c4
        cmp cl, 0xFF
        je public_4017c4
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_4017d0
        public_4017c4 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_4017d0 : nop
        mov dword ptr ds : [esi+0x760], ebx
        mov dword ptr ds : [esi+0x764], ebx
        mov dword ptr ds : [esi+0x768], ebx
        mov eax, dword ptr ds : [esi+0x750]
        cmp eax, ebx
        je public_40180b
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_4017ff
        cmp cl, 0xFF
        je public_4017ff
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_40180b
        public_4017ff : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_40180b : nop
        mov dword ptr ds : [esi+0x750], ebx
        mov dword ptr ds : [esi+0x754], ebx
        mov dword ptr ds : [esi+0x758], ebx
        mov eax, dword ptr ds : [esi+0x73C]
        cmp eax, ebx
        je public_401843
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_40183a
        cmp cl, 0xFF
        je public_40183a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_401843
        public_40183a : nop
        push eax
        call public_418978
        add esp, 4
        public_401843 : nop
        mov dword ptr ds : [esi+0x73C], ebx
        mov dword ptr ds : [esi+0x740], ebx
        mov dword ptr ds : [esi+0x744], ebx
        mov eax, dword ptr ds : [esi+0x61C]
        cmp eax, ebx
        je public_40187e
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_401872
        cmp cl, 0xFF
        je public_401872
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_40187e
        public_401872 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_40187e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x61C], ebx
        mov dword ptr ds : [esi+0x620], ebx
        mov dword ptr ds : [esi+0x624], ebx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x401730)
    }
}

#undef public_40177a
#undef public_401786
#undef public_4017c4
#undef public_4017d0
#undef public_4017ff
#undef public_40180b
#undef public_40183a
#undef public_401843
#undef public_401872
#undef public_40187e
