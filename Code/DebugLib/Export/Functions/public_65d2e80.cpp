#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2e80);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d2ea8 _public_65d2ea8
#define public_65d2eaa _public_65d2eaa
#define public_65d2eef _public_65d2eef
#define public_65d2ef1 _public_65d2ef1

PROC_DECLARE(0x65d2e80, internal_65d2e80, public_65d2e80);
extern "C" NAKED register_t __cdecl internal_65d2e80()
{
    __asm
    {
        push esi
        push edi
        push 0xC
        call public_65d6f71
        add esp, 4
        test eax, eax
        je public_65d2ea8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e31b4
        mov dword ptr ds : [eax], offset public_65e1348
        mov esi, eax
        jmp public_65d2eaa
        public_65d2ea8 : nop
        xor esi, esi
        public_65d2eaa : nop
        mov edi, dword ptr ds : [public_65e1004]
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e31b4 @0x65d2eb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31b4
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
        je public_65d2eef
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_65e31a8
        mov dword ptr ds : [eax], offset public_65e1338
        mov esi, eax
        jmp public_65d2ef1
        public_65d2eef : nop
        xor esi, esi
        public_65d2ef1 : nop
        call edi
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_65e31a8 @0x65d2efa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31a8
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d2e80)
    }
}

#undef public_65d2ea8
#undef public_65d2eaa
#undef public_65d2eef
#undef public_65d2ef1
