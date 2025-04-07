#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_62788b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6278932 _public_6278932
#define public_6278934 _public_6278934
#define public_6278964 _public_6278964
#define public_6278969 _public_6278969
#define public_627897a _public_627897a
#define public_62789fd _public_62789fd
#define public_6278a40 _public_6278a40
#define public_6278a61 _public_6278a61
#define public_6278a76 _public_6278a76
#define public_6278a85 _public_6278a85
#define public_6278a90 _public_6278a90
#define public_6278a9d _public_6278a9d

PROC_DECLARE(0x62788b0, internal_62788b0, public_62788b0);
extern "C" NAKED register_t __cdecl internal_62788b0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push 0x54
        mov esi, ecx
        call public_6391d9c
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_6278932
        lea ecx, ds:[eax+0xC]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], 0xFFFFFFFF
        mov edi, ebx
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov dword ptr ds : [ecx+0x28], ebx
        mov dword ptr ds : [ecx+0x24], ebx
        mov dword ptr ds : [ecx+0x20], ebx
        mov dword ptr ds : [ecx+0x18], ebx
        mov dword ptr ds : [ecx+0x14], ebx
        mov dword ptr ds : [ecx+0x10], ebx
        mov edx, 0x3F800000
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [eax+0x3C], 1
        mov byte ptr ds : [eax+0x3D], 1
        mov byte ptr ds : [eax+0x3E], 1
        mov byte ptr ds : [eax+0x3F], bl
        mov byte ptr ds : [eax+0x40], bl
        mov byte ptr ds : [eax+0x41], bl
        mov dword ptr ds : [eax+0x44], ebx
        mov dword ptr ds : [eax+0x48], ebx
        mov dword ptr ds : [eax+0x4C], ebx
        mov byte ptr ds : [eax+0x50], bl
        jmp public_6278934
        public_6278932 : nop
        xor eax, eax
        public_6278934 : nop
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, edi
        sar eax, 2
        cmp eax, 1
        mov ecx, esi
        jae public_62789fd
        push ebp
        call public_626a600
        cmp eax, 1
        jbe public_6278964
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        jmp public_6278969
        public_6278964 : nop
        mov ebp, 1
        public_6278969 : nop
        mov ecx, esi
        call public_626a600
        add eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jns public_627897a
        xor eax, eax
        public_627897a : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebp, eax
        push ebp
        push edi
        push edx
        mov ecx, esi
        call public_627f7b0
        mov ebx, eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_626a600
        lea ecx, ss:[ebp+eax*4+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], ebp
        pop ebp
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_62789fd : nop
        mov edx, edi
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_6278a61
        lea eax, ds:[edi+4]
        push eax
        push edi
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
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6278a9d
        lea ebx, ds:[ebx]
        public_6278a40 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6278a40
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_6278a61 : nop
        push edi
        push edi
        lea eax, ds:[edi-4]
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6278a85
        public_6278a76 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6278a76
        public_6278a85 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6278a9d
        mov edi, edi
        public_6278a90 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6278a90
        public_6278a9d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62788b0)
    }
}

#undef public_6278932
#undef public_6278934
#undef public_6278964
#undef public_6278969
#undef public_627897a
#undef public_62789fd
#undef public_6278a40
#undef public_6278a61
#undef public_6278a76
#undef public_6278a85
#undef public_6278a90
#undef public_6278a9d
