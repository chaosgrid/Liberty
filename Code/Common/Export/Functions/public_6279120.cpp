#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6279120);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6279183 _public_6279183
#define public_6279185 _public_6279185
#define public_62791bd _public_62791bd
#define public_62791c5 _public_62791c5
#define public_62791d9 _public_62791d9
#define public_627924e _public_627924e
#define public_6279290 _public_6279290
#define public_62792b1 _public_62792b1
#define public_62792c6 _public_62792c6
#define public_62792d5 _public_62792d5
#define public_62792e0 _public_62792e0
#define public_62792ed _public_62792ed

PROC_DECLARE(0x6279120, internal_6279120, public_6279120);
extern "C" NAKED register_t __cdecl internal_6279120()
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
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_6279183
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+0x34], bl
        mov byte ptr ds : [eax+0x35], bl
        mov dword ptr ds : [eax+0x38], ebx
        mov dword ptr ds : [eax+0x3C], ebx
        mov edi, ebx
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov edx, 0x3F800000
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x28], ebx
        mov dword ptr ds : [ecx+0x24], ebx
        mov dword ptr ds : [ecx+0x20], ebx
        mov dword ptr ds : [ecx+0x18], ebx
        mov dword ptr ds : [ecx+0x14], ebx
        mov dword ptr ds : [ecx+0x10], ebx
        jmp public_6279185
        public_6279183 : nop
        xor eax, eax
        public_6279185 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_627924e
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_62791bd
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_62791bd
        mov ecx, esi
        call public_626a600
        mov dword ptr ss : [esp+0x10], eax
        jmp public_62791c5
        public_62791bd : nop
        mov dword ptr ss : [esp+0x10], 1
        public_62791c5 : nop
        push ebp
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        jns public_62791d9
        xor eax, eax
        public_62791d9 : nop
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
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        lea edx, ds:[ebx+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        pop ebp
        lea eax, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_627924e : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_62792b1
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
        je public_62792ed
        nop 
        public_6279290 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6279290
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_62792b1 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62792d5
        public_62792c6 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_62792c6
        public_62792d5 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_62792ed
        mov edi, edi
        public_62792e0 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62792e0
        public_62792ed : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6279120)
    }
}

#undef public_6279183
#undef public_6279185
#undef public_62791bd
#undef public_62791c5
#undef public_62791d9
#undef public_627924e
#undef public_6279290
#undef public_62792b1
#undef public_62792c6
#undef public_62792d5
#undef public_62792e0
#undef public_62792ed
