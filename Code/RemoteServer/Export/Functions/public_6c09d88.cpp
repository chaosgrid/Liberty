#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d88);
CLANG_FORWARD_PROC_SYMBOL(public_6c09f06);

#define public_6c09d9e _public_6c09d9e
#define public_6c09dc6 _public_6c09dc6
#define public_6c09dca _public_6c09dca
#define public_6c09df0 _public_6c09df0
#define public_6c09e07 _public_6c09e07
#define public_6c09e18 _public_6c09e18
#define public_6c09e1d _public_6c09e1d
#define public_6c09e2d _public_6c09e2d
#define public_6c09e30 _public_6c09e30

PROC_DECLARE(0x6c09d88, internal_6c09d88, public_6c09d88);
extern "C" NAKED register_t __cdecl internal_6c09d88()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c09d9e
        cmp dword ptr ds : [public_6c14324], eax
        jle public_6c09dc6
        dec dword ptr ds : [public_6c14324]
        public_6c09d9e : nop
        mov ecx, dword ptr ds : [public_6c0b204]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6c14328], ecx
        jne public_6c09df0
        push 0x80
        call dword ptr ds : [public_6c0b1ec]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6c14334], eax
        jne public_6c09dca
        public_6c09dc6 : nop
        xor eax, eax
        jmp public_6c09e30
        public_6c09dca : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6c14334]
/*FIXUP push offset public_6c136f0 @0x6c09dd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c136f0
/*FIXUP push offset public_6c13000 @0x6c09dd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c13000
        mov dword ptr ds : [public_6c14330], eax
        call public_6c09f06
        inc dword ptr ds : [public_6c14324]
        pop ecx
        pop ecx
        jmp public_6c09e2d
        public_6c09df0 : nop
        test eax, eax
        jne public_6c09e2d
        mov eax, dword ptr ds : [public_6c14334]
        test eax, eax
        je public_6c09e2d
        mov ecx, dword ptr ds : [public_6c14330]
        push esi
        lea esi, ds:[ecx-4]
        public_6c09e07 : nop
        cmp esi, eax
        jb public_6c09e1d
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6c09e18
        call ecx
        mov eax, dword ptr ds : [public_6c14334]
        public_6c09e18 : nop
        sub esi, 4
        jmp public_6c09e07
        public_6c09e1d : nop
        push eax
        call dword ptr ds : [public_6c0b20c]
        and dword ptr ds : [public_6c14334], 0
        pop ecx
        pop esi
        public_6c09e2d : nop
        push 1
        pop eax
        public_6c09e30 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6c09d88)
    }
}

#undef public_6c09d9e
#undef public_6c09dc6
#undef public_6c09dca
#undef public_6c09df0
#undef public_6c09e07
#undef public_6c09e18
#undef public_6c09e1d
#undef public_6c09e2d
#undef public_6c09e30
