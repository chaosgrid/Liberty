#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);

#define public_6f56807 _public_6f56807
#define public_6f56821 _public_6f56821
#define public_6f56823 _public_6f56823
#define public_6f56831 _public_6f56831

PROC_DECLARE(0x6f567e0, internal_6f567e0, public_6f567e0);
extern "C" NAKED register_t __cdecl internal_6f567e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push esi
        push 1
        call public_6f4f660
        fstp qword ptr ss : [esp+0xC]
        mov esi, 2
        push esi
        call public_6f4b090
        add esp, 8
        test eax, eax
        je public_6f56831
        public_6f56807 : nop
        push esi
        call public_6f4f660
        fcom qword ptr ss : [esp+0xC]
        add esp, 4
        fnstsw ax
        test ah, 1
        je public_6f56821
        fstp qword ptr ss : [esp+8]
        jmp public_6f56823
        public_6f56821 : nop
        fstp st(0)
        public_6f56823 : nop
        inc esi
        push esi
        call public_6f4b090
        add esp, 4
        test eax, eax
        jne public_6f56807
        public_6f56831 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_6f4b6f0
        add esp, 8
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f567e0)
    }
}

#undef public_6f56807
#undef public_6f56821
#undef public_6f56823
#undef public_6f56831
