#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67149e0);
CLANG_FORWARD_PROC_SYMBOL(public_67169ac);

#define public_6714a6f _public_6714a6f
#define public_6714a7e _public_6714a7e
#define public_6714a99 _public_6714a99
#define public_6714a9e _public_6714a9e
#define public_6714ab0 _public_6714ab0
#define public_6714ac0 _public_6714ac0
#define public_6714ac8 _public_6714ac8
#define public_6714b00 _public_6714b00

PROC_DECLARE(0x67149e0, internal_67149e0, public_67149e0);
extern "C" NAKED register_t __cdecl internal_67149e0()
{
    __asm
    {
        sub esp, 0x400
        lea eax, ss:[esp]
        push ebx
        mov ebx, dword ptr ss : [esp+0x408]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x414]
        push 0x200
        push eax
        push edi
        push ebx
        call public_67169ac
        cmp edi, 0x80
        mov esi, eax
        ja public_6714ac0
        je public_6714ab0
        cmp edi, 8
        je public_6714ac8
        cmp edi, 0x10
        jne public_6714b00
        lea ecx, ss:[esp+0x20C]
        push 0x200
        push ecx
        push 8
        push ebx
        call public_67169ac
        test eax, eax
        jne public_6714a6f
        lea edx, ss:[esp+0x20C]
        push 0x200
        push edx
        push 0x800
        push ebx
        call public_67169ac
        test eax, eax
        jne public_6714a6f
        pop edi
        pop esi
        pop ebx
        add esp, 0x400
        ret 0x10
        public_6714a6f : nop
        mov edi, dword ptr ss : [esp+0x418]
        xor eax, eax
        test esi, esi
        mov ecx, edi
        jbe public_6714a9e
        public_6714a7e : nop
        mov dl, byte ptr ss : [esp+eax+0xC]
        mov byte ptr ds : [ecx], dl
        xor edx, edx
        mov dl, byte ptr ss : [esp+eax+0x20C]
        inc ecx
        mov bl, byte ptr ds : [edx+public_671b9c8]
        test bl, bl
        je public_6714a99
        inc eax
        public_6714a99 : nop
        inc eax
        cmp eax, esi
        jb public_6714a7e
        public_6714a9e : nop
        sub ecx, edi
        pop edi
        mov esi, ecx
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x400
        ret 0x10
        public_6714ab0 : nop
        shr esi, 1
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x400
        ret 0x10
        public_6714ac0 : nop
        cmp edi, 0x800
        jne public_6714b00
        public_6714ac8 : nop
        test esi, esi
        je public_6714b00
        mov eax, dword ptr ss : [esp+0x41C]
        mov ecx, dword ptr ss : [esp+0x418]
        push eax
        mov eax, dword ptr ds : [public_671cfc8]
        push ecx
        lea edx, ss:[esp+0x14]
        push 0xFFFFFFFF
        push edx
        push 0
        push eax
        mov byte ptr ss : [esp+esi+0x24], 0
        call dword ptr ds : [public_6719368]
        mov esi, eax
        test esi, esi
        je public_6714b00
        lea esi, ds:[esi+esi-2]
        public_6714b00 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x400
        ret 0x10
        UNREACHABLE_TRAP(0x67149e0)
    }
}

#undef public_6714a6f
#undef public_6714a7e
#undef public_6714a99
#undef public_6714a9e
#undef public_6714ab0
#undef public_6714ac0
#undef public_6714ac8
#undef public_6714b00
