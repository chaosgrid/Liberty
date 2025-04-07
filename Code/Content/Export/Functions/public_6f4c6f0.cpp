#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f471b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f49110);
CLANG_FORWARD_PROC_SYMBOL(public_6f49190);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50f90);

#define public_6f4c750 _public_6f4c750
#define public_6f4c76f _public_6f4c76f
#define public_6f4c77f _public_6f4c77f
#define public_6f4c798 _public_6f4c798
#define public_6f4c7a5 _public_6f4c7a5
#define public_6f4c7b8 _public_6f4c7b8
#define public_6f4c7be _public_6f4c7be
#define public_6f4c824 _public_6f4c824

PROC_DECLARE(0x6f4c6f0, internal_6f4c6f0, public_6f4c6f0);
extern "C" NAKED register_t __cdecl internal_6f4c6f0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
/*FIXUP push offset public_6fbb33c @0x6f4c6f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb33c
        mov esi, ecx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_6fb3684]
        mov edi, dword ptr ds : [esi+0x200]
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_6fbb23c]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x204]
        add esp, 4
        cmp edi, eax
        mov byte ptr ss : [esp+0x20], 1
        je public_6f4c7a5
        nop 
        lea esp, ss:[esp]
        public_6f4c750 : nop
        mov ecx, dword ptr ds : [edi]
        push ebx
        call public_6f471b0
        cmp ebp, 1
        jne public_6f4c76f
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x80]
        push ecx
        mov ecx, dword ptr ds : [edi]
        call public_6f49110
        jmp public_6f4c77f
        public_6f4c76f : nop
        mov ecx, dword ptr ds : [edi]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x80]
        push edx
        call public_6f49190
        public_6f4c77f : nop
        mov eax, dword ptr ds : [edi]
        cmp dword ptr ds : [eax+0x10], ebx
        je public_6f4c798
        mov edx, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33fc]
        add esp, 8
        public_6f4c798 : nop
        mov eax, dword ptr ds : [esi+0x204]
        add edi, 4
        cmp edi, eax
        jne public_6f4c750
        public_6f4c7a5 : nop
        cmp ebp, 1
        mov eax, dword ptr ds : [esi+0x1F8]
        jne public_6f4c7b8
        mov eax, dword ptr ds : [eax+0x14]
        push 3
        push eax
        jmp public_6f4c7be
        public_6f4c7b8 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        push 2
        push ecx
        public_6f4c7be : nop
        call public_6f50f90
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [esi]
        add esp, 8
        cmp ebp, 1
        setne al
        push eax
        mov eax, dword ptr ds : [esi+0x1F8]
        push ecx
        mov ecx, dword ptr ds : [eax+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0xAC]
        mov ecx, esi
        call public_6f1b3d0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f49b00
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_6f4c824
        mov esi, dword ptr ds : [esi+4]
        mov ecx, edi
        call public_6f487c0
        cmp eax, esi
        jne public_6f4c824
        push 1
        push 3
        push esi
        mov ecx, edi
        call public_6f48a20
        public_6f4c824 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f4c6f0)
    }
}

#undef public_6f4c750
#undef public_6f4c76f
#undef public_6f4c77f
#undef public_6f4c798
#undef public_6f4c7a5
#undef public_6f4c7b8
#undef public_6f4c7be
#undef public_6f4c824
