#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345760);
CLANG_FORWARD_PROC_SYMBOL(public_634ad70);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397c41);

#define public_634adbf _public_634adbf
#define public_634adc1 _public_634adc1
#define public_634adf8 _public_634adf8
#define public_634adfa _public_634adfa
#define public_634ae35 _public_634ae35
#define public_634ae3a _public_634ae3a

PROC_DECLARE(0x634ad70, internal_634ad70, public_634ad70);
extern "C" NAKED register_t __cdecl internal_634ad70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397c41 @0x634ad78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397c41
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, ecx
        push edi
        xor eax, eax
        mov ecx, 6
        mov edi, esi
        rep stosd
        mov edi, dword ptr ss : [esp+0x18]
        push 0x20
        mov dword ptr ds : [esi+4], edi
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_634adbf
        push edi
        mov ecx, eax
        call public_6345760
        jmp public_634adc1
        public_634adbf : nop
        xor eax, eax
        public_634adc1 : nop
        push 0x10
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 1
        je public_634adf8
        push 0x10
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a54c0
        jmp public_634adfa
        public_634adf8 : nop
        xor edi, edi
        public_634adfa : nop
        push 0x10
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+8], edi
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 2
        je public_634ae35
        push 0x10
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a54b8
        mov dword ptr ds : [esi+0xC], edi
        jmp public_634ae3a
        public_634ae35 : nop
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        public_634ae3a : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x634ad70)
    }
}

#undef public_634adbf
#undef public_634adc1
#undef public_634adf8
#undef public_634adfa
#undef public_634ae35
#undef public_634ae3a
