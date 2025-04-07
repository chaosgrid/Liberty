#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63362d0);

#define public_63362e5 _public_63362e5
#define public_63362f6 _public_63362f6
#define public_6336328 _public_6336328

PROC_DECLARE(0x63362d0, internal_63362d0, public_63362d0);
extern "C" NAKED register_t __cdecl internal_63362d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_639902c]
        push esi
        push edi
        mov esi, offset public_63edb80
        xor edi, edi
        public_63362e5 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_63362f6
        push eax
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        je public_6336328
        public_63362f6 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x30
        jb public_63362e5
        push ebx
        push 0x24C
/*FIXUP push offset public_63a4b20 @0x6336307*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_63a4af0 @0x6336311*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4af0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6336328 : nop
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63362d0)
    }
}

#undef public_63362e5
#undef public_63362f6
#undef public_6336328
