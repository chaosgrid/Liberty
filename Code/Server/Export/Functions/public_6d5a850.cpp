#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a850);

#define public_6d5a870 _public_6d5a870
#define public_6d5a881 _public_6d5a881
#define public_6d5a88c _public_6d5a88c
#define public_6d5a8aa _public_6d5a8aa
#define public_6d5a8ac _public_6d5a8ac
#define public_6d5a8b4 _public_6d5a8b4
#define public_6d5a8b7 _public_6d5a8b7
#define public_6d5a8c7 _public_6d5a8c7

PROC_DECLARE(0x6d5a850, internal_6d5a850, public_6d5a850);
extern "C" NAKED register_t __cdecl internal_6d5a850()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [eax+4]
        cmp edi, edx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        je public_6d5a8c7
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_6d5a870 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov ebx, dword ptr ds : [edi+0x14]
        mov edx, offset public_6d64f30
        je public_6d5a881
        mov edx, eax
        public_6d5a881 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov ecx, esi
        jb public_6d5a88c
        mov ecx, ebx
        public_6d5a88c : nop
        mov eax, dword ptr ss : [ebp+4]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_6d64ca4]
        add esp, 0xC
        test eax, eax
        jne public_6d5a8aa
        cmp esi, ebx
        jb public_6d5a8ac
        cmp esi, ebx
        setne al
        test eax, eax
        public_6d5a8aa : nop
        jge public_6d5a8b4
        public_6d5a8ac : nop
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [edi]
        jmp public_6d5a8b7
        public_6d5a8b4 : nop
        mov edi, dword ptr ds : [edi+8]
        public_6d5a8b7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d5a870
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        public_6d5a8c7 : nop
        pop edi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5a850)
    }
}

#undef public_6d5a870
#undef public_6d5a881
#undef public_6d5a88c
#undef public_6d5a8aa
#undef public_6d5a8ac
#undef public_6d5a8b4
#undef public_6d5a8b7
#undef public_6d5a8c7
