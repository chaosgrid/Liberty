#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298590);
CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);

#define public_62c0129 _public_62c0129
#define public_62c0130 _public_62c0130
#define public_62c0134 _public_62c0134
#define public_62c0153 _public_62c0153
#define public_62c015a _public_62c015a

PROC_DECLARE(0x62c00e0, internal_62c00e0, public_62c00e0);
extern "C" NAKED register_t __cdecl internal_62c00e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        push esi
        push edi
        mov esi, 0xFFFFFFFD
        je public_62c0130
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c0130
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call public_629b6c0
        mov edi, eax
        test edi, edi
        je public_62c0129
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_62c0129
        xor esi, esi
        jmp public_62c0134
        public_62c0129 : nop
        mov esi, 0xFFFFFFFE
        jmp public_62c0134
        public_62c0130 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_62c0134 : nop
        test esi, esi
        jne public_62c0153
        cmp dword ptr ds : [edi+0x14], 0x80
        jne public_62c015a
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, edi
        call public_6298590
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [ecx], al
        public_62c0153 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        public_62c015a : nop
        pop edi
        mov eax, 0xFFFFFFFD
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62c00e0)
    }
}

#undef public_62c0129
#undef public_62c0130
#undef public_62c0134
#undef public_62c0153
#undef public_62c015a
