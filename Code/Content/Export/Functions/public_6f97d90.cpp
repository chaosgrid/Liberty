#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f46690);
CLANG_FORWARD_PROC_SYMBOL(public_6f58f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f592f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f593a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f97d90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1756);

#define public_6f97dd2 _public_6f97dd2
#define public_6f97e34 _public_6f97e34
#define public_6f97e69 _public_6f97e69
#define public_6f97e70 _public_6f97e70
#define public_6f97e82 _public_6f97e82
#define public_6f97e90 _public_6f97e90
#define public_6f97e9d _public_6f97e9d
#define public_6f97ea1 _public_6f97ea1
#define public_6f97eb0 _public_6f97eb0
#define public_6f97ec0 _public_6f97ec0
#define public_6f97ec8 _public_6f97ec8
#define public_6f97ed3 _public_6f97ed3
#define public_6f97f48 _public_6f97f48
#define public_6f97f4c _public_6f97f4c
#define public_6f97fd6 _public_6f97fd6
#define public_6f97ff1 _public_6f97ff1
#define public_6f97ff3 _public_6f97ff3

PROC_DECLARE(0x6f97d90, internal_6f97d90, public_6f97d90);
extern "C" NAKED register_t __cdecl internal_6f97d90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1756 @0x6f97d92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1756
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x13C
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        call public_6f58f20
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], eax
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x48], ecx
        je public_6f97ff1
        public_6f97dd2 : nop
        lea esi, ds:[eax+0x10]
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x44], esi
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x154], ebx
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x158], 1
        call public_6f593a0
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f592f0
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        cmp esi, ecx
        je public_6f97e69
        public_6f97e34 : nop
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0x15C]
        mov edi, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x40], ecx
        push edx
        mov ecx, ebp
        call public_6eb5f30
        cmp eax, edi
        je public_6f97f48
        mov ecx, dword ptr ss : [esp+0x30]
        add esi, 4
        cmp esi, ecx
        jne public_6f97e34
        mov esi, dword ptr ss : [esp+0x2C]
        jmp public_6f97e70
        public_6f97e69 : nop
        mov ebp, dword ptr ss : [esp+0x15C]
        public_6f97e70 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x3C], ebp
        cmp edi, ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        je public_6f97ed3
        public_6f97e82 : nop
        cmp esi, ecx
        mov edx, dword ptr ds : [edi]
        mov eax, esi
        je public_6f97ea1
        lea ebx, ds:[ebx]
        public_6f97e90 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f97e9d
        add eax, 4
        cmp eax, ecx
        jne public_6f97e90
        jmp public_6f97ea1
        public_6f97e9d : nop
        cmp eax, ecx
        jne public_6f97ec8
        public_6f97ea1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        je public_6f97f4c
        lea ecx, ds:[ecx]
        public_6f97eb0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f97ec0
        add eax, 4
        cmp eax, ebp
        jne public_6f97eb0
        jmp public_6f97f4c
        public_6f97ec0 : nop
        cmp eax, ebp
        je public_6f97f4c
        public_6f97ec8 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        add edi, 4
        cmp edi, eax
        jne public_6f97e82
        public_6f97ed3 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+esi*4+0x4C], eax
        inc esi
        cmp esi, 0x40
        mov dword ptr ss : [esp+0x24], esi
        jne public_6f97f4c
        mov edx, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x15C], bl
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 4
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x15C], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6fa8fe0
        add esp, 4
        jmp public_6f97fd6
        public_6f97f48 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6f97f4c : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ebp
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x15C], bl
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x15C], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call public_6f46690
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f97dd2
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        jle public_6f97ff1
        mov esi, eax
        public_6f97fd6 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov eax, dword ptr ss : [esp+eax*4+0x4C]
        jmp public_6f97ff3
        public_6f97ff1 : nop
        xor eax, eax
        public_6f97ff3 : nop
        mov ecx, dword ptr ss : [esp+0x14C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x148
        ret 
        UNREACHABLE_TRAP(0x6f97d90)
    }
}

#undef public_6f97dd2
#undef public_6f97e34
#undef public_6f97e69
#undef public_6f97e70
#undef public_6f97e82
#undef public_6f97e90
#undef public_6f97e9d
#undef public_6f97ea1
#undef public_6f97eb0
#undef public_6f97ec0
#undef public_6f97ec8
#undef public_6f97ed3
#undef public_6f97f48
#undef public_6f97f4c
#undef public_6f97fd6
#undef public_6f97ff1
#undef public_6f97ff3
