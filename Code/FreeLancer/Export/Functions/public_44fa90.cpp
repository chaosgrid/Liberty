#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434eb0);
CLANG_FORWARD_PROC_SYMBOL(public_435320);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_44fa90);

#define public_44fab0 _public_44fab0
#define public_44fad2 _public_44fad2
#define public_44fae2 _public_44fae2
#define public_44fae8 _public_44fae8

PROC_DECLARE(0x44fa90, internal_44fa90, public_44fa90);
extern "C" NAKED register_t __cdecl internal_44fa90()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        je public_44fae8
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x38]
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle public_44fae8
        push ebx
        mov bl, byte ptr ss : [esp+0x18]
        mov edi, edi
        public_44fab0 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x3C]
        cmp dword ptr ds : [eax], 0xA
        jne public_44fae2
        test bl, bl
        je public_44fad2
        mov edx, dword ptr ds : [eax+0x3C]
        push edx
        call public_4356c0
        mov ecx, eax
        call public_435320
        jmp public_44fae2
        public_44fad2 : nop
        mov eax, dword ptr ds : [eax+0x3C]
        push eax
        call public_4356c0
        mov ecx, eax
        call public_434eb0
        public_44fae2 : nop
        inc edi
        cmp edi, ebp
        jl public_44fab0
        pop ebx
        public_44fae8 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x44fa90)
    }
}

#undef public_44fab0
#undef public_44fad2
#undef public_44fae2
#undef public_44fae8
