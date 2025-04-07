#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6275860);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);

#define public_6275880 _public_6275880
#define public_62758e0 _public_62758e0
#define public_627593a _public_627593a
#define public_627593f _public_627593f
#define public_627594f _public_627594f

PROC_DECLARE(0x6275860, internal_6275860, public_6275860);
extern "C" NAKED register_t __cdecl internal_6275860()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call public_6310170
        test al, al
        je public_627594f
        push ebp
        mov ebp, dword ptr ds : [public_639902c]
        mov edi, edi
/*FIXUP public_6275880 : nop
        push offset public_639a808 @0x6275880*/
  FIXUP public_6275880 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a808
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62758e0
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0xCC], eax
        push 1
        mov ecx, esi
        mov byte ptr ds : [edi+0xD4], 1
        call public_6310560
        test al, al
        jne public_627593f
        push 1
        mov ecx, esi
        call public_6310a30
/*FIXUP push offset public_639a800 @0x62758c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a800
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_627593f
        mov byte ptr ds : [edi+0xD4], al
        jmp public_627593f
/*FIXUP public_62758e0 : nop
        push offset public_639a37c @0x62758e0*/
  FIXUP public_62758e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a37c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627593a
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0xD0], eax
        push 1
        mov ecx, esi
        mov byte ptr ds : [edi+0xD5], 1
        call public_6310560
        test al, al
        jne public_627593f
        push 1
        mov ecx, esi
        call public_6310a30
/*FIXUP push offset public_639a800 @0x6275923*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a800
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_627593f
        mov byte ptr ds : [edi+0xD5], al
        jmp public_627593f
        public_627593a : nop
        call public_6310040
        public_627593f : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6275880
        pop ebp
        public_627594f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6275860)
    }
}

#undef public_6275880
#undef public_62758e0
#undef public_627593a
#undef public_627593f
#undef public_627594f
