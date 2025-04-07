#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34f46);
CLANG_FORWARD_PROC_SYMBOL(public_6c35094);

#define public_6c34f5c _public_6c34f5c
#define public_6c34f84 _public_6c34f84
#define public_6c34f88 _public_6c34f88
#define public_6c34fae _public_6c34fae
#define public_6c34fc5 _public_6c34fc5
#define public_6c34fd6 _public_6c34fd6
#define public_6c34fdb _public_6c34fdb
#define public_6c34feb _public_6c34feb
#define public_6c34fee _public_6c34fee

PROC_DECLARE(0x6c34f46, internal_6c34f46, public_6c34f46);
extern "C" NAKED register_t __cdecl internal_6c34f46()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c34f5c
        cmp dword ptr ds : [public_6c37d6c], eax
        jle public_6c34f84
        dec dword ptr ds : [public_6c37d6c]
        public_6c34f5c : nop
        mov ecx, dword ptr ds : [public_6c36078]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6c38184], ecx
        jne public_6c34fae
        push 0x80
        call dword ptr ds : [public_6c36060]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6c38190], eax
        jne public_6c34f88
        public_6c34f84 : nop
        xor eax, eax
        jmp public_6c34fee
        public_6c34f88 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6c38190]
/*FIXUP push offset public_6c37008 @0x6c34f90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37008
/*FIXUP push offset public_6c37000 @0x6c34f95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37000
        mov dword ptr ds : [public_6c3818c], eax
        call public_6c35094
        inc dword ptr ds : [public_6c37d6c]
        pop ecx
        pop ecx
        jmp public_6c34feb
        public_6c34fae : nop
        test eax, eax
        jne public_6c34feb
        mov eax, dword ptr ds : [public_6c38190]
        test eax, eax
        je public_6c34feb
        mov ecx, dword ptr ds : [public_6c3818c]
        push esi
        lea esi, ds:[ecx-4]
        public_6c34fc5 : nop
        cmp esi, eax
        jb public_6c34fdb
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6c34fd6
        call ecx
        mov eax, dword ptr ds : [public_6c38190]
        public_6c34fd6 : nop
        sub esi, 4
        jmp public_6c34fc5
        public_6c34fdb : nop
        push eax
        call dword ptr ds : [public_6c3603c]
        and dword ptr ds : [public_6c38190], 0
        pop ecx
        pop esi
        public_6c34feb : nop
        push 1
        pop eax
        public_6c34fee : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6c34f46)
    }
}

#undef public_6c34f5c
#undef public_6c34f84
#undef public_6c34f88
#undef public_6c34fae
#undef public_6c34fc5
#undef public_6c34fd6
#undef public_6c34fdb
#undef public_6c34feb
#undef public_6c34fee
