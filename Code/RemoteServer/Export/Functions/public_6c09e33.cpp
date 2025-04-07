#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9860);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d88);

#define public_6c09e4f _public_6c09e4f
#define public_6c09e59 _public_6c09e59
#define public_6c09e6b _public_6c09e6b
#define public_6c09e75 _public_6c09e75
#define public_6c09e77 _public_6c09e77
#define public_6c09e7b _public_6c09e7b
#define public_6c09e97 _public_6c09e97
#define public_6c09ea0 _public_6c09ea0
#define public_6c09eaf _public_6c09eaf
#define public_6c09ec6 _public_6c09ec6
#define public_6c09ec9 _public_6c09ec9

PROC_DECLARE(0x6c09e33, internal_6c09e33, public_6c09e33);
extern "C" NAKED register_t __cdecl internal_6c09e33()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6c09e4f
        cmp dword ptr ds : [public_6c14324], 0
        jmp public_6c09e75
        public_6c09e4f : nop
        cmp esi, 1
        je public_6c09e59
        cmp esi, 2
        jne public_6c09e7b
        public_6c09e59 : nop
        mov eax, dword ptr ds : [public_6c1432c]
        test eax, eax
        je public_6c09e6b
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6c09e77
        public_6c09e6b : nop
        push edi
        push esi
        push ebx
        call public_6c09d88
        test eax, eax
        public_6c09e75 : nop
        jne public_6c09e7b
        public_6c09e77 : nop
        xor eax, eax
        jmp public_6c09ec9
        public_6c09e7b : nop
        push edi
        push esi
        push ebx
        call public_6bd9860
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6c09e97
        test eax, eax
        jne public_6c09ec6
        push edi
        push eax
        push ebx
        call public_6c09d88
        public_6c09e97 : nop
        test esi, esi
        je public_6c09ea0
        cmp esi, 3
        jne public_6c09ec6
        public_6c09ea0 : nop
        push edi
        push esi
        push ebx
        call public_6c09d88
        test eax, eax
        jne public_6c09eaf
        and dword ptr ss : [ebp+0xC], eax
        public_6c09eaf : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6c09ec6
        mov eax, dword ptr ds : [public_6c1432c]
        test eax, eax
        je public_6c09ec6
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6c09ec6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6c09ec9 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c09e33)
    }
}

#undef public_6c09e4f
#undef public_6c09e59
#undef public_6c09e6b
#undef public_6c09e75
#undef public_6c09e77
#undef public_6c09e7b
#undef public_6c09e97
#undef public_6c09ea0
#undef public_6c09eaf
#undef public_6c09ec6
#undef public_6c09ec9
