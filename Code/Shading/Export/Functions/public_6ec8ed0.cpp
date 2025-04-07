#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0540);

#define public_6ec8ee5 _public_6ec8ee5
#define public_6ec8ef4 _public_6ec8ef4
#define public_6ec8ef6 _public_6ec8ef6
#define public_6ec8f0d _public_6ec8f0d
#define public_6ec8f16 _public_6ec8f16

PROC_DECLARE(0x6ec8ed0, internal_6ec8ed0, public_6ec8ed0);
extern "C" NAKED register_t __cdecl internal_6ec8ed0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6ec8f0d
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        public_6ec8ee5 : nop
        mov eax, dword ptr ds : [esi+8]
        xor ecx, ecx
        dec eax
        je public_6ec8ef4
        dec eax
        jne public_6ec8ef6
        mov ecx, ebp
        jmp public_6ec8ef6
        public_6ec8ef4 : nop
        mov ecx, ebx
        public_6ec8ef6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push ecx
        push eax
        call public_6ed0540
        add esp, 8
        test eax, eax
        jne public_6ec8f16
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6ec8ee5
        public_6ec8f0d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        public_6ec8f16 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec8ed0)
    }
}

#undef public_6ec8ee5
#undef public_6ec8ef4
#undef public_6ec8ef6
#undef public_6ec8f0d
#undef public_6ec8f16
