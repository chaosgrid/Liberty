#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a900);

#define public_680a91f _public_680a91f
#define public_680a926 _public_680a926
#define public_680a92b _public_680a92b
#define public_680a945 _public_680a945
#define public_680a94c _public_680a94c
#define public_680a956 _public_680a956

PROC_DECLARE(0x680a900, internal_680a900, public_680a900);
extern "C" NAKED register_t __cdecl internal_680a900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_680a91f
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_680a926
        public_680a91f : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_680a926 : nop
        cmp eax, 0x23
        jne public_680a956
        public_680a92b : nop
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_680a945
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_680a94c
        public_680a945 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_680a94c : nop
        cmp eax, 0xA
        je public_680a956
        cmp eax, 0xFFFFFFFF
        jne public_680a92b
        public_680a956 : nop
        mov eax, dword ptr ds : [esi+0x18]
        inc dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [esi+4]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x680a900)
    }
}

#undef public_680a91f
#undef public_680a926
#undef public_680a92b
#undef public_680a945
#undef public_680a94c
#undef public_680a956
