#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6320370);
CLANG_FORWARD_PROC_SYMBOL(public_6320420);
CLANG_FORWARD_PROC_SYMBOL(public_63782e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_63202a6 _public_63202a6
#define public_63202c5 _public_63202c5
#define public_63202d8 _public_63202d8
#define public_6320305 _public_6320305
#define public_6320319 _public_6320319
#define public_6320332 _public_6320332
#define public_6320350 _public_6320350
#define public_6320352 _public_6320352
#define public_632035a _public_632035a
#define public_6320363 _public_6320363

PROC_DECLARE(0x6320290, internal_6320290, public_6320290);
extern "C" NAKED register_t __cdecl internal_6320290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6401938]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+8]
        je public_63202a6
        cmp dword ptr ds : [eax], esi
        je public_632035a
        public_63202a6 : nop
        mov al, byte ptr ds : [public_6401934]
        push edi
        xor edi, edi
        test al, al
        je public_63202d8
        mov eax, dword ptr ds : [public_64018b8]
        mov ecx, dword ptr ds : [public_64018bc]
        cmp eax, ecx
        je public_6320352
        public_63202c5 : nop
        cmp dword ptr ds : [eax], esi
        je public_6320350
        add eax, 0x90
        cmp eax, ecx
        jne public_63202c5
        jmp public_6320352
        public_63202d8 : nop
        mov cl, byte ptr ds : [public_64018b0]
        mov al, 1
        test al, cl
        jne public_6320305
        mov dl, cl
        or dl, al
        mov ecx, offset public_6401820
        mov byte ptr ds : [public_64018b0], dl
        call public_6320370
/*FIXUP push offset _public_6320420 @0x63202f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6320420
        call public_6391f9e
        add esp, 4
        public_6320305 : nop
        mov dword ptr ds : [public_6401820], esi
        mov esi, dword ptr ds : [public_64018b8]
        test esi, esi
        jne public_6320319
        xor edx, edx
        jmp public_6320332
        public_6320319 : nop
        mov ecx, dword ptr ds : [public_64018bc]
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
/*FIXUP public_6320332 : nop
        push offset _public_63782e0 @0x6320332*/
  FIXUP public_6320332 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63782e0
        push 0x90
        push edx
        push esi
/*FIXUP push offset public_6401820 @0x632033e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6401820
        call dword ptr ds : [public_6399260]
        add esp, 0x14
        test eax, eax
        je public_6320352
        public_6320350 : nop
        mov edi, eax
        public_6320352 : nop
        mov eax, edi
        mov dword ptr ds : [public_6401938], eax
        pop edi
        public_632035a : nop
        test eax, eax
        pop esi
        je public_6320363
        add eax, 4
        ret 
        public_6320363 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6320290)
    }
}

#undef public_63202a6
#undef public_63202c5
#undef public_63202d8
#undef public_6320305
#undef public_6320319
#undef public_6320332
#undef public_6320350
#undef public_6320352
#undef public_632035a
#undef public_6320363
