#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf654);
CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad08fd);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0b28);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0cdb);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0d85);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0e96);
CLANG_FORWARD_PROC_SYMBOL(public_6ad121a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);
CLANG_FORWARD_PROC_SYMBOL(public_6ad533b);

#define public_6ad0b48 _public_6ad0b48
#define public_6ad0b4d _public_6ad0b4d
#define public_6ad0baf _public_6ad0baf
#define public_6ad0bcd _public_6ad0bcd
#define public_6ad0c04 _public_6ad0c04
#define public_6ad0c29 _public_6ad0c29
#define public_6ad0c3b _public_6ad0c3b
#define public_6ad0c5a _public_6ad0c5a
#define public_6ad0c69 _public_6ad0c69
#define public_6ad0c8d _public_6ad0c8d
#define public_6ad0c90 _public_6ad0c90
#define public_6ad0c9b _public_6ad0c9b
#define public_6ad0cab _public_6ad0cab
#define public_6ad0cb0 _public_6ad0cb0
#define public_6ad0cd6 _public_6ad0cd6

PROC_DECLARE(0x6ad0b28, internal_6ad0b28, public_6ad0b28);
extern "C" NAKED register_t __cdecl internal_6ad0b28()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0xC]
        and byte ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x10], eax
        jl public_6ad0b48
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp eax, dword ptr ds : [ecx+4]
        jl public_6ad0b4d
        public_6ad0b48 : nop
        call public_6ad08fd
        public_6ad0b4d : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, 0xE06D7363
        push edi
        mov edi, 0x19930520
        cmp dword ptr ds : [esi], ebx
        jne public_6ad0cb0
        cmp dword ptr ds : [esi+0x10], 3
        jne public_6ad0bcd
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ad0bcd
        cmp dword ptr ds : [esi+0x1C], 0
        jne public_6ad0bcd
        call public_6ad1381
        cmp dword ptr ds : [eax+0x6C], 0
        je public_6ad0cab
        call public_6ad1381
        mov esi, dword ptr ds : [eax+0x6C]
        call public_6ad1381
        mov eax, dword ptr ds : [eax+0x70]
        push 1
        push esi
        mov dword ptr ss : [ebp+0x10], eax
        mov byte ptr ss : [ebp-0x14], 1
        call public_6ad533b
        pop ecx
        test eax, eax
        pop ecx
        jne public_6ad0baf
        call public_6ad08fd
        public_6ad0baf : nop
        cmp dword ptr ds : [esi], ebx
        jne public_6ad0cb0
        cmp dword ptr ds : [esi+0x10], 3
        jne public_6ad0bcd
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ad0bcd
        cmp dword ptr ds : [esi+0x1C], 0
        jne public_6ad0bcd
        call public_6ad08fd
        public_6ad0bcd : nop
        cmp dword ptr ds : [esi], ebx
        jne public_6ad0cb0
        cmp dword ptr ds : [esi+0x10], 3
        jne public_6ad0cb0
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ad0cb0
        mov edi, dword ptr ss : [ebp-0x10]
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        call public_6acf654
        add esp, 0x14
        mov ebx, eax
        public_6ad0c04 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_6ad0c9b
        cmp dword ptr ds : [ebx], edi
        jg public_6ad0c90
        cmp edi, dword ptr ds : [ebx+4]
        jg public_6ad0c90
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        mov dword ptr ss : [ebp-0xC], eax
        jle public_6ad0c8d
        public_6ad0c29 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0xC]
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ss : [ebp-8], eax
        jle public_6ad0c5a
        public_6ad0c3b : nop
        push dword ptr ds : [esi+0x1C]
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+8]
        call public_6ad0d85
        add esp, 0xC
        test eax, eax
        jne public_6ad0c69
        dec dword ptr ss : [ebp-8]
        add edi, 4
        cmp dword ptr ss : [ebp-8], eax
        jg public_6ad0c3b
        public_6ad0c5a : nop
        dec dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp+8], 0x10
        cmp dword ptr ss : [ebp-0xC], 0
        jg public_6ad0c29
        jmp public_6ad0c8d
        public_6ad0c69 : nop
        push dword ptr ss : [ebp-0x14]
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push ebx
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6ad0e96
        add esp, 0x2C
        public_6ad0c8d : nop
        mov edi, dword ptr ss : [ebp-0x10]
        public_6ad0c90 : nop
        inc dword ptr ss : [ebp-4]
        add ebx, 0x14
        jmp public_6ad0c04
        public_6ad0c9b : nop
        cmp byte ptr ss : [ebp+0x1C], 0
        je public_6ad0cab
        push 1
        push esi
        call public_6ad121a
        pop ecx
        pop ecx
        public_6ad0cab : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad0cb0 : nop
        cmp byte ptr ss : [ebp+0x1C], 0
        jne public_6ad0cd6
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp-0x10]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6ad0cdb
        add esp, 0x20
        jmp public_6ad0cab
        public_6ad0cd6 : nop
        jmp public_6ad089c
        UNREACHABLE_TRAP(0x6ad0b28)
    }
}

#undef public_6ad0b48
#undef public_6ad0b4d
#undef public_6ad0baf
#undef public_6ad0bcd
#undef public_6ad0c04
#undef public_6ad0c29
#undef public_6ad0c3b
#undef public_6ad0c5a
#undef public_6ad0c69
#undef public_6ad0c8d
#undef public_6ad0c90
#undef public_6ad0c9b
#undef public_6ad0cab
#undef public_6ad0cb0
#undef public_6ad0cd6
