#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc9a5);

#define public_65dc9b1 _public_65dc9b1
#define public_65dc9bb _public_65dc9bb
#define public_65dc9c3 _public_65dc9c3
#define public_65dc9f8 _public_65dc9f8

PROC_DECLARE(0x65dc9a5, internal_65dc9a5, public_65dc9a5);
extern "C" NAKED register_t __cdecl internal_65dc9a5()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, offset public_65e35c8
        push esi
        mov ecx, edx
        public_65dc9b1 : nop
        cmp eax, dword ptr ds : [ecx+0x10]
        jbe public_65dc9bb
        cmp eax, dword ptr ds : [ecx+0x14]
        jb public_65dc9c3
        public_65dc9bb : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        je public_65dc9f8
        jmp public_65dc9b1
        public_65dc9c3 : nop
        test al, 0xF
        jne public_65dc9f8
        mov esi, eax
        mov edx, 0x100
        and esi, 0xFFF
        cmp esi, edx
        jb public_65dc9f8
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
        public_65dc9f8 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dc9a5)
    }
}

#undef public_65dc9b1
#undef public_65dc9bb
#undef public_65dc9c3
#undef public_65dc9f8
