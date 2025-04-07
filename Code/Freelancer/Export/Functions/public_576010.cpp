#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_575f50);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5762f0);
CLANG_FORWARD_PROC_SYMBOL(public_577c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_576040 _public_576040
#define public_57605c _public_57605c
#define public_576071 _public_576071
#define public_57607e _public_57607e
#define public_576086 _public_576086
#define public_576090 _public_576090
#define public_576097 _public_576097
#define public_57609d _public_57609d
#define public_5760b8 _public_5760b8
#define public_5760c2 _public_5760c2

PROC_DECLARE(0x576010, internal_576010, public_576010);
extern "C" NAKED register_t __cdecl internal_576010()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        push edi
        mov dword ptr ds : [edi], offset public_5cbed8
        call public_577c30
        mov ecx, dword ptr ds : [public_67c3a4]
        add esp, 4
        test ecx, ecx
        je public_5760c2
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_57609d
        push ebx
        lea esp, ss:[esp]
        public_576040 : nop
        cmp dword ptr ds : [eax+0x10], edi
        jne public_57605c
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_67c3a4]
        jmp public_576097
        public_57605c : nop
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_57607e
        mov eax, edx
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_576097
        public_576071 : nop
        mov eax, edx
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        je public_576071
        jmp public_576097
        public_57607e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_576090
        public_576086 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [edx+8]
        je public_576086
        public_576090 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_576097
        mov eax, edx
        public_576097 : nop
        cmp eax, dword ptr ds : [ecx+4]
        jne public_576040
        pop ebx
        public_57609d : nop
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_5760c2
        mov esi, ecx
        test esi, esi
        je public_5760b8
        call public_575f50
        push esi
        call public_5b7e1d
        add esp, 4
        public_5760b8 : nop
        mov dword ptr ds : [public_67c3a4], 0
        public_5760c2 : nop
        push 0
        mov ecx, edi
        call public_5762f0
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x576010)
    }
}

#undef public_576040
#undef public_57605c
#undef public_576071
#undef public_57607e
#undef public_576086
#undef public_576090
#undef public_576097
#undef public_57609d
#undef public_5760b8
#undef public_5760c2
