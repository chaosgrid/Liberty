#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_662826c);
CLANG_FORWARD_PROC_SYMBOL(public_66283ba);

#define public_6628282 _public_6628282
#define public_66282aa _public_66282aa
#define public_66282ae _public_66282ae
#define public_66282d4 _public_66282d4
#define public_66282eb _public_66282eb
#define public_66282fc _public_66282fc
#define public_6628301 _public_6628301
#define public_6628311 _public_6628311
#define public_6628314 _public_6628314

PROC_DECLARE(0x662826c, internal_662826c, public_662826c);
extern "C" NAKED register_t __cdecl internal_662826c()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6628282
        cmp dword ptr ds : [public_662b1bc], eax
        jle public_66282aa
        dec dword ptr ds : [public_662b1bc]
        public_6628282 : nop
        mov ecx, dword ptr ds : [public_6629064]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_662b1c0], ecx
        jne public_66282d4
        push 0x80
        call dword ptr ds : [public_662903c]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_662b1cc], eax
        jne public_66282ae
        public_66282aa : nop
        xor eax, eax
        jmp public_6628314
        public_66282ae : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_662b1cc]
/*FIXUP push offset public_662a020 @0x66282b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a020
/*FIXUP push offset public_662a000 @0x66282bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a000
        mov dword ptr ds : [public_662b1c8], eax
        call public_66283ba
        inc dword ptr ds : [public_662b1bc]
        pop ecx
        pop ecx
        jmp public_6628311
        public_66282d4 : nop
        test eax, eax
        jne public_6628311
        mov eax, dword ptr ds : [public_662b1cc]
        test eax, eax
        je public_6628311
        mov ecx, dword ptr ds : [public_662b1c8]
        push esi
        lea esi, ds:[ecx-4]
        public_66282eb : nop
        cmp esi, eax
        jb public_6628301
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_66282fc
        call ecx
        mov eax, dword ptr ds : [public_662b1cc]
        public_66282fc : nop
        sub esi, 4
        jmp public_66282eb
        public_6628301 : nop
        push eax
        call dword ptr ds : [public_662902c]
        and dword ptr ds : [public_662b1cc], 0
        pop ecx
        pop esi
        public_6628311 : nop
        push 1
        pop eax
        public_6628314 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x662826c)
    }
}

#undef public_6628282
#undef public_66282aa
#undef public_66282ae
#undef public_66282d4
#undef public_66282eb
#undef public_66282fc
#undef public_6628301
#undef public_6628311
#undef public_6628314
