#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_4f67e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f70d0);

#define public_4f70e3 _public_4f70e3
#define public_4f7100 _public_4f7100
#define public_4f7139 _public_4f7139

PROC_DECLARE(0x4f70d0, internal_4f70d0, public_4f70d0);
extern "C" NAKED register_t __cdecl internal_4f70d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674f1c]
        push esi
        mov esi, dword ptr ds : [public_674f18]
        push edi
        xor edi, edi
        cmp esi, eax
        je public_4f7100
        public_4f70e3 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, offset public_674f24
        call public_425b30
        mov edi, eax
        mov eax, dword ptr ds : [public_674f1c]
        add esi, 4
        cmp esi, eax
        jne public_4f70e3
        public_4f7100 : nop
        mov eax, dword ptr ds : [public_5c6d78]
        cmp dword ptr ds : [eax], 0
        je public_4f7139
        mov eax, dword ptr ds : [public_674cdc]
        test eax, eax
        jne public_4f7139
/*FIXUP push offset public_674cdc @0x4f7113*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_674cdc
        call public_4f67e0
        add esp, 4
        test al, al
        je public_4f7139
        mov ecx, dword ptr ds : [public_5c6d78]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_674cdc]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        public_4f7139 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f70d0)
    }
}

#undef public_4f70e3
#undef public_4f7100
#undef public_4f7139
