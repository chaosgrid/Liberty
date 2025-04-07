#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecff60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0460);
CLANG_FORWARD_PROC_SYMBOL(public_6ed04b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0510);

#define public_6ecfe2c _public_6ecfe2c
#define public_6ecfe3d _public_6ecfe3d
#define public_6ecfe69 _public_6ecfe69
#define public_6ecfea9 _public_6ecfea9
#define public_6ecfebf _public_6ecfebf
#define public_6ecff04 _public_6ecff04
#define public_6ecff38 _public_6ecff38
#define public_6ecff57 _public_6ecff57

PROC_DECLARE(0x6ecfdf0, internal_6ecfdf0, public_6ecfdf0);
extern "C" NAKED register_t __cdecl internal_6ecfdf0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push esi
        push eax
        call public_6ecff60
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ecff57
        mov ecx, dword ptr ds : [public_6ed5834]
        mov al, byte ptr ds : [ecx]
        cmp al, 0x2A
        je public_6ecfe2c
        cmp al, 0x2B
        je public_6ecfe2c
        cmp al, 0x3F
        je public_6ecfe2c
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, esi
        pop esi
        pop ecx
        ret 
        public_6ecfe2c : nop
        mov cl, byte ptr ss : [esp+4]
        test cl, 1
        jne public_6ecfe3d
        cmp al, 0x3F
        jne public_6ecff57
        public_6ecfe3d : nop
        xor edx, edx
        cmp al, 0x2B
        sete dl
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        dec edx
        and edx, 3
        inc edx
        cmp al, 0x2A
        mov dword ptr ds : [edi], edx
        jne public_6ecfea9
        test cl, 2
        push esi
        je public_6ecfe69
        push 0xA
        call public_6ed0460
        add esp, 8
        jmp public_6ecff38
        public_6ecfe69 : nop
        push 6
        call public_6ed0460
        push 7
        call public_6ed0400
        push eax
        push esi
        call public_6ed0510
        push esi
        push esi
        call public_6ed0510
        push 6
        call public_6ed0400
        push eax
        push esi
        call public_6ed04b0
        push 9
        call public_6ed0400
        push eax
        push esi
        call public_6ed04b0
        add esp, 0x34
        jmp public_6ecff38
        public_6ecfea9 : nop
        cmp al, 0x2B
        jne public_6ecff04
        test cl, 2
        je public_6ecfebf
        push esi
        push 0xB
        call public_6ed0460
        add esp, 8
        jmp public_6ecff38
        public_6ecfebf : nop
        push 6
        call public_6ed0400
        mov edi, eax
        push edi
        push esi
        call public_6ed04b0
        add esp, 0xC
        push esi
        push 7
        call public_6ed0400
        add esp, 4
        push eax
        call public_6ed04b0
        push 6
        call public_6ed0400
        push eax
        push edi
        call public_6ed04b0
        push 9
        call public_6ed0400
        push eax
        push esi
        call public_6ed04b0
        add esp, 0x20
        jmp public_6ecff38
        public_6ecff04 : nop
        cmp al, 0x3F
        jne public_6ecff38
        push esi
        push 6
        call public_6ed0460
        push 6
        call public_6ed0400
        push eax
        push esi
        call public_6ed04b0
        push 9
        call public_6ed0400
        mov edi, eax
        push edi
        push esi
        call public_6ed04b0
        push edi
        push esi
        call public_6ed0510
        add esp, 0x28
        public_6ecff38 : nop
        mov eax, dword ptr ds : [public_6ed5834]
        inc eax
        mov dword ptr ds : [public_6ed5834], eax
        mov al, byte ptr ds : [eax]
        cmp al, 0x2A
        pop edi
        je public_6ecff57
        cmp al, 0x2B
        je public_6ecff57
        cmp al, 0x3F
        je public_6ecff57
        mov eax, esi
        pop esi
        pop ecx
        ret 
        public_6ecff57 : nop
        xor eax, eax
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ecfdf0)
    }
}

#undef public_6ecfe2c
#undef public_6ecfe3d
#undef public_6ecfe69
#undef public_6ecfea9
#undef public_6ecfebf
#undef public_6ecff04
#undef public_6ecff38
#undef public_6ecff57
