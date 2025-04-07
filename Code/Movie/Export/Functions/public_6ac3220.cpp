#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3220);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3570);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4e20);

#define public_6ac3261 _public_6ac3261
#define public_6ac3270 _public_6ac3270
#define public_6ac3277 _public_6ac3277
#define public_6ac3299 _public_6ac3299

PROC_DECLARE(0x6ac3220, internal_6ac3220, public_6ac3220);
extern "C" NAKED register_t __cdecl internal_6ac3220()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        cmp ecx, 1
        mov dword ptr ss : [esp+0xC], eax
        je public_6ac3277
        jle public_6ac3270
        cmp ecx, 3
        jg public_6ac3270
        test al, 1
        push esi
        push 1
        je public_6ac3261
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x12C
        push eax
        push esi
        call public_6ac3140
        pop edi
        pop esi
        ret 0xC
        public_6ac3261 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_6ac3110
        pop edi
        pop esi
        ret 0xC
        public_6ac3270 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        public_6ac3277 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push edx
        push ebx
        lea eax, ss:[esp+0x18]
        push 1
        push eax
        call public_6ac4e20
        test edi, edi
        jge public_6ac3299
        push esi
        push ebx
        push ebx
        call public_6ac3570
        public_6ac3299 : nop
        pop ebx
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3220)
    }
}

#undef public_6ac3261
#undef public_6ac3270
#undef public_6ac3277
#undef public_6ac3299
