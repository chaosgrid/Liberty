#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef948e);
CLANG_FORWARD_PROC_SYMBOL(public_6efa6ce);
CLANG_FORWARD_PROC_SYMBOL(public_6efa8e3);

#define public_6efa6f9 _public_6efa6f9
#define public_6efa719 _public_6efa719
#define public_6efa724 _public_6efa724
#define public_6efa728 _public_6efa728
#define public_6efa72c _public_6efa72c
#define public_6efa74f _public_6efa74f
#define public_6efa758 _public_6efa758
#define public_6efa78a _public_6efa78a
#define public_6efa797 _public_6efa797

PROC_DECLARE(0x6efa6ce, internal_6efa6ce, public_6efa6ce);
extern "C" NAKED register_t __cdecl internal_6efa6ce()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ds : [public_6f012a8], 0
        push ebx
        jne public_6efa6f9
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x61
        jl public_6efa797
        cmp eax, 0x7A
        jg public_6efa797
        sub eax, 0x20
        jmp public_6efa797
        public_6efa6f9 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp ebx, 0x100
        jge public_6efa72c
        cmp dword ptr ds : [public_6f00610], 1
        jle public_6efa719
        push 2
        push ebx
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6efa724
        public_6efa719 : nop
        mov eax, dword ptr ds : [public_6f0061c]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, 2
        public_6efa724 : nop
        test eax, eax
        jne public_6efa72c
        public_6efa728 : nop
        mov eax, ebx
        jmp public_6efa797
        public_6efa72c : nop
        mov edx, dword ptr ds : [public_6f0061c]
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_6efa74f
        and byte ptr ss : [ebp+0xA], 0
        mov byte ptr ss : [ebp+8], al
        mov byte ptr ss : [ebp+9], bl
        push 2
        jmp public_6efa758
        public_6efa74f : nop
        and byte ptr ss : [ebp+9], 0
        mov byte ptr ss : [ebp+8], bl
        push 1
        public_6efa758 : nop
        pop eax
        lea ecx, ss:[ebp-4]
        push 1
        push 0
        push 3
        push ecx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push 0x200
        push dword ptr ds : [public_6f012a8]
        call public_6efa8e3
        add esp, 0x20
        test eax, eax
        je public_6efa728
        cmp eax, 1
        jne public_6efa78a
        movzx eax, byte ptr ss : [ebp-4]
        jmp public_6efa797
        public_6efa78a : nop
        movzx eax, byte ptr ss : [ebp-3]
        movzx ecx, byte ptr ss : [ebp-4]
        shl eax, 8
        or eax, ecx
        public_6efa797 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efa6ce)
    }
}

#undef public_6efa6f9
#undef public_6efa719
#undef public_6efa724
#undef public_6efa728
#undef public_6efa72c
#undef public_6efa74f
#undef public_6efa758
#undef public_6efa78a
#undef public_6efa797
