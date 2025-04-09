#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e6960);

#define public_4e6982 _public_4e6982
#define public_4e698e _public_4e698e
#define public_4e6990 _public_4e6990
#define public_4e6994 _public_4e6994
#define public_4e69a5 _public_4e69a5
#define public_4e69a9 _public_4e69a9
#define public_4e69b0 _public_4e69b0

PROC_DECLARE(0x4e6960, internal_4e6960, public_4e6960);
extern "C" NAKED register_t __cdecl internal_4e6960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [eax+0x68]
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, edx
        cmp ecx, eax
        je public_4e698e
        public_4e6982 : nop
        cmp dword ptr ds : [ecx+4], esi
        je public_4e69a5
        add ecx, 0xC
        cmp ecx, eax
        jne public_4e6982
        public_4e698e : nop
        xor ecx, ecx
        public_4e6990 : nop
        cmp edx, eax
        je public_4e69b0
        public_4e6994 : nop
        cmp dword ptr ds : [edx], ecx
        je public_4e69a9
        add edx, 0xC
        cmp edx, eax
        jne public_4e6994
        xor al, al
        pop esi
        ret 4
        public_4e69a5 : nop
        mov ecx, dword ptr ds : [ecx]
        jmp public_4e6990
        public_4e69a9 : nop
        mov al, byte ptr ds : [edx+8]
        pop esi
        ret 4
        public_4e69b0 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4e6960)
    }
}

#undef public_4e6982
#undef public_4e698e
#undef public_4e6990
#undef public_4e6994
#undef public_4e69a5
#undef public_4e69a9
#undef public_4e69b0
