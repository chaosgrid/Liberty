#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfd50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed04b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0510);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ab0);

#define public_6ecfc6e _public_6ecfc6e
#define public_6ecfc70 _public_6ecfc70
#define public_6ecfc95 _public_6ecfc95
#define public_6ecfc97 _public_6ecfc97
#define public_6ecfca2 _public_6ecfca2
#define public_6ecfcbb _public_6ecfcbb
#define public_6ecfce5 _public_6ecfce5
#define public_6ecfcee _public_6ecfcee
#define public_6ecfcf0 _public_6ecfcf0
#define public_6ecfd08 _public_6ecfd08
#define public_6ecfd1e _public_6ecfd1e
#define public_6ecfd34 _public_6ecfd34
#define public_6ecfd3b _public_6ecfd3b
#define public_6ecfd46 _public_6ecfd46

PROC_DECLARE(0x6ecfc30, internal_6ecfc30, public_6ecfc30);
extern "C" NAKED register_t __cdecl internal_6ecfc30()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        xor edi, edi
        test ebp, ebp
        mov dword ptr ds : [esi], 1
        je public_6ecfc6e
        mov eax, dword ptr ds : [public_6ed582c]
        cmp eax, 0xA
        jge public_6ecfd34
        mov edi, eax
        inc eax
        mov dword ptr ds : [public_6ed582c], eax
        lea eax, ds:[edi+0x14]
        push eax
        call public_6ed0400
        add esp, 4
        mov ebx, eax
        jmp public_6ecfc70
        public_6ecfc6e : nop
        xor ebx, ebx
        public_6ecfc70 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6ecfd50
        add esp, 4
        test eax, eax
        je public_6ecfd34
        test ebx, ebx
        je public_6ecfc95
        push eax
        push ebx
        call public_6ed04b0
        add esp, 8
        jmp public_6ecfc97
        public_6ecfc95 : nop
        mov ebx, eax
        public_6ecfc97 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test al, 1
        jne public_6ecfca2
        and dword ptr ds : [esi], 0xFFFFFFFE
        public_6ecfca2 : nop
        mov ecx, dword ptr ds : [esi]
        and eax, 4
        or ecx, eax
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [edx]
        cmp al, 0x7C
        je public_6ecfcbb
        cmp al, 0xA
        jne public_6ecfce5
        public_6ecfcbb : nop
        mov edx, dword ptr ds : [public_6ed5834]
        lea eax, ss:[esp+0x18]
        inc edx
        push eax
        mov dword ptr ds : [public_6ed5834], edx
        call public_6ecfd50
        add esp, 4
        test eax, eax
        je public_6ecfd34
        push eax
        push ebx
        call public_6ed04b0
        add esp, 8
        jmp public_6ecfc97
        public_6ecfce5 : nop
        test ebp, ebp
        je public_6ecfcee
        lea eax, ds:[edi+0x1E]
        jmp public_6ecfcf0
        public_6ecfcee : nop
        xor eax, eax
        public_6ecfcf0 : nop
        push eax
        call public_6ed0400
        mov edi, eax
        push edi
        push ebx
        call public_6ed04b0
        add esp, 0xC
        test ebx, ebx
        mov esi, ebx
        je public_6ecfd1e
        public_6ecfd08 : nop
        push edi
        push esi
        call public_6ed0510
        push esi
        call public_6ed0ab0
        mov esi, eax
        add esp, 0xC
        test esi, esi
        jne public_6ecfd08
        public_6ecfd1e : nop
        test ebp, ebp
        je public_6ecfd3b
        mov eax, dword ptr ds : [public_6ed5834]
        mov cl, byte ptr ds : [eax]
        inc eax
        cmp cl, 0x29
        mov dword ptr ds : [public_6ed5834], eax
        je public_6ecfd46
        public_6ecfd34 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6ecfd3b : nop
        mov edx, dword ptr ds : [public_6ed5834]
        cmp byte ptr ds : [edx], 0
        jne public_6ecfd34
        public_6ecfd46 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ecfc30)
    }
}

#undef public_6ecfc6e
#undef public_6ecfc70
#undef public_6ecfc95
#undef public_6ecfc97
#undef public_6ecfca2
#undef public_6ecfcbb
#undef public_6ecfce5
#undef public_6ecfcee
#undef public_6ecfcf0
#undef public_6ecfd08
#undef public_6ecfd1e
#undef public_6ecfd34
#undef public_6ecfd3b
#undef public_6ecfd46
