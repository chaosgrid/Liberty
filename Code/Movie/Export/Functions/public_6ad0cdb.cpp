#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf529);
CLANG_FORWARD_PROC_SYMBOL(public_6acf654);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0cdb);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0e96);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);

#define public_6ad0d0e _public_6ad0d0e
#define public_6ad0d2a _public_6ad0d2a
#define public_6ad0d53 _public_6ad0d53
#define public_6ad0d79 _public_6ad0d79
#define public_6ad0d81 _public_6ad0d81

PROC_DECLARE(0x6ad0cdb, internal_6ad0cdb, public_6ad0cdb);
extern "C" NAKED register_t __cdecl internal_6ad0cdb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        call public_6ad1381
        cmp dword ptr ds : [eax+0x68], 0
        je public_6ad0d0e
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6acf529
        add esp, 0x1C
        test eax, eax
        jne public_6ad0d81
        public_6ad0d0e : nop
        mov edi, dword ptr ss : [ebp+0x1C]
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        call public_6acf654
        add esp, 0x14
        mov esi, eax
        public_6ad0d2a : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-8]
        jae public_6ad0d81
        cmp edi, dword ptr ds : [esi]
        jl public_6ad0d79
        cmp edi, dword ptr ds : [esi+4]
        jg public_6ad0d79
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x10]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr ds : [eax-0xC]
        test ecx, ecx
        je public_6ad0d53
        cmp byte ptr ds : [ecx+8], 0
        jne public_6ad0d79
        public_6ad0d53 : nop
        push 1
        add eax, 0xFFFFFFF0
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push esi
        push 0
        push eax
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad0e96
        add esp, 0x2C
        public_6ad0d79 : nop
        inc dword ptr ss : [ebp-4]
        add esi, 0x14
        jmp public_6ad0d2a
        public_6ad0d81 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad0cdb)
    }
}

#undef public_6ad0d0e
#undef public_6ad0d2a
#undef public_6ad0d53
#undef public_6ad0d79
#undef public_6ad0d81
