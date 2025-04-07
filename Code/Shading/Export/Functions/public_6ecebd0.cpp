#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec69e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ecebe8 _public_6ecebe8
#define public_6ecebf0 _public_6ecebf0
#define public_6ecec18 _public_6ecec18
#define public_6ecec28 _public_6ecec28
#define public_6ecec54 _public_6ecec54

PROC_DECLARE(0x6ecebd0, internal_6ecebd0, public_6ecebd0);
extern "C" NAKED register_t __cdecl internal_6ecebd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+8], ecx
        mov ebx, esi
        je public_6ecec54
        push ebp
        push edi
        jmp public_6ecebf0
        public_6ecebe8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6ecebf0 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_6ecebd0
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [ebx]
        push ecx
        call public_6ed0c50
        mov dword ptr ds : [esi+0x10], 0
        mov ebp, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp edi, ebp
        je public_6ecec28
        public_6ecec18 : nop
        push edi
        call public_6ec69e0
        add edi, 4
        add esp, 4
        cmp edi, ebp
        jne public_6ecec18
        public_6ecec28 : nop
        mov edx, dword ptr ds : [esi+0x18]
        push edx
        call public_6ed0c50
        xor eax, eax
        push esi
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ebx, ecx
        mov esi, ebx
        jne public_6ecebe8
        pop edi
        pop ebp
        public_6ecec54 : nop
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ecebd0)
    }
}

#undef public_6ecebe8
#undef public_6ecebf0
#undef public_6ecec18
#undef public_6ecec28
#undef public_6ecec54
