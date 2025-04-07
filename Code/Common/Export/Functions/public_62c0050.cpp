#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298b10);
CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);

#define public_62c0099 _public_62c0099
#define public_62c00a0 _public_62c00a0
#define public_62c00a4 _public_62c00a4
#define public_62c00c9 _public_62c00c9
#define public_62c00d3 _public_62c00d3

PROC_DECLARE(0x62c0050, internal_62c0050, public_62c0050);
extern "C" NAKED register_t __cdecl internal_62c0050()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        push esi
        push edi
        mov esi, 0xFFFFFFFD
        je public_62c00a0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c00a0
        mov edx, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call public_629b6c0
        mov edi, eax
        test edi, edi
        je public_62c0099
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_62c0099
        xor esi, esi
        jmp public_62c00a4
        public_62c0099 : nop
        mov esi, 0xFFFFFFFE
        jmp public_62c00a4
        public_62c00a0 : nop
        mov edi, dword ptr ss : [esp+0xC]
        public_62c00a4 : nop
        test esi, esi
        jne public_62c00d3
        cmp dword ptr ds : [edi+0x14], 0x80
        jne public_62c00c9
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, edi
        call public_6298b10
        test al, al
        jne public_62c00d3
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_62c00c9 : nop
        pop edi
        mov eax, 0xFFFFFFFD
        pop esi
        ret 8
        public_62c00d3 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62c0050)
    }
}

#undef public_62c0099
#undef public_62c00a0
#undef public_62c00a4
#undef public_62c00c9
#undef public_62c00d3
