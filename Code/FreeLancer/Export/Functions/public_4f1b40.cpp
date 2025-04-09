#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4f1b40);
CLANG_FORWARD_PROC_SYMBOL(public_5b736e);

#define public_4f1bc6 _public_4f1bc6
#define public_4f1be7 _public_4f1be7
#define public_4f1bfa _public_4f1bfa
#define public_4f1bff _public_4f1bff
#define public_4f1c14 _public_4f1c14
#define public_4f1c16 _public_4f1c16

PROC_DECLARE(0x4f1b40, internal_4f1b40, public_4f1b40);
extern "C" NAKED register_t __cdecl internal_4f1b40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4f1c16
        call public_42d680
        fadd dword ptr ds : [esi+0x440]
        fst dword ptr ds : [esi+0x440]
        fcom dword ptr ds : [public_5d8f00]
        fnstsw ax
        test ah, 5
        jnp public_4f1c14
        fsub dword ptr ds : [public_5d8f00]
        push ebx
        fstp dword ptr ds : [esi+0x440]
        call public_5b736e
        cmp eax, 0x258
        seta bl
        call public_5b736e
        cmp eax, 0x4B0
        jbe public_4f1bc6
        mov cl, byte ptr ds : [esi+0x444]
        test cl, cl
        mov ecx, dword ptr ds : [esi+0x41C]
/*FIXUP push offset public_679ba8 @0x4f1ba7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        sete al
/*FIXUP push offset public_679ba8 @0x4f1baf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba8
        mov byte ptr ds : [esi+0x444], al
        mov edx, dword ptr ds : [ecx]
        push 0x18
        call dword ptr ds : [edx+0xA8]
        jmp public_4f1be7
        public_4f1bc6 : nop
        mov ecx, dword ptr ds : [esi+0x41C]
/*FIXUP push offset public_679ba4 @0x4f1bcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba4
/*FIXUP push offset public_679ba4 @0x4f1bd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba4
        mov byte ptr ds : [esi+0x444], 0
        mov eax, dword ptr ds : [ecx]
        push 0x18
        call dword ptr ds : [eax+0xA8]
        public_4f1be7 : nop
        test bl, bl
        pop ebx
        je public_4f1bfa
        mov al, byte ptr ds : [esi+0x444]
        test al, al
        jne public_4f1bfa
        xor eax, eax
        jmp public_4f1bff
        public_4f1bfa : nop
        mov eax, 1
        public_4f1bff : nop
        mov ecx, dword ptr ds : [esi+0x41C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        pop esi
        ret 
        public_4f1c14 : nop
        fstp st(0)
        public_4f1c16 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f1b40)
    }
}

#undef public_4f1bc6
#undef public_4f1be7
#undef public_4f1bfa
#undef public_4f1bff
#undef public_4f1c14
#undef public_4f1c16
