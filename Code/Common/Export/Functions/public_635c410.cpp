#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_635c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_635c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398259);

#define public_635c484 _public_635c484
#define public_635c486 _public_635c486
#define public_635c4a5 _public_635c4a5

PROC_DECLARE(0x635c410, internal_635c410, public_635c410);
extern "C" NAKED register_t __cdecl internal_635c410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398259 @0x635c412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398259
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x144]
        mov dword ptr ss : [esp+8], esi
        call public_635c2c0
        push 0x10
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ds : [esi+0x174], 0
        mov dword ptr ds : [esi+0x178], 0
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], edi
        test edi, edi
        mov byte ptr ss : [esp+0x18], 1
        je public_635c484
        push 0x100
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a56a4
        jmp public_635c486
        public_635c484 : nop
        xor edi, edi
        public_635c486 : nop
        fld dword ptr ds : [public_63a53d0]
        lea eax, ds:[esi+0xA0]
        fld dword ptr ds : [public_63a53d0]
        mov dword ptr ds : [esi+0x170], edi
        mov ecx, eax
        mov edx, 0x29
        public_635c4a5 : nop
        fld st(1)
        add eax, 4
        fstp dword ptr ds : [eax-4]
        sub ecx, 4
        dec edx
        fst dword ptr ds : [ecx+4]
        fxch 
        fadd st(0), st
        fxch 
        fmul dword ptr ds : [public_63a5460]
        jne public_635c4a5
        mov ecx, dword ptr ss : [esp+0x10]
        fstp st(0)
        pop edi
        fstp st(0)
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x635c410)
    }
}

#undef public_635c484
#undef public_635c486
#undef public_635c4a5
