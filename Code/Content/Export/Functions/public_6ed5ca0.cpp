#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eedbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f580);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed5cbe _public_6ed5cbe
#define public_6ed5cc0 _public_6ed5cc0
#define public_6ed5cf0 _public_6ed5cf0
#define public_6ed5d18 _public_6ed5d18
#define public_6ed5d3d _public_6ed5d3d
#define public_6ed5d41 _public_6ed5d41
#define public_6ed5d61 _public_6ed5d61

PROC_DECLARE(0x6ed5ca0, internal_6ed5ca0, public_6ed5ca0);
extern "C" NAKED register_t __cdecl internal_6ed5ca0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcf154]
        mov al, 1
        test al, cl
        jne public_6ed5cbe
        or cl, al
        mov byte ptr ds : [public_6fcf154], cl
        mov ecx, offset public_6fcf158
        jmp public_6ed5cc0
        public_6ed5cbe : nop
        ret 
        nop 
        public_6ed5cc0 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ed5d3d
        mov ecx, eax
        cmp eax, ecx
        jne public_6ed5d3d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ed5d18
        nop 
        lea esp, ss:[esp]
        public_6ed5cf0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eedbd0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f2f580
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ed5cf0
        public_6ed5d18 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6ed5d61
        public_6ed5d3d : nop
        cmp eax, edi
        je public_6ed5d61
        public_6ed5d41 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f69d00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eed7f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ed5d41
        public_6ed5d61 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ed5ca0)
    }
}

#undef public_6ed5cbe
#undef public_6ed5cc0
#undef public_6ed5cf0
#undef public_6ed5d18
#undef public_6ed5d3d
#undef public_6ed5d41
#undef public_6ed5d61
