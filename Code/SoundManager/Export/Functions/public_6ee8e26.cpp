#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8e26);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8f7a);

#define public_6ee8e3c _public_6ee8e3c
#define public_6ee8e64 _public_6ee8e64
#define public_6ee8e68 _public_6ee8e68
#define public_6ee8e8e _public_6ee8e8e
#define public_6ee8ea5 _public_6ee8ea5
#define public_6ee8eb6 _public_6ee8eb6
#define public_6ee8ebb _public_6ee8ebb
#define public_6ee8ecb _public_6ee8ecb
#define public_6ee8ece _public_6ee8ece

PROC_DECLARE(0x6ee8e26, internal_6ee8e26, public_6ee8e26);
extern "C" NAKED register_t __cdecl internal_6ee8e26()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6ee8e3c
        cmp dword ptr ds : [public_6eeaf80], eax
        jle public_6ee8e64
        dec dword ptr ds : [public_6eeaf80]
        public_6ee8e3c : nop
        mov ecx, dword ptr ds : [public_6ee9070]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6eec004], ecx
        jne public_6ee8e8e
        push 0x80
        call dword ptr ds : [public_6ee90a0]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6eec010], eax
        jne public_6ee8e68
        public_6ee8e64 : nop
        xor eax, eax
        jmp public_6ee8ece
        public_6ee8e68 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6eec010]
/*FIXUP push offset public_6eea008 @0x6ee8e70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea008
/*FIXUP push offset public_6eea000 @0x6ee8e75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea000
        mov dword ptr ds : [public_6eec00c], eax
        call public_6ee8f7a
        inc dword ptr ds : [public_6eeaf80]
        pop ecx
        pop ecx
        jmp public_6ee8ecb
        public_6ee8e8e : nop
        test eax, eax
        jne public_6ee8ecb
        mov eax, dword ptr ds : [public_6eec010]
        test eax, eax
        je public_6ee8ecb
        mov ecx, dword ptr ds : [public_6eec00c]
        push esi
        lea esi, ds:[ecx-4]
        public_6ee8ea5 : nop
        cmp esi, eax
        jb public_6ee8ebb
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6ee8eb6
        call ecx
        mov eax, dword ptr ds : [public_6eec010]
        public_6ee8eb6 : nop
        sub esi, 4
        jmp public_6ee8ea5
        public_6ee8ebb : nop
        push eax
        call dword ptr ds : [public_6ee90b0]
        and dword ptr ds : [public_6eec010], 0
        pop ecx
        pop esi
        public_6ee8ecb : nop
        push 1
        pop eax
        public_6ee8ece : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ee8e26)
    }
}

#undef public_6ee8e3c
#undef public_6ee8e64
#undef public_6ee8e68
#undef public_6ee8e8e
#undef public_6ee8ea5
#undef public_6ee8eb6
#undef public_6ee8ebb
#undef public_6ee8ecb
#undef public_6ee8ece
