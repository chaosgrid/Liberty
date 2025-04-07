#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bf20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c530);

#define public_6d5bf40 _public_6d5bf40
#define public_6d5bf85 _public_6d5bf85
#define public_6d5bf92 _public_6d5bf92
#define public_6d5bfa0 _public_6d5bfa0
#define public_6d5bfae _public_6d5bfae
#define public_6d5bfb5 _public_6d5bfb5
#define public_6d5bfb9 _public_6d5bfb9
#define public_6d5bfbe _public_6d5bfbe

PROC_DECLARE(0x6d5bf20, internal_6d5bf20, public_6d5bf20);
extern "C" NAKED register_t __cdecl internal_6d5bf20()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d5bfbe
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x18]
        public_6d5bf40 : nop
        mov eax, dword ptr ds : [public_6d8fb18]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        call public_6d5c530
        mov ecx, dword ptr ds : [public_6d9042c]
        mov edx, dword ptr ds : [eax]
        push edi
        push ebx
        push ecx
        push ecx
        mov ecx, esp
        push edx
        call public_6d19180
        mov ecx, dword ptr ds : [public_6d8fb18]
        call dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_6d5bf92
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_6d5bfb5
        public_6d5bf85 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_6d5bf85
        jmp public_6d5bfb5
        public_6d5bf92 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5bfae
        lea ebx, ds:[ebx]
        public_6d5bfa0 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5bfa0
        public_6d5bfae : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5bfb9
        mov eax, ecx
        public_6d5bfb5 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6d5bfb9 : nop
        cmp eax, dword ptr ss : [ebp+0xC]
        jne public_6d5bf40
        public_6d5bfbe : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d5bf20)
    }
}

#undef public_6d5bf40
#undef public_6d5bf85
#undef public_6d5bf92
#undef public_6d5bfa0
#undef public_6d5bfae
#undef public_6d5bfb5
#undef public_6d5bfb9
#undef public_6d5bfbe
