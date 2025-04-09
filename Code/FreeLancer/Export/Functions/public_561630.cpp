#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_561560);
CLANG_FORWARD_PROC_SYMBOL(public_561b20);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);

#define public_5616af _public_5616af
#define public_5616c3 _public_5616c3
#define public_5616d3 _public_5616d3
#define public_5616e0 _public_5616e0

PROC_DECLARE(0x561630, internal_561630, public_561630);
extern "C" NAKED register_t __cdecl internal_561630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x3004
        push esi
        mov esi, ecx
        jne public_5616c3
        push 0
        call public_5645c0
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [esi+0x110]
        add esp, 4
        push 0x18
        push eax
        call public_57c2c0
        mov ecx, dword ptr ds : [esi+0xB8]
/*FIXUP push offset public_5e1b7c @0x561666*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1b7c
        push ecx
        call dword ptr ds : [public_5c71d4]
        add esp, 8
        test eax, eax
        jne public_5616af
        mov edx, dword ptr ds : [esi+0xB8]
        push ebx
        push edi
/*FIXUP push offset public_614344 @0x561681*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_614344
        push edx
        call dword ptr ds : [public_5c70b4]
        mov edi, dword ptr ds : [esi+0x110]
        mov ebx, dword ptr ds : [esi+0xB8]
        add esp, 8
        mov ecx, edi
        call public_57bff0
        push 0
        push ebx
        mov ecx, edi
        call public_57c0e0
        pop edi
        pop ebx
        public_5616af : nop
        mov eax, dword ptr ss : [esp+0xC]
        sub eax, 0x300C
        je public_5616e0
        dec eax
        je public_5616d3
        xor al, al
        pop esi
        ret 0xC
        public_5616c3 : nop
        sub eax, 0xF003
        je public_5616e0
        dec eax
        je public_5616d3
        xor al, al
        pop esi
        ret 0xC
        public_5616d3 : nop
        mov ecx, esi
        call public_561560
        mov al, 1
        pop esi
        ret 0xC
        public_5616e0 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0xE4], 0xFFFFFFFF
        call public_561b20
        mov al, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x561630)
    }
}

#undef public_5616af
#undef public_5616c3
#undef public_5616d3
#undef public_5616e0
