#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef654a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);

#define public_6ef65ad _public_6ef65ad
#define public_6ef65c6 _public_6ef65c6
#define public_6ef65fc _public_6ef65fc
#define public_6ef65ff _public_6ef65ff
#define public_6ef6607 _public_6ef6607
#define public_6ef6614 _public_6ef6614
#define public_6ef662b _public_6ef662b
#define public_6ef663c _public_6ef663c
#define public_6ef664b _public_6ef664b
#define public_6ef665d _public_6ef665d

PROC_DECLARE(0x6ef65a0, internal_6ef65a0, public_6ef65a0);
extern "C" NAKED register_t __cdecl internal_6ef65a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6efe50c]
        push edi
        public_6ef65ad : nop
        cmp dword ptr ds : [esi+0x10], 0xFFFFFFFF
        je public_6ef664b
        and dword ptr ss : [ebp-4], 0
        lea edi, ds:[esi+0x2010]
        mov ebx, 0x3FF000
        public_6ef65c6 : nop
        cmp dword ptr ds : [edi], 0xF0
        jne public_6ef6607
        mov eax, ebx
        push 0x4000
        add eax, dword ptr ds : [esi+0x10]
        push 0x1000
        push eax
        call dword ptr ds : [public_6efc0ac]
        test eax, eax
        je public_6ef6607
        or dword ptr ds : [edi], 0xFFFFFFFF
        dec dword ptr ds : [public_6f010c4]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6ef65fc
        cmp eax, edi
        jbe public_6ef65ff
        public_6ef65fc : nop
        mov dword ptr ds : [esi+0xC], edi
        public_6ef65ff : nop
        inc dword ptr ss : [ebp-4]
        dec dword ptr ss : [ebp+8]
        je public_6ef6614
        public_6ef6607 : nop
        sub ebx, 0x1000
        sub edi, 8
        test ebx, ebx
        jge public_6ef65c6
        public_6ef6614 : nop
        cmp dword ptr ss : [ebp-4], 0
        mov ecx, esi
        mov esi, dword ptr ds : [esi+4]
        je public_6ef664b
        cmp dword ptr ds : [ecx+0x18], 0xFFFFFFFF
        jne public_6ef664b
        push 1
        lea eax, ds:[ecx+0x20]
        pop edx
        public_6ef662b : nop
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6ef663c
        inc edx
        add eax, 8
        cmp edx, 0x400
        jl public_6ef662b
        public_6ef663c : nop
        cmp edx, 0x400
        jne public_6ef664b
        push ecx
        call public_6ef654a
        pop ecx
        public_6ef664b : nop
        cmp esi, dword ptr ds : [public_6efe50c]
        je public_6ef665d
        cmp dword ptr ss : [ebp+8], 0
        jg public_6ef65ad
        public_6ef665d : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef65a0)
    }
}

#undef public_6ef65ad
#undef public_6ef65c6
#undef public_6ef65fc
#undef public_6ef65ff
#undef public_6ef6607
#undef public_6ef6614
#undef public_6ef662b
#undef public_6ef663c
#undef public_6ef664b
#undef public_6ef665d
