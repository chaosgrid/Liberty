#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9b40);
CLANG_FORWARD_PROC_SYMBOL(public_4bd5d0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4b9b80 _public_4b9b80
#define public_4b9ba9 _public_4b9ba9

PROC_DECLARE(0x4b9b40, internal_4b9b40, public_4b9b40);
extern "C" NAKED register_t __cdecl internal_4b9b40()
{
    __asm
    {
        mov al, byte ptr ds : [public_672404]
        test al, al
        je public_4b9ba9
        mov eax, dword ptr ds : [public_67232c]
        test eax, eax
        jne public_4b9ba9
/*FIXUP push offset public_5d59fc @0x4b9b52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d59fc
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4b9ba9
        push esi
        mov esi, dword ptr ds : [public_672328]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x20
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_4b9b80
        mov edi, eax
        public_4b9b80 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
/*FIXUP push offset public_67230c @0x4b9b8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67230c
        push eax
        call public_4bd5d0
        mov eax, dword ptr ds : [public_67232c]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [public_67232c], eax
        pop esi
        public_4b9ba9 : nop
        ret 
        UNREACHABLE_TRAP(0x4b9b40)
    }
}

#undef public_4b9b80
#undef public_4b9ba9
