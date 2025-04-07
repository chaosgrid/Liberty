#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6bf0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6d4a);

#define public_65c6c06 _public_65c6c06
#define public_65c6c2e _public_65c6c2e
#define public_65c6c32 _public_65c6c32
#define public_65c6c58 _public_65c6c58
#define public_65c6c6f _public_65c6c6f
#define public_65c6c80 _public_65c6c80
#define public_65c6c85 _public_65c6c85
#define public_65c6c95 _public_65c6c95
#define public_65c6c98 _public_65c6c98

PROC_DECLARE(0x65c6bf0, internal_65c6bf0, public_65c6bf0);
extern "C" NAKED register_t __cdecl internal_65c6bf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_65c6c06
        cmp dword ptr ds : [public_65ca2b0], eax
        jle public_65c6c2e
        dec dword ptr ds : [public_65ca2b0]
        public_65c6c06 : nop
        mov ecx, dword ptr ds : [public_65c708c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_65ca2b4], ecx
        jne public_65c6c58
        push 0x80
        call dword ptr ds : [public_65c7084]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_65ca2c0], eax
        jne public_65c6c32
        public_65c6c2e : nop
        xor eax, eax
        jmp public_65c6c98
        public_65c6c32 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_65ca2c0]
/*FIXUP push offset public_65ca014 @0x65c6c3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca014
/*FIXUP push offset public_65ca000 @0x65c6c3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca000
        mov dword ptr ds : [public_65ca2bc], eax
        call public_65c6d4a
        inc dword ptr ds : [public_65ca2b0]
        pop ecx
        pop ecx
        jmp public_65c6c95
        public_65c6c58 : nop
        test eax, eax
        jne public_65c6c95
        mov eax, dword ptr ds : [public_65ca2c0]
        test eax, eax
        je public_65c6c95
        mov ecx, dword ptr ds : [public_65ca2bc]
        push esi
        lea esi, ds:[ecx-4]
        public_65c6c6f : nop
        cmp esi, eax
        jb public_65c6c85
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_65c6c80
        call ecx
        mov eax, dword ptr ds : [public_65ca2c0]
        public_65c6c80 : nop
        sub esi, 4
        jmp public_65c6c6f
        public_65c6c85 : nop
        push eax
        call dword ptr ds : [public_65c70b8]
        and dword ptr ds : [public_65ca2c0], 0
        pop ecx
        pop esi
        public_65c6c95 : nop
        push 1
        pop eax
        public_65c6c98 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65c6bf0)
    }
}

#undef public_65c6c06
#undef public_65c6c2e
#undef public_65c6c32
#undef public_65c6c58
#undef public_65c6c6f
#undef public_65c6c80
#undef public_65c6c85
#undef public_65c6c95
#undef public_65c6c98
