#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6278e20);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6278e86 _public_6278e86
#define public_6278e88 _public_6278e88
#define public_6278ec0 _public_6278ec0
#define public_6278ec8 _public_6278ec8
#define public_6278edc _public_6278edc
#define public_6278f60 _public_6278f60
#define public_6278fa1 _public_6278fa1
#define public_6278fc2 _public_6278fc2
#define public_6278fd7 _public_6278fd7
#define public_6278fe6 _public_6278fe6
#define public_6278ff0 _public_6278ff0
#define public_6278ffd _public_6278ffd

PROC_DECLARE(0x6278e20, internal_6278e20, public_6278e20);
extern "C" NAKED register_t __cdecl internal_6278e20()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push 0x44
        mov esi, ecx
        call public_6391d9c
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_6278e86
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+0x40], ebx
        mov edi, ebx
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov edx, 0x3F800000
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x28], ebx
        mov dword ptr ds : [ecx+0x24], ebx
        mov dword ptr ds : [ecx+0x20], ebx
        mov dword ptr ds : [ecx+0x18], ebx
        mov dword ptr ds : [ecx+0x14], ebx
        mov dword ptr ds : [ecx+0x10], ebx
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov byte ptr ds : [eax+0x3C], bl
        jmp public_6278e88
        public_6278e86 : nop
        xor eax, eax
        public_6278e88 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6278f60
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_6278ec0
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6278ec0
        mov ecx, esi
        call public_626a600
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6278ec8
        public_6278ec0 : nop
        mov dword ptr ss : [esp+0x10], 1
        public_6278ec8 : nop
        push ebp
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        jns public_6278edc
        xor eax, eax
        public_6278edc : nop
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
        public_6278f60 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6278fc2
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
        je public_6278ffd
        public_6278fa1 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6278fa1
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        public_6278fc2 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6278fe6
        public_6278fd7 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6278fd7
        public_6278fe6 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6278ffd
        nop 
        public_6278ff0 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6278ff0
        public_6278ffd : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6278e20)
    }
}

#undef public_6278e86
#undef public_6278e88
#undef public_6278ec0
#undef public_6278ec8
#undef public_6278edc
#undef public_6278f60
#undef public_6278fa1
#undef public_6278fc2
#undef public_6278fd7
#undef public_6278fe6
#undef public_6278ff0
#undef public_6278ffd
