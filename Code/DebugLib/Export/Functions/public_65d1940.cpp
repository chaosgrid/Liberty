#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d1b70);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c58);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c64);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c82);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c88);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c8e);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfebb);

#define public_65d197d _public_65d197d
#define public_65d19b1 _public_65d19b1
#define public_65d19dd _public_65d19dd
#define public_65d19f9 _public_65d19f9
#define public_65d1a2d _public_65d1a2d
#define public_65d1a51 _public_65d1a51
#define public_65d1a53 _public_65d1a53

PROC_DECLARE(0x65d1940, internal_65d1940, public_65d1940);
extern "C" NAKED register_t __cdecl internal_65d1940()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_65dfebb @0x65d1948*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfebb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_65d197d
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        public_65d197d : nop
        mov edi, dword ptr ss : [esp+0x30]
        xor eax, eax
        mov dword ptr ss : [esp+0xC], eax
        push edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_65d6c8e
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_65d19b1
        push edi
        call public_65d6c88
        test eax, eax
        je public_65d19dd
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx]
        public_65d19b1 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov word ptr ss : [esp+0xC], 2
        push eax
        call public_65d6c58
        push 6
        push 1
        push 2
        mov word ptr ss : [esp+0x1A], ax
        mov dword ptr ss : [esp+0x1C], esi
        call public_65d6c64
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_65d19f9
        public_65d19dd : nop
        call public_65d1330
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        public_65d19f9 : nop
        lea ecx, ss:[esp+0xC]
        push 0x10
        push ecx
        push esi
        call public_65d6c82
        cmp eax, 0xFFFFFFFF
        jne public_65d1a2d
        call public_65d1330
        push esi
        call public_65d6c4c
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        public_65d1a2d : nop
        push 0x3C
        call public_65d6f71
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        je public_65d1a51
        push esi
        mov ecx, eax
        call public_65d1b70
        jmp public_65d1a53
        public_65d1a51 : nop
        xor eax, eax
        public_65d1a53 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ebx+4], eax
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x65d1940)
    }
}

#undef public_65d197d
#undef public_65d19b1
#undef public_65d19dd
#undef public_65d19f9
#undef public_65d1a2d
#undef public_65d1a51
#undef public_65d1a53
