#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_661ea00);
CLANG_FORWARD_PROC_SYMBOL(public_661f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_66232e0);

#define public_66200f6 _public_66200f6
#define public_6620104 _public_6620104
#define public_6620151 _public_6620151
#define public_6620173 _public_6620173
#define public_6620175 _public_6620175

PROC_DECLARE(0x66200c0, internal_66200c0, public_66200c0);
extern "C" NAKED register_t __cdecl internal_66200c0()
{
    __asm
    {
        sub esp, 0x114
        push ebx
        push esi
        mov esi, dword ptr ds : [public_662900c]
        push edi
        push 0
        call esi
        mov eax, dword ptr ss : [esp+0x12C]
        mov edi, dword ptr ss : [esp+0x128]
        add esp, 4
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_66200f6
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], ecx
        jmp public_6620151
        public_66200f6 : nop
        mov ebx, dword ptr ds : [public_6629078]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xC], edx
        public_6620104 : nop
        mov eax, dword ptr ds : [public_662b1ac]
        mov ecx, eax
        inc eax
        mov dword ptr ds : [public_662b1ac], eax
        push ecx
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_662a6fc @0x6620116*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a6fc
        push eax
        call ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        call esi
        add esp, 0x10
        lea edx, ss:[esp+0xC]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        push edx
        call public_661f8b0
        cmp eax, 0xFFFFFFFF
        jne public_6620104
        lea eax, ss:[esp+0x1C]
        lea ebx, ss:[esp+0x1C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x10], ebx
        add esp, 4
        mov ebx, eax
        public_6620151 : nop
        push 0x38
        mov dword ptr ss : [esp+0x14], ebx
        call public_661e9e0
        add esp, 4
        test eax, eax
        je public_6620173
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call public_661ea00
        mov esi, eax
        jmp public_6620175
        public_6620173 : nop
        xor esi, esi
        public_6620175 : nop
        lea edx, ss:[esp+0xC]
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        lea ecx, ds:[edi+0x30]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], esi
        call public_66232e0
        mov ecx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [ecx+0x38]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret 8
        UNREACHABLE_TRAP(0x66200c0)
    }
}

#undef public_66200f6
#undef public_6620104
#undef public_6620151
#undef public_6620173
#undef public_6620175
