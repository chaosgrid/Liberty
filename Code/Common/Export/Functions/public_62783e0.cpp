#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_62783e0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627844c _public_627844c
#define public_627844e _public_627844e
#define public_6278484 _public_6278484
#define public_6278489 _public_6278489
#define public_627849b _public_627849b
#define public_627851f _public_627851f
#define public_6278560 _public_6278560
#define public_6278581 _public_6278581
#define public_6278596 _public_6278596
#define public_62785a5 _public_62785a5
#define public_62785b0 _public_62785b0
#define public_62785bd _public_62785bd

PROC_DECLARE(0x62783e0, internal_62783e0, public_62783e0);
extern "C" NAKED register_t __cdecl internal_62783e0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push 0x40
        mov esi, ecx
        call public_6391d9c
        xor edx, edx
        add esp, 4
        cmp eax, edx
        je public_627844c
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [eax], edx
        mov ebx, edx
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, 0x3F800000
        mov dword ptr ds : [ecx+0x2C], edi
        mov dword ptr ds : [ecx+0x1C], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov dword ptr ds : [ecx+0x28], edx
        mov dword ptr ds : [ecx+0x24], edx
        mov dword ptr ds : [ecx+0x20], edx
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x14], edx
        mov dword ptr ds : [ecx+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ds : [eax+0x34], 0x420C0000
        mov dword ptr ds : [eax+0x38], 0x3E800000
        mov dword ptr ds : [eax+0x3C], 0x49742400
        jmp public_627844e
        public_627844c : nop
        xor eax, eax
        public_627844e : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_627851f
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        je public_6278484
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6278484
        mov ecx, esi
        call public_626a600
        mov ebx, eax
        jmp public_6278489
        public_6278484 : nop
        mov ebx, 1
        public_6278489 : nop
        push ebp
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_627849b
        xor eax, eax
        public_627849b : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_627f7b0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_627f7e0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        lea ecx, ds:[ebx+ebp*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_626a600
        pop ebp
        lea edx, ds:[ebx+eax*4+4]
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_627851f : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6278581
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0xC]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_62785bd
        public_6278560 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6278560
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_6278581 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62785a5
        public_6278596 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6278596
        public_62785a5 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_62785bd
        mov edi, edi
        public_62785b0 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62785b0
        public_62785bd : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62783e0)
    }
}

#undef public_627844c
#undef public_627844e
#undef public_6278484
#undef public_6278489
#undef public_627849b
#undef public_627851f
#undef public_6278560
#undef public_6278581
#undef public_6278596
#undef public_62785a5
#undef public_62785b0
#undef public_62785bd
