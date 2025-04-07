#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d5aa8 _public_65d5aa8
#define public_65d5aaa _public_65d5aaa
#define public_65d5aef _public_65d5aef
#define public_65d5af1 _public_65d5af1

PROC_DECLARE(0x65d5a80, internal_65d5a80, public_65d5a80);
extern "C" NAKED register_t __cdecl internal_65d5a80()
{
    __asm
    {
        push esi
        push edi
        push 0xC
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d5aa8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e3224
        mov dword ptr ds : [eax], offset public_65e1474
        mov esi, eax
        jmp public_65d5aaa
        public_65d5aa8 : nop
        xor esi, esi
        public_65d5aaa : nop
        mov edi, dword ptr ds : [public_65e1004]
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e3224 @0x65d5ab9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3224
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        push 0xC
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d5aef
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e3210
        mov dword ptr ds : [eax], offset public_65e1464
        mov esi, eax
        jmp public_65d5af1
        public_65d5aef : nop
        xor esi, esi
        public_65d5af1 : nop
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e3210 @0x65d5afa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3210
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d5a80)
    }
}

#undef public_65d5aa8
#undef public_65d5aaa
#undef public_65d5aef
#undef public_65d5af1
