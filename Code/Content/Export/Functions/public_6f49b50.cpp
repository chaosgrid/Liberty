#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b50);

#define public_6f49b62 _public_6f49b62
#define public_6f49b8a _public_6f49b8a
#define public_6f49b92 _public_6f49b92
#define public_6f49b9c _public_6f49b9c
#define public_6f49ba3 _public_6f49ba3
#define public_6f49ba7 _public_6f49ba7
#define public_6f49bac _public_6f49bac

PROC_DECLARE(0x6f49b50, internal_6f49b50, public_6f49b50);
extern "C" NAKED register_t __cdecl internal_6f49b50()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebx
        push esi
        je public_6f49ba7
        mov esi, dword ptr ss : [esp+0xC]
        public_6f49b62 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0xD8]
        cmp ecx, dword ptr ds : [esi]
        je public_6f49bac
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6f49b8a
        push ecx
        call public_6ed1d10
        mov edx, dword ptr ds : [public_6fd0bc0]
        add esp, 4
        jmp public_6f49ba3
        public_6f49b8a : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f49b9c
        public_6f49b92 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f49b92
        public_6f49b9c : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f49ba3
        mov eax, ecx
        public_6f49ba3 : nop
        cmp eax, edx
        jne public_6f49b62
        public_6f49ba7 : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6f49bac : nop
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f49b50)
    }
}

#undef public_6f49b62
#undef public_6f49b8a
#undef public_6f49b92
#undef public_6f49b9c
#undef public_6f49ba3
#undef public_6f49ba7
#undef public_6f49bac
