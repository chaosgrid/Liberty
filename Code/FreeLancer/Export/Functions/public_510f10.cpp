#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50f340);
CLANG_FORWARD_PROC_SYMBOL(public_50fb50);
CLANG_FORWARD_PROC_SYMBOL(public_510f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_510f2d _public_510f2d
#define public_510f40 _public_510f40
#define public_510f53 _public_510f53
#define public_510f6d _public_510f6d
#define public_510f87 _public_510f87

PROC_DECLARE(0x510f10, internal_510f10, public_510f10);
extern "C" NAKED register_t __cdecl internal_510f10()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov dword ptr ds : [esi], offset public_5db658
        je public_510f2d
        push eax
        call public_5b7e1d
        add esp, 4
        public_510f2d : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x10], ebx
        je public_510f40
        push eax
        call public_5b7e1d
        add esp, 4
        public_510f40 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], ebx
        je public_510f53
        push eax
        call public_5b7e1d
        add esp, 4
        public_510f53 : nop
        mov edi, dword ptr ds : [esi+0x18]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x14], ebx
        je public_510f6d
        mov ecx, edi
        call public_50f340
        push edi
        call public_5b7e1d
        add esp, 4
        public_510f6d : nop
        mov edi, dword ptr ds : [esi+0x1C]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x18], ebx
        je public_510f87
        mov ecx, edi
        call public_50fb50
        push edi
        call public_5b7e1d
        add esp, 4
        public_510f87 : nop
        pop edi
        mov dword ptr ds : [esi+0x1C], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x510f10)
    }
}

#undef public_510f2d
#undef public_510f40
#undef public_510f53
#undef public_510f6d
#undef public_510f87
