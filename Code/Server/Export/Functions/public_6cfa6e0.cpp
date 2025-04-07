#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7880);
CLANG_FORWARD_PROC_SYMBOL(public_6ce78d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d01e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d60190);

#define public_6cfa755 _public_6cfa755
#define public_6cfa770 _public_6cfa770
#define public_6cfa775 _public_6cfa775
#define public_6cfa7c7 _public_6cfa7c7
#define public_6cfa83f _public_6cfa83f
#define public_6cfa850 _public_6cfa850
#define public_6cfa854 _public_6cfa854
#define public_6cfa8a0 _public_6cfa8a0
#define public_6cfa8b3 _public_6cfa8b3
#define public_6cfa8c0 _public_6cfa8c0
#define public_6cfa8c4 _public_6cfa8c4

PROC_DECLARE(0x6cfa6e0, internal_6cfa6e0, public_6cfa6e0);
extern "C" NAKED register_t __cdecl internal_6cfa6e0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [edi]
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cfa8c4
        push ecx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFE
        call public_6d00670
        mov ebx, dword ptr ss : [esp+0x48]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cfa854
        push 0
/*FIXUP push offset public_6d88890 @0x6cfa71f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88890
/*FIXUP push offset public_6d88538 @0x6cfa724*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push 0
        push esi
        call public_6d60190
        mov cl, byte ptr ds : [eax+0x98]
        add esp, 0x14
        test cl, cl
        je public_6cfa755
        mov ecx, dword ptr ss : [esp+0x48]
        push ebx
        push ecx
        push 0
        mov ecx, eax
        call public_6d01e80
        mov dword ptr ss : [esp+0x10], 0
        public_6cfa755 : nop
        mov ebp, dword ptr ss : [esp+0x48]
        cmp ebp, 4
        mov dword ptr ss : [esp+0x1C], 3
        je public_6cfa770
        cmp ebp, 3
        mov byte ptr ss : [esp+0x20], 0
        jne public_6cfa775
        public_6cfa770 : nop
        mov byte ptr ss : [esp+0x20], 1
        public_6cfa775 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        call public_6cf93f0
        add esp, 8
        cmp ebp, 3
        je public_6cfa8c0
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_6cfa854
        mov ebp, dword ptr ds : [eax+4]
        test ebp, ebp
        je public_6cfa854
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_6cfa854
        mov edi, dword ptr ss : [ebp+0x1F8]
        cmp edi, dword ptr ss : [ebp+0x1FC]
        je public_6cfa850
        public_6cfa7c7 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6cfa83f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6cfa83f
        push eax
        call dword ptr ds : [public_6d644dc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cfa83f
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfa83f
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x88]
        cmp ebx, 0xFFFFFFFF
        lea eax, ss:[esp+0x28]
        setne dl
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x34], dl
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 5
        call dword ptr ds : [edx]
        public_6cfa83f : nop
        mov eax, dword ptr ss : [ebp+0x1FC]
        add edi, 8
        cmp edi, eax
        jne public_6cfa7c7
        public_6cfa850 : nop
        mov edi, dword ptr ss : [esp+0x3C]
        public_6cfa854 : nop
        cmp dword ptr ss : [esp+0x48], 3
        je public_6cfa8c0
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfa8b3
        push 0
/*FIXUP push offset public_6d88590 @0x6cfa870*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88590
/*FIXUP push offset public_6d88538 @0x6cfa875*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push 0
        push eax
        call public_6d60190
        add esp, 0x14
        xor esi, esi
        test ebx, ebx
        mov ecx, eax
        jl public_6cfa8a0
        mov eax, dword ptr ds : [edi]
        push eax
        push ebx
        call public_6ce7880
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        public_6cfa8a0 : nop
        mov edx, dword ptr ds : [edi]
        push edx
        push ebx
        call public_6ce78d0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        public_6cfa8b3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        add esp, 0x28
        ret 
        public_6cfa8c0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6cfa8c4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6cfa6e0)
    }
}

#undef public_6cfa755
#undef public_6cfa770
#undef public_6cfa775
#undef public_6cfa7c7
#undef public_6cfa83f
#undef public_6cfa850
#undef public_6cfa854
#undef public_6cfa8a0
#undef public_6cfa8b3
#undef public_6cfa8c0
#undef public_6cfa8c4
