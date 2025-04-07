#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6626d00);

#define public_6626d0e _public_6626d0e
#define public_6626d32 _public_6626d32
#define public_6626d36 _public_6626d36
#define public_6626d3b _public_6626d3b
#define public_6626d4a _public_6626d4a
#define public_6626d6e _public_6626d6e
#define public_6626d72 _public_6626d72
#define public_6626d77 _public_6626d77
#define public_6626d86 _public_6626d86
#define public_6626d8d _public_6626d8d
#define public_6626db1 _public_6626db1
#define public_6626db5 _public_6626db5
#define public_6626dba _public_6626dba
#define public_6626dc9 _public_6626dc9
#define public_6626ded _public_6626ded

PROC_DECLARE(0x6626d00, internal_6626d00, public_6626d00);
extern "C" NAKED register_t __cdecl internal_6626d00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, offset public_662972c
        mov eax, edi
        public_6626d0e : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6626d36
        test cl, cl
        je public_6626d32
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6626d36
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6626d0e
        public_6626d32 : nop
        xor eax, eax
        jmp public_6626d3b
        public_6626d36 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6626d3b : nop
        test eax, eax
        je public_6626ded
        mov esi, offset public_6629734
        mov eax, edi
        public_6626d4a : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6626d72
        test cl, cl
        je public_6626d6e
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6626d72
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6626d4a
        public_6626d6e : nop
        xor eax, eax
        jmp public_6626d77
        public_6626d72 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6626d77 : nop
        test eax, eax
        jne public_6626d86
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        ret 4
        public_6626d86 : nop
        mov esi, offset public_6629740
        mov eax, edi
        public_6626d8d : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6626db5
        test cl, cl
        je public_6626db1
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6626db5
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6626d8d
        public_6626db1 : nop
        xor eax, eax
        jmp public_6626dba
        public_6626db5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6626dba : nop
        test eax, eax
        jne public_6626dc9
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 4
/*FIXUP public_6626dc9 : nop
        push offset public_662ac5c @0x6626dc9*/
  FIXUP public_6626dc9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_662ac5c
        push 0x25F
        mov eax, 0x100002
/*FIXUP push offset public_662aac0 @0x6626dd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aac0
/*FIXUP push offset public_662a0d4 @0x6626ddd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6626ded : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6626d00)
    }
}

#undef public_6626d0e
#undef public_6626d32
#undef public_6626d36
#undef public_6626d3b
#undef public_6626d4a
#undef public_6626d6e
#undef public_6626d72
#undef public_6626d77
#undef public_6626d86
#undef public_6626d8d
#undef public_6626db1
#undef public_6626db5
#undef public_6626dba
#undef public_6626dc9
#undef public_6626ded
