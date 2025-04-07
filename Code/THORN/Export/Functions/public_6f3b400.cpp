#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b330);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b400);

#define public_6f3b421 _public_6f3b421
#define public_6f3b456 _public_6f3b456
#define public_6f3b462 _public_6f3b462
#define public_6f3b46b _public_6f3b46b
#define public_6f3b471 _public_6f3b471
#define public_6f3b47b _public_6f3b47b

PROC_DECLARE(0x6f3b400, internal_6f3b400, public_6f3b400);
extern "C" NAKED register_t __cdecl internal_6f3b400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push eax
        mov ebx, ecx
        call public_6f3b330
        mov esi, dword ptr ds : [ebx+0xDC]
        cmp esi, dword ptr ds : [ebx+0xE0]
        je public_6f3b47b
        push ebp
        push edi
        lea edi, ds:[esi+4]
        public_6f3b421 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[ebx+0xA4]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [edx+0x14]
        test al, al
        jne public_6f3b46b
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[ebx+0xA4]
        push eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [ebx+0xE0]
        cmp edi, ecx
        mov eax, edi
        je public_6f3b462
        mov edx, esi
        sub edx, edi
        public_6f3b456 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6f3b456
        public_6f3b462 : nop
        add dword ptr ds : [ebx+0xE0], 0xFFFFFFFC
        jmp public_6f3b471
        public_6f3b46b : nop
        add esi, 4
        add edi, 4
        public_6f3b471 : nop
        cmp esi, dword ptr ds : [ebx+0xE0]
        jne public_6f3b421
        pop edi
        pop ebp
        public_6f3b47b : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f3b400)
    }
}

#undef public_6f3b421
#undef public_6f3b456
#undef public_6f3b462
#undef public_6f3b46b
#undef public_6f3b471
#undef public_6f3b47b
