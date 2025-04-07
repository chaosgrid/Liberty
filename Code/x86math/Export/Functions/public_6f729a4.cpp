#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f729a4);
CLANG_FORWARD_PROC_SYMBOL(public_6f72af2);

#define public_6f729ba _public_6f729ba
#define public_6f729e2 _public_6f729e2
#define public_6f729e6 _public_6f729e6
#define public_6f72a0c _public_6f72a0c
#define public_6f72a23 _public_6f72a23
#define public_6f72a34 _public_6f72a34
#define public_6f72a39 _public_6f72a39
#define public_6f72a49 _public_6f72a49
#define public_6f72a4c _public_6f72a4c

PROC_DECLARE(0x6f729a4, internal_6f729a4, public_6f729a4);
extern "C" NAKED register_t __cdecl internal_6f729a4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6f729ba
        cmp dword ptr ds : [public_6f7443c], eax
        jle public_6f729e2
        dec dword ptr ds : [public_6f7443c]
        public_6f729ba : nop
        mov ecx, dword ptr ds : [public_6f7302c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6f74440], ecx
        jne public_6f72a0c
        push 0x80
        call dword ptr ds : [public_6f73028]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6f7444c], eax
        jne public_6f729e6
        public_6f729e2 : nop
        xor eax, eax
        jmp public_6f72a4c
        public_6f729e6 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6f7444c]
/*FIXUP push offset public_6f74008 @0x6f729ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f74008
/*FIXUP push offset public_6f74000 @0x6f729f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f74000
        mov dword ptr ds : [public_6f74448], eax
        call public_6f72af2
        inc dword ptr ds : [public_6f7443c]
        pop ecx
        pop ecx
        jmp public_6f72a49
        public_6f72a0c : nop
        test eax, eax
        jne public_6f72a49
        mov eax, dword ptr ds : [public_6f7444c]
        test eax, eax
        je public_6f72a49
        mov ecx, dword ptr ds : [public_6f74448]
        push esi
        lea esi, ds:[ecx-4]
        public_6f72a23 : nop
        cmp esi, eax
        jb public_6f72a39
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f72a34
        call ecx
        mov eax, dword ptr ds : [public_6f7444c]
        public_6f72a34 : nop
        sub esi, 4
        jmp public_6f72a23
        public_6f72a39 : nop
        push eax
        call dword ptr ds : [public_6f73020]
        and dword ptr ds : [public_6f7444c], 0
        pop ecx
        pop esi
        public_6f72a49 : nop
        push 1
        pop eax
        public_6f72a4c : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f729a4)
    }
}

#undef public_6f729ba
#undef public_6f729e2
#undef public_6f729e6
#undef public_6f72a0c
#undef public_6f72a23
#undef public_6f72a34
#undef public_6f72a39
#undef public_6f72a49
#undef public_6f72a4c
