#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5310);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5907);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5932);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5c5b);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6110);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6662);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66b9);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66fe);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6a2a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f87);
CLANG_FORWARD_PROC_SYMBOL(public_6ef81b8);

#define public_6ef81d4 _public_6ef81d4
#define public_6ef81e7 _public_6ef81e7
#define public_6ef81f5 _public_6ef81f5
#define public_6ef822d _public_6ef822d
#define public_6ef8244 _public_6ef8244
#define public_6ef8258 _public_6ef8258
#define public_6ef8260 _public_6ef8260
#define public_6ef8267 _public_6ef8267
#define public_6ef828c _public_6ef828c
#define public_6ef82a2 _public_6ef82a2
#define public_6ef82a9 _public_6ef82a9
#define public_6ef82c1 _public_6ef82c1
#define public_6ef82c5 _public_6ef82c5
#define public_6ef82e2 _public_6ef82e2
#define public_6ef82e9 _public_6ef82e9
#define public_6ef8303 _public_6ef8303
#define public_6ef8306 _public_6ef8306
#define public_6ef8352 _public_6ef8352
#define public_6ef836b _public_6ef836b
#define public_6ef8384 _public_6ef8384
#define public_6ef838c _public_6ef838c
#define public_6ef83ad _public_6ef83ad
#define public_6ef83c8 _public_6ef83c8
#define public_6ef83dc _public_6ef83dc
#define public_6ef83e4 _public_6ef83e4
#define public_6ef83e7 _public_6ef83e7
#define public_6ef8405 _public_6ef8405
#define public_6ef8413 _public_6ef8413
#define public_6ef842c _public_6ef842c
#define public_6ef8440 _public_6ef8440
#define public_6ef8442 _public_6ef8442

