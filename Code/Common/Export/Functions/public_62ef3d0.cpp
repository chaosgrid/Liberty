#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef3d0);

#define public_62ef3e5 _public_62ef3e5
#define public_62ef3f6 _public_62ef3f6
#define public_62ef42b _public_62ef42b

PROC_DECLARE(0x62ef3d0, internal_62ef3d0, public_62ef3d0);
extern "C" NAKED register_t __cdecl internal_62ef3d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_639902c]
        push esi
        push edi
        mov esi, offset public_63ec810
        xor edi, edi
        public_62ef3e5 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62ef3f6
        push eax
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        je public_62ef42b
        public_62ef3f6 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0xE8
        jb public_62ef3e5
        push ebx
        push 0xE1
/*FIXUP push offset public_63a123c @0x62ef40a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1208 @0x62ef414*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1208
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
        public_62ef42b : nop
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62ef3d0)
    }
}

#undef public_62ef3e5
#undef public_62ef3f6
#undef public_62ef42b
