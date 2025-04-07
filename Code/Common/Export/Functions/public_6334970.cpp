#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6334820);
CLANG_FORWARD_PROC_SYMBOL(public_6334900);
CLANG_FORWARD_PROC_SYMBOL(public_6334970);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6334981 _public_6334981
#define public_6334998 _public_6334998
#define public_6334a27 _public_6334a27
#define public_6334a3b _public_6334a3b
#define public_6334a4d _public_6334a4d

PROC_DECLARE(0x6334970, internal_6334970, public_6334970);
extern "C" NAKED register_t __cdecl internal_6334970()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor edi, edi
        xor ebx, ebx
        cmp eax, edi
        jle public_6334998
        public_6334981 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+ebx*4]
        push ecx
        call public_6334430
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        inc ebx
        cmp ebx, eax
        jl public_6334981
        public_6334998 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov dword ptr ds : [esi+8], edi
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        mov dword ptr ds : [esi+0xC], edi
        call public_6391d5a
        mov ebx, dword ptr ss : [esp+0x20]
        or ebp, 0xFFFFFFFF
        add esp, 0xC
        cmp ebx, ebp
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x1C], edi
        je public_6334a4d
        push esi
/*FIXUP push offset _public_6334820 @0x63349dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6334820
        push ebx
        mov dword ptr ds : [esi+4], edi
        call public_63034f0
        mov edx, dword ptr ds : [esi+4]
        shl edx, 2
        push edx
        call public_6391d9c
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+eax*8]
        shl eax, 3
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+4]
        shl ecx, 2
        push ecx
        mov dword ptr ds : [esi+0xC], eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], eax
        add esp, 0x18
        xor eax, eax
        cmp ecx, edi
        jle public_6334a3b
        public_6334a27 : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+eax*4], edi
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ecx+eax*4], ebp
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        jl public_6334a27
        public_6334a3b : nop
        push esi
/*FIXUP push offset _public_6334900 @0x6334a3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6334900
        push ebx
        mov dword ptr ds : [esi+0x1C], edi
        call public_63034f0
        add esp, 0xC
        public_6334a4d : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x1C], edi
        pop edi
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x18], ebp
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6334970)
    }
}

#undef public_6334981
#undef public_6334998
#undef public_6334a27
#undef public_6334a3b
#undef public_6334a4d
