#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6371ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);

#define public_6371f16 _public_6371f16
#define public_6371f3a _public_6371f3a
#define public_6371f6e _public_6371f6e
#define public_6371fa3 _public_6371fa3
#define public_6371fb0 _public_6371fb0
#define public_6371fd2 _public_6371fd2

PROC_DECLARE(0x6371ee0, internal_6371ee0, public_6371ee0);
extern "C" NAKED register_t __cdecl internal_6371ee0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+8]
        xor ebp, ebp
        push eax
        mov dword ptr ss : [esp+0x14], ebp
        call public_6370570
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_6371f16
        mov ecx, dword ptr ds : [edi+8]
        push ecx
/*FIXUP push offset public_63f0498 @0x6371f04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0498
        call public_6356960
        add esp, 8
        mov ebp, 1
        public_6371f16 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [public_658b85c]
        mov eax, ecx
        and eax, 0xFFFFFF
        cmp eax, edx
        jb public_6371f3a
        push eax
/*FIXUP push offset public_63f0458 @0x6371f2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0458
        call public_6356960
        add esp, 8
        jmp public_6371fb0
        public_6371f3a : nop
        test ebp, ebp
        jne public_6371fb0
        test ecx, 0x8000000
        jne public_6371fd2
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_636ec10
        add esp, 4
        test eax, eax
        je public_6371fd2
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6371fd2
        mov esi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test esi, esi
        je public_6371fd2
        public_6371f6e : nop
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        push eax
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6371fa3
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [esi+0x4C]
        and ecx, 0xFFFFFF
        push ecx
        push edx
/*FIXUP push offset public_63f040c @0x6371f8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f040c
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], esi
        mov ebp, 1
        public_6371fa3 : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_6371f6e
        test ebp, ebp
        je public_6371fd2
        public_6371fb0 : nop
        push edi
        push 0
        push 0
        push 0
/*FIXUP push offset public_63ee94c @0x6371fb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        mov eax, dword ptr ss : [esp+0x24]
        push 0
        push eax
        push 5
        call public_6378600
        add esp, 0x20
        public_6371fd2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6371ee0)
    }
}

#undef public_6371f16
#undef public_6371f3a
#undef public_6371f6e
#undef public_6371fa3
#undef public_6371fb0
#undef public_6371fd2
