#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6278b30);
CLANG_FORWARD_PROC_SYMBOL(public_627b190);
CLANG_FORWARD_PROC_SYMBOL(public_627b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392b46);

#define public_6278bbd _public_6278bbd
#define public_6278bbf _public_6278bbf
#define public_6278bff _public_6278bff
#define public_6278c07 _public_6278c07
#define public_6278c1a _public_6278c1a
#define public_6278c85 _public_6278c85
#define public_6278cc4 _public_6278cc4
#define public_6278cd3 _public_6278cd3
#define public_6278ce8 _public_6278ce8
#define public_6278cf7 _public_6278cf7
#define public_6278d00 _public_6278d00
#define public_6278d0d _public_6278d0d
#define public_6278d13 _public_6278d13

PROC_DECLARE(0x6278b30, internal_6278b30, public_6278b30);
extern "C" NAKED register_t __cdecl internal_6278b30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392b46 @0x6278b32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392b46
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        push 0x58
        mov esi, ecx
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6278bbd
        lea ebp, ds:[edi+0x34]
        mov ecx, ebp
        call public_627b190
        lea eax, ds:[edi+4]
        mov dword ptr ds : [edi], ebx
        mov edx, ebx
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        call public_627b1b0
        jmp public_6278bbf
        public_6278bbd : nop
        xor edi, edi
        public_6278bbf : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov edi, eax
        jae public_6278c85
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_6278bff
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6278bff
        mov ecx, esi
        call public_626a600
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6278c07
        public_6278bff : nop
        mov dword ptr ss : [esp+0x14], 1
        public_6278c07 : nop
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        jns public_6278c1a
        xor eax, eax
        public_6278c1a : nop
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
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        jmp public_6278d13
        public_6278c85 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6278cd3
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
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
        je public_6278d0d
        public_6278cc4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6278cc4
        jmp public_6278d0d
        public_6278cd3 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6278cf7
        public_6278ce8 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6278ce8
        public_6278cf7 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6278d0d
        public_6278d00 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6278d00
        public_6278d0d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6278d13 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6278b30)
    }
}

#undef public_6278bbd
#undef public_6278bbf
#undef public_6278bff
#undef public_6278c07
#undef public_6278c1a
#undef public_6278c85
#undef public_6278cc4
#undef public_6278cd3
#undef public_6278ce8
#undef public_6278cf7
#undef public_6278d00
#undef public_6278d0d
#undef public_6278d13
