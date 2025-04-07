#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62961e0);
CLANG_FORWARD_PROC_SYMBOL(public_62961f0);
CLANG_FORWARD_PROC_SYMBOL(public_62963e0);
CLANG_FORWARD_PROC_SYMBOL(public_62963f0);
CLANG_FORWARD_PROC_SYMBOL(public_6296620);
CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_629d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_629d3a0);
CLANG_FORWARD_PROC_SYMBOL(public_62b4540);

#define public_62b45a0 _public_62b45a0
#define public_62b45e9 _public_62b45e9
#define public_62b4614 _public_62b4614
#define public_62b463a _public_62b463a
#define public_62b4677 _public_62b4677
#define public_62b46af _public_62b46af
#define public_62b46b4 _public_62b46b4
#define public_62b46b8 _public_62b46b8
#define public_62b46e9 _public_62b46e9

PROC_DECLARE(0x62b4540, internal_62b4540, public_62b4540);
extern "C" NAKED register_t __cdecl internal_62b4540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        cmp eax, 1
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], 0
        mov ebx, ecx
        mov dword ptr ds : [edi], 0
        jne public_62b45a0
        push 0x20000
        lea ecx, ds:[ebx+0xE4]
        call public_629b720
        push eax
        call public_6296620
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_62b46b8
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, ebp
        call public_62961f0
        fadd dword ptr ds : [esi]
        mov ecx, ebp
        fstp dword ptr ds : [esi]
        jmp public_62b46af
        public_62b45a0 : nop
        cmp eax, 2
        jne public_62b463a
        lea ebp, ds:[ebx+0xE4]
        push 0x20000
        mov ecx, ebp
        call public_629b720
        push eax
        call public_6296620
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        je public_62b45e9
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, eax
        call public_62961f0
        fadd dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [esi]
        call public_62961e0
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        public_62b45e9 : nop
        push 0x400
        lea ecx, ss:[esp+0x14]
        call public_629b990
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebp
        call public_629b430
        push eax
        call public_629d3a0
        add esp, 4
        test eax, eax
        je public_62b46b8
        public_62b4614 : nop
        mov ecx, eax
        call public_629d2a0
        fadd dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        fstp dword ptr ds : [esi]
        call public_629b430
        push eax
        call public_629d3a0
        add esp, 4
        test eax, eax
        jne public_62b4614
        jmp public_62b46b8
        public_62b463a : nop
        cmp eax, 4
        jne public_62b4677
        push 0x20000
        lea ecx, ds:[ebx+0xE4]
        call public_629b720
        push eax
        call public_6296620
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_62b46b8
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, ebp
        call public_62963f0
        fadd dword ptr ds : [esi]
        mov ecx, ebp
        fstp dword ptr ds : [esi]
        call public_62963e0
        jmp public_62b46b4
        public_62b4677 : nop
        cmp eax, 3
        jne public_62b46b8
        mov edx, dword ptr ds : [ebx+0x88]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [edx+0x120]
        push 0x20000
        lea ecx, ds:[ebx+0xE4]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        call public_629b720
        push eax
        call public_6296620
        add esp, 4
        test eax, eax
        je public_62b46b8
        mov ecx, eax
        public_62b46af : nop
        call public_62961e0
        public_62b46b4 : nop
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        public_62b46b8 : nop
        mov eax, dword ptr ds : [ebx+0x88]
        fld dword ptr ds : [eax+0x104]
        fadd dword ptr ds : [edi]
        fst dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0xA4]
        test ecx, ecx
        fstp dword ptr ss : [esp+0x24]
        je public_62b46e9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x58]
        fmul dword ptr ds : [ebx+0xA8]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        public_62b46e9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x62b4540)
    }
}

#undef public_62b45a0
#undef public_62b45e9
#undef public_62b4614
#undef public_62b463a
#undef public_62b4677
#undef public_62b46af
#undef public_62b46b4
#undef public_62b46b8
#undef public_62b46e9
