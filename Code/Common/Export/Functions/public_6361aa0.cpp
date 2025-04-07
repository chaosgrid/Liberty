#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);

#define public_6361aaf _public_6361aaf
#define public_6361ac4 _public_6361ac4
#define public_6361adb _public_6361adb
#define public_6361ae2 _public_6361ae2
#define public_6361aee _public_6361aee
#define public_6361b03 _public_6361b03
#define public_6361b1a _public_6361b1a
#define public_6361b21 _public_6361b21

PROC_DECLARE(0x6361aa0, internal_6361aa0, public_6361aa0);
extern "C" NAKED register_t __cdecl internal_6361aa0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        xor edi, edi
        cmp word ptr ds : [esi+0x12], bx
        jbe public_6361ac4
        public_6361aaf : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x12]
        inc edi
        cmp edi, eax
        jl public_6361aaf
        public_6361ac4 : nop
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x18]
        cmp eax, ecx
        je public_6361ae2
        cmp eax, ebx
        je public_6361adb
        push eax
        call public_6343fb0
        add esp, 4
        public_6361adb : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov word ptr ds : [esi+0x10], bx
        public_6361ae2 : nop
        mov word ptr ds : [esi+0x12], bx
        xor edi, edi
        cmp word ptr ds : [esi+0x1A], bx
        jbe public_6361b03
        public_6361aee : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x1A]
        inc edi
        cmp edi, ecx
        jl public_6361aee
        public_6361b03 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[esi+0x20]
        cmp eax, edx
        je public_6361b21
        cmp eax, ebx
        je public_6361b1a
        push eax
        call public_6343fb0
        add esp, 4
        public_6361b1a : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov word ptr ds : [esi+0x18], bx
        public_6361b21 : nop
        pop edi
        mov word ptr ds : [esi+0x1A], bx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6361aa0)
    }
}

#undef public_6361aaf
#undef public_6361ac4
#undef public_6361adb
#undef public_6361ae2
#undef public_6361aee
#undef public_6361b03
#undef public_6361b1a
#undef public_6361b21
