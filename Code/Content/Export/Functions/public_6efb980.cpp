#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb980);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efb9d0 _public_6efb9d0
#define public_6efba14 _public_6efba14
#define public_6efba18 _public_6efba18

PROC_DECLARE(0x6efb980, internal_6efb980, public_6efb980);
extern "C" NAKED register_t __cdecl internal_6efb980()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ds : [public_6fb3294]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6fbc19c @0x6efb98d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc19c
        push edi
        xor esi, esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6efb9d0
        push 0xC
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6efba14
        mov esi, eax
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], offset public_6fb7b14
        mov byte ptr ds : [eax+8], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], esi
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        setne al
        pop ebp
        ret 
/*FIXUP public_6efb9d0 : nop
        push offset public_6fbbfa4 @0x6efb9d0*/
  FIXUP public_6efb9d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbfa4
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6efba18
        push 0xC
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6efba14
        mov esi, eax
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], offset public_6fb7afc
        mov dword ptr ds : [eax+8], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], esi
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        setne al
        pop ebp
        ret 
        public_6efba14 : nop
        xor eax, eax
        mov esi, eax
        public_6efba18 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], esi
        xor eax, eax
        pop edi
        test esi, esi
        pop esi
        setne al
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6efb980)
    }
}

#undef public_6efb9d0
#undef public_6efba14
#undef public_6efba18
