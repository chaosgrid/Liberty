#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298860);
CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);

#define public_62c01b9 _public_62c01b9
#define public_62c01c0 _public_62c01c0
#define public_62c01c4 _public_62c01c4
#define public_62c01e8 _public_62c01e8
#define public_62c01ef _public_62c01ef

PROC_DECLARE(0x62c0170, internal_62c0170, public_62c0170);
extern "C" NAKED register_t __cdecl internal_62c0170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        push esi
        push edi
        mov esi, 0xFFFFFFFD
        je public_62c01c0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c01c0
        mov edx, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call public_629b6c0
        mov edi, eax
        test edi, edi
        je public_62c01b9
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_62c01b9
        xor esi, esi
        jmp public_62c01c4
        public_62c01b9 : nop
        mov esi, 0xFFFFFFFE
        jmp public_62c01c4
        public_62c01c0 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_62c01c4 : nop
        test esi, esi
        jne public_62c01e8
        cmp dword ptr ds : [edi+0x14], 0x80
        jne public_62c01ef
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov ecx, edi
        call public_6298860
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [edx], al
        public_62c01e8 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 0x10
        public_62c01ef : nop
        pop edi
        mov eax, 0xFFFFFFFD
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x62c0170)
    }
}

#undef public_62c01b9
#undef public_62c01c0
#undef public_62c01c4
#undef public_62c01e8
#undef public_62c01ef
