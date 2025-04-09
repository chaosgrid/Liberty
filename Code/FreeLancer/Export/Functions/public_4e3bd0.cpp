#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e3bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543320);

#define public_4e3bf7 _public_4e3bf7
#define public_4e3bf9 _public_4e3bf9
#define public_4e3c29 _public_4e3c29
#define public_4e3c2b _public_4e3c2b
#define public_4e3c4d _public_4e3c4d
#define public_4e3c59 _public_4e3c59
#define public_4e3c5b _public_4e3c5b
#define public_4e3c76 _public_4e3c76
#define public_4e3c80 _public_4e3c80

PROC_DECLARE(0x4e3bd0, internal_4e3bd0, public_4e3bd0);
extern "C" NAKED register_t __cdecl internal_4e3bd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x28]
        xor eax, eax
        test ecx, ecx
        je public_4e3c80
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_4e3c80
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4e3bf7
        lea ecx, ds:[eax-8]
        jmp public_4e3bf9
        public_4e3bf7 : nop
        xor ecx, ecx
        public_4e3bf9 : nop
        push edi
        call public_543320
        mov edi, eax
        mov ecx, edi
        call dword ptr ds : [public_5c656c]
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e3c76
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e3c76
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e3c29
        lea ecx, ds:[eax-8]
        jmp public_4e3c2b
        public_4e3c29 : nop
        xor ecx, ecx
        public_4e3c2b : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x20]
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4e3c4d
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x158]
        test al, al
        je public_4e3c76
        public_4e3c4d : nop
        mov esi, dword ptr ds : [esi+0x28]
        test esi, esi
        je public_4e3c59
        lea eax, ds:[esi-8]
        jmp public_4e3c5b
        public_4e3c59 : nop
        xor eax, eax
        public_4e3c5b : nop
        mov edx, dword ptr ds : [public_673344]
        push edx
        mov edx, dword ptr ds : [public_5c6368]
        movzx edx, word ptr ds : [edx]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x48]
        public_4e3c76 : nop
        mov ecx, edi
        pop edi
        pop esi
        jmp dword ptr ds : [public_5c6348]
        public_4e3c80 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4e3bd0)
    }
}

#undef public_4e3bf7
#undef public_4e3bf9
#undef public_4e3c29
#undef public_4e3c2b
#undef public_4e3c4d
#undef public_4e3c59
#undef public_4e3c5b
#undef public_4e3c76
#undef public_4e3c80
