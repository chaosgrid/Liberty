#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0cf6);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0e44);

#define public_6ed0d0c _public_6ed0d0c
#define public_6ed0d34 _public_6ed0d34
#define public_6ed0d38 _public_6ed0d38
#define public_6ed0d5e _public_6ed0d5e
#define public_6ed0d75 _public_6ed0d75
#define public_6ed0d86 _public_6ed0d86
#define public_6ed0d8b _public_6ed0d8b
#define public_6ed0d9b _public_6ed0d9b
#define public_6ed0d9e _public_6ed0d9e

PROC_DECLARE(0x6ed0cf6, internal_6ed0cf6, public_6ed0cf6);
extern "C" NAKED register_t __cdecl internal_6ed0cf6()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6ed0d0c
        cmp dword ptr ds : [public_6ed5854], eax
        jle public_6ed0d34
        dec dword ptr ds : [public_6ed5854]
        public_6ed0d0c : nop
        mov ecx, dword ptr ds : [public_6ed1080]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6ed7f4c], ecx
        jne public_6ed0d5e
        push 0x80
        call dword ptr ds : [public_6ed1068]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6ed7f58], eax
        jne public_6ed0d38
        public_6ed0d34 : nop
        xor eax, eax
        jmp public_6ed0d9e
        public_6ed0d38 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6ed7f58]
/*FIXUP push offset public_6ed400c @0x6ed0d40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed400c
/*FIXUP push offset public_6ed4000 @0x6ed0d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4000
        mov dword ptr ds : [public_6ed7f54], eax
        call public_6ed0e44
        inc dword ptr ds : [public_6ed5854]
        pop ecx
        pop ecx
        jmp public_6ed0d9b
        public_6ed0d5e : nop
        test eax, eax
        jne public_6ed0d9b
        mov eax, dword ptr ds : [public_6ed7f58]
        test eax, eax
        je public_6ed0d9b
        mov ecx, dword ptr ds : [public_6ed7f54]
        push esi
        lea esi, ds:[ecx-4]
        public_6ed0d75 : nop
        cmp esi, eax
        jb public_6ed0d8b
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6ed0d86
        call ecx
        mov eax, dword ptr ds : [public_6ed7f58]
        public_6ed0d86 : nop
        sub esi, 4
        jmp public_6ed0d75
        public_6ed0d8b : nop
        push eax
        call dword ptr ds : [public_6ed1054]
        and dword ptr ds : [public_6ed7f58], 0
        pop ecx
        pop esi
        public_6ed0d9b : nop
        push 1
        pop eax
        public_6ed0d9e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0cf6)
    }
}

#undef public_6ed0d0c
#undef public_6ed0d34
#undef public_6ed0d38
#undef public_6ed0d5e
#undef public_6ed0d75
#undef public_6ed0d86
#undef public_6ed0d8b
#undef public_6ed0d9b
#undef public_6ed0d9e
