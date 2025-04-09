#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_5637b0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);

#define public_563820 _public_563820
#define public_563877 _public_563877
#define public_56387f _public_56387f

PROC_DECLARE(0x5637b0, internal_5637b0, public_5637b0);
extern "C" NAKED register_t __cdecl internal_5637b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push eax
        mov eax, dword ptr ds : [public_6148cc]
        push ecx
        push eax
        push eax
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        mov bl, 1
        je public_56387f
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        mov dword ptr ss : [esp+0xC], 0
        nop 
        lea esp, ss:[esp]
        public_563820 : nop
        mov eax, dword ptr ds : [public_6148cc]
        push eax
        call public_59d9c0
        add esp, 4
        test eax, eax
        je public_56387f
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_5b0b60
        add esp, 4
        test al, al
        je public_563877
        call public_42d680
        fstp qword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_59e080
        mov ecx, dword ptr ds : [public_67ecac]
        add esp, 8
        test ecx, ecx
        je public_563820
        fld qword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x38]
        jmp public_563820
        public_563877 : nop
        xor al, al
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_56387f : nop
        pop esi
        mov al, bl
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5637b0)
    }
}

#undef public_563820
#undef public_563877
#undef public_56387f
