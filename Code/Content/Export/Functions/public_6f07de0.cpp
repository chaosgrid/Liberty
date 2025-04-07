#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f60d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f60da0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f07dfb _public_6f07dfb
#define public_6f07dfd _public_6f07dfd
#define public_6f07e18 _public_6f07e18
#define public_6f07e40 _public_6f07e40
#define public_6f07e67 _public_6f07e67
#define public_6f07e9d _public_6f07e9d
#define public_6f07ea9 _public_6f07ea9

PROC_DECLARE(0x6f07de0, internal_6f07de0, public_6f07de0);
extern "C" NAKED register_t __cdecl internal_6f07de0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        xor bl, bl
        test eax, eax
        je public_6f07dfb
        push eax
        call public_6f60da0
        add esp, 4
        jmp public_6f07dfd
        public_6f07dfb : nop
        mov bl, 1
        public_6f07dfd : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ss : [ebp+8], eax
        je public_6f07ea9
        test bl, bl
        je public_6f07e18
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x38]
        public_6f07e18 : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eea860
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        je public_6f07e9d
        mov ebx, dword ptr ss : [ebp+0x184]
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        push edi
        lea edi, ss:[ebp+0x180]
        je public_6f07e67
        lea esp, ss:[esp]
        public_6f07e40 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6f07e40
        public_6f07e67 : nop
        push 0
        lea eax, ss:[esp+0x28]
        push eax
        push 0x19
        push edi
        lea ecx, ss:[ebp+0x124]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x3C], 0x447A0000
        call public_6eb70f0
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6f5ea40
        add esp, 0x1C
        pop edi
        pop esi
        public_6f07e9d : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6f60d60
        add esp, 4
        public_6f07ea9 : nop
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f07de0)
    }
}

#undef public_6f07dfb
#undef public_6f07dfd
#undef public_6f07e18
#undef public_6f07e40
#undef public_6f07e67
#undef public_6f07e9d
#undef public_6f07ea9
