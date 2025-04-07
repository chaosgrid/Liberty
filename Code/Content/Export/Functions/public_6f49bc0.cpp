#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);

#define public_6f49bd2 _public_6f49bd2
#define public_6f49be3 _public_6f49be3
#define public_6f49bfe _public_6f49bfe
#define public_6f49c06 _public_6f49c06
#define public_6f49c10 _public_6f49c10
#define public_6f49c17 _public_6f49c17
#define public_6f49c1b _public_6f49c1b
#define public_6f49c20 _public_6f49c20

PROC_DECLARE(0x6f49bc0, internal_6f49bc0, public_6f49bc0);
extern "C" NAKED register_t __cdecl internal_6f49bc0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebx
        push esi
        je public_6f49c1b
        mov esi, dword ptr ss : [esp+0xC]
        public_6f49bd2 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f49be3
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        je public_6f49c20
        public_6f49be3 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6f49bfe
        push ecx
        call public_6ed1d10
        mov edx, dword ptr ds : [public_6fd0bc0]
        add esp, 4
        jmp public_6f49c17
        public_6f49bfe : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f49c10
        public_6f49c06 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f49c06
        public_6f49c10 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f49c17
        mov eax, ecx
        public_6f49c17 : nop
        cmp eax, edx
        jne public_6f49bd2
        public_6f49c1b : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6f49c20 : nop
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f49bc0)
    }
}

#undef public_6f49bd2
#undef public_6f49be3
#undef public_6f49bfe
#undef public_6f49c06
#undef public_6f49c10
#undef public_6f49c17
#undef public_6f49c1b
#undef public_6f49c20
