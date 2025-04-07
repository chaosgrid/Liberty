#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4e34);

#define public_6ad4e40 _public_6ad4e40
#define public_6ad4e4a _public_6ad4e4a
#define public_6ad4e52 _public_6ad4e52
#define public_6ad4e87 _public_6ad4e87

PROC_DECLARE(0x6ad4e34, internal_6ad4e34, public_6ad4e34);
extern "C" NAKED register_t __cdecl internal_6ad4e34()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, offset public_6addc50
        push esi
        mov ecx, edx
        public_6ad4e40 : nop
        cmp eax, dword ptr ds : [ecx+0x10]
        jbe public_6ad4e4a
        cmp eax, dword ptr ds : [ecx+0x14]
        jb public_6ad4e52
        public_6ad4e4a : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        je public_6ad4e87
        jmp public_6ad4e40
        public_6ad4e52 : nop
        test al, 0xF
        jne public_6ad4e87
        mov esi, eax
        mov edx, 0x100
        and esi, 0xFFF
        cmp esi, edx
        jb public_6ad4e87
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], ecx
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, eax
        and cx, 0xF000
        sub eax, ecx
        mov dword ptr ds : [esi], ecx
        sub eax, edx
        pop esi
        sar eax, 4
        lea eax, ds:[eax+ecx+8]
        ret 
        public_6ad4e87 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad4e34)
    }
}

#undef public_6ad4e40
#undef public_6ad4e4a
#undef public_6ad4e52
#undef public_6ad4e87
