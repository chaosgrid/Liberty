#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);

#define public_6eb6e18 _public_6eb6e18
#define public_6eb6e28 _public_6eb6e28
#define public_6eb6e60 _public_6eb6e60
#define public_6eb6e86 _public_6eb6e86
#define public_6eb6e8d _public_6eb6e8d

PROC_DECLARE(0x6eb6e00, internal_6eb6e00, public_6eb6e00);
extern "C" NAKED register_t __cdecl internal_6eb6e00()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x10C]
        mov eax, dword ptr ds : [edi+0x110]
        cmp esi, eax
        je public_6eb6e8d
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb6e18 : nop
        cmp dword ptr ds : [esi], ecx
        je public_6eb6e28
        add esi, 0x10
        cmp esi, eax
        jne public_6eb6e18
        pop edi
        pop esi
        ret 0xC
        public_6eb6e28 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+4]
        push 0x3F000000
        push 0
        push 0
        push 0
        push eax
        push ecx
        mov ecx, dword ptr ds : [edi+0x10]
        push edx
        call public_6f72930
        mov edx, dword ptr ds : [edi+0x110]
        lea eax, ds:[esi+0x10]
        cmp eax, edx
        je public_6eb6e86
        push ebx
        lea ecx, ds:[eax-0x10]
        push ebp
        lea esp, ss:[esp]
        public_6eb6e60 : nop
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6eb6e60
        pop ebp
        pop ebx
        public_6eb6e86 : nop
        add dword ptr ds : [edi+0x110], 0xFFFFFFF0
        public_6eb6e8d : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb6e00)
    }
}

#undef public_6eb6e18
#undef public_6eb6e28
#undef public_6eb6e60
#undef public_6eb6e86
#undef public_6eb6e8d