PROC_DECLARE(0x6ef81b8, internal_6ef81b8, public_6ef81b8);
extern "C" NAKED register_t __cdecl internal_6ef81b8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        test ebx, ebx
        jne public_6ef81d4
        push dword ptr ss : [ebp+0xC]
        call public_6ef45cb
        pop ecx
        jmp public_6ef8442
        public_6ef81d4 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        jne public_6ef81e7
        push ebx
        call public_6ef4512
        pop ecx
        jmp public_6ef8440
        public_6ef81e7 : nop
        mov eax, dword ptr ds : [public_6f02674]
        cmp eax, 3
        jne public_6ef82e9
        public_6ef81f5 : nop
        xor edi, edi
        cmp esi, 0xFFFFFFE0
        ja public_6ef82c5
        push ebx
        call public_6ef5907
        test eax, eax
        pop ecx
        mov dword ptr ss : [ebp+8], eax
        je public_6ef82a2
        cmp esi, dword ptr ds : [public_6f0266c]
        ja public_6ef8260
        push esi
        push ebx
        push eax
        call public_6ef6110
        add esp, 0xC
        test eax, eax
        je public_6ef822d
        mov edi, ebx
        jmp public_6ef8258
        public_6ef822d : nop
        push esi
        call public_6ef5c5b
        mov edi, eax
        pop ecx
        test edi, edi
        je public_6ef8260
        mov eax, dword ptr ds : [ebx-4]
        dec eax
        cmp eax, esi
        jb public_6ef8244
        mov eax, esi
        public_6ef8244 : nop
        push eax
        push ebx
        push edi
        call public_6ef5310
        push ebx
        push dword ptr ss : [ebp+8]
        call public_6ef5932
        add esp, 0x14
        public_6ef8258 : nop
        test edi, edi
        jne public_6ef82e2
        public_6ef8260 : nop
        test esi, esi
        jne public_6ef8267
        push 1
        pop esi
        public_6ef8267 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        push esi
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc080]
        mov edi, eax
        test edi, edi
        je public_6ef82c5
        mov eax, dword ptr ds : [ebx-4]
        dec eax
        cmp eax, esi
        jb public_6ef828c
        mov eax, esi
        public_6ef828c : nop
        push eax
        push ebx
        push edi
        call public_6ef5310
        push ebx
        push dword ptr ss : [ebp+8]
        call public_6ef5932
        add esp, 0x14
        jmp public_6ef82c1
        public_6ef82a2 : nop
        test esi, esi
        jne public_6ef82a9
        push 1
        pop esi
        public_6ef82a9 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        push esi
        push ebx
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc0b4]
        mov edi, eax
        public_6ef82c1 : nop
        test edi, edi
        jne public_6ef82e2
        public_6ef82c5 : nop
        cmp dword ptr ds : [public_6f010d8], 0
        je public_6ef82e2
        push esi
        call public_6ef6f87
        test eax, eax
        pop ecx
        jne public_6ef81f5
        jmp public_6ef8440
        public_6ef82e2 : nop
        mov eax, edi
        jmp public_6ef8442
        public_6ef82e9 : nop
        cmp eax, 2
        jne public_6ef8405
        cmp esi, 0xFFFFFFE0
        ja public_6ef8306
        test esi, esi
        jbe public_6ef8303
        add esi, 0xF
        and esi, 0xFFFFFFF0
        jmp public_6ef8306
        public_6ef8303 : nop
        push 0x10
        pop esi
        public_6ef8306 : nop
        xor edi, edi
        cmp esi, 0xFFFFFFE0
        ja public_6ef83e7
        lea eax, ss:[ebp+0xC]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push ebx
        call public_6ef6662
        mov ebx, eax
        add esp, 0xC
        test ebx, ebx
        je public_6ef83c8
        cmp esi, dword ptr ds : [public_6f0052c]
        jae public_6ef838c
        mov edi, esi
        shr edi, 4
        push edi
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        call public_6ef6a2a
        add esp, 0x10
        test eax, eax
        je public_6ef8352
        mov edi, dword ptr ss : [ebp+8]
        jmp public_6ef8384
        public_6ef8352 : nop
        push edi
        call public_6ef66fe
        mov edi, eax
        pop ecx
        test edi, edi
        je public_6ef838c
        movzx eax, byte ptr ds : [ebx]
        shl eax, 4
        cmp eax, esi
        jb public_6ef836b
        mov eax, esi
        public_6ef836b : nop
        push eax
        push dword ptr ss : [ebp+8]
        push edi
        call public_6ef5310
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        call public_6ef66b9
        add esp, 0x18
        public_6ef8384 : nop
        test edi, edi
        jne public_6ef82e2
        public_6ef838c : nop
        push esi
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc080]
        mov edi, eax
        test edi, edi
        je public_6ef83e4
        movzx eax, byte ptr ds : [ebx]
        shl eax, 4
        cmp eax, esi
        jb public_6ef83ad
        mov eax, esi
        public_6ef83ad : nop
        push eax
        push dword ptr ss : [ebp+8]
        push edi
        call public_6ef5310
        push ebx
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        call public_6ef66b9
        add esp, 0x18
        jmp public_6ef83dc
        public_6ef83c8 : nop
        push esi
        push dword ptr ss : [ebp+8]
        push 0
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc0b4]
        mov edi, eax
        public_6ef83dc : nop
        test edi, edi
        jne public_6ef82e2
        public_6ef83e4 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ef83e7 : nop
        cmp dword ptr ds : [public_6f010d8], 0
        je public_6ef82e2
        push esi
        call public_6ef6f87
        test eax, eax
        pop ecx
        jne public_6ef8306
        jmp public_6ef8440
        public_6ef8405 : nop
        xor eax, eax
        cmp esi, 0xFFFFFFE0
        ja public_6ef842c
        cmp esi, eax
        jne public_6ef8413
        push 1
        pop esi
        public_6ef8413 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        push esi
        push ebx
        push eax
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc0b4]
        test eax, eax
        jne public_6ef8442
        public_6ef842c : nop
        cmp dword ptr ds : [public_6f010d8], 0
        je public_6ef8442
        push esi
        call public_6ef6f87
        test eax, eax
        pop ecx
        jne public_6ef8405
        public_6ef8440 : nop
        xor eax, eax
        public_6ef8442 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef81b8)
    }
}

#undef public_6ef81d4
#undef public_6ef81e7
#undef public_6ef81f5
#undef public_6ef822d
#undef public_6ef8244
#undef public_6ef8258
#undef public_6ef8260
#undef public_6ef8267
#undef public_6ef828c
#undef public_6ef82a2
#undef public_6ef82a9
#undef public_6ef82c1
#undef public_6ef82c5
#undef public_6ef82e2
#undef public_6ef82e9
#undef public_6ef8303
#undef public_6ef8306
#undef public_6ef8352
#undef public_6ef836b
#undef public_6ef8384
#undef public_6ef838c
#undef public_6ef83ad
#undef public_6ef83c8
#undef public_6ef83dc
#undef public_6ef83e4
#undef public_6ef83e7
#undef public_6ef8405
#undef public_6ef8413
#undef public_6ef842c
#undef public_6ef8440
#undef public_6ef8442
