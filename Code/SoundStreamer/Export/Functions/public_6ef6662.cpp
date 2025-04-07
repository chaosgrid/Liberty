#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6662);

#define public_6ef666e _public_6ef666e
#define public_6ef6678 _public_6ef6678
#define public_6ef6680 _public_6ef6680
#define public_6ef66b5 _public_6ef66b5

PROC_DECLARE(0x6ef6662, internal_6ef6662, public_6ef6662);
extern "C" NAKED register_t __cdecl internal_6ef6662()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, offset public_6efe508
        push esi
        mov ecx, edx
        public_6ef666e : nop
        cmp eax, dword ptr ds : [ecx+0x10]
        jbe public_6ef6678
        cmp eax, dword ptr ds : [ecx+0x14]
        jb public_6ef6680
        public_6ef6678 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        je public_6ef66b5
        jmp public_6ef666e
        public_6ef6680 : nop
        test al, 0xF
        jne public_6ef66b5
        mov esi, eax
        mov edx, 0x100
        and esi, 0xFFF
        cmp esi, edx
        jb public_6ef66b5
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
        public_6ef66b5 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef6662)
    }
}

#undef public_6ef666e
#undef public_6ef6678
#undef public_6ef6680
#undef public_6ef66b5
