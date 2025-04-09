#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435dd0);
CLANG_FORWARD_PROC_SYMBOL(public_449990);
CLANG_FORWARD_PROC_SYMBOL(public_449f40);
CLANG_FORWARD_PROC_SYMBOL(public_44d200);
CLANG_FORWARD_PROC_SYMBOL(public_557860);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_44abd4 _public_44abd4
#define public_44abe2 _public_44abe2
#define public_44abed _public_44abed
#define public_44abf9 _public_44abf9
#define public_44ac2f _public_44ac2f
#define public_44ac36 _public_44ac36
#define public_44ac3d _public_44ac3d
#define public_44ac70 _public_44ac70
#define public_44ac86 _public_44ac86

PROC_DECLARE(0x44ab70, internal_44ab70, public_44ab70);
extern "C" NAKED register_t __cdecl internal_44ab70()
{
    __asm
    {
        push ecx
        fld qword ptr ss : [esp+8]
        push ebx
        push ebp
        fstp dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call public_449990
        mov al, byte ptr ds : [esi+0x516]
        test al, al
        je public_44ac3d
        mov al, byte ptr ds : [esi+0x514]
        test al, al
        jne public_44ac36
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        xor edi, edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_449f40
        test al, al
        je public_44ac2f
        mov ebx, dword ptr ss : [esp+0x18]
        xor eax, eax
        lea ecx, ds:[esi+0x518]
        public_44abd4 : nop
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        je public_44abe2
        cmp dword ptr ds : [edx+0x154], ebx
        je public_44abed
        public_44abe2 : nop
        inc eax
        add ecx, 4
        cmp eax, 0x40
        jl public_44abd4
        jmp public_44abf9
        public_44abed : nop
        cmp eax, 0xFFFFFFFF
        je public_44abf9
        mov edi, dword ptr ds : [esi+eax*4+0x518]
        public_44abf9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x1B8]
        push 0
        push 0
        push edx
        push eax
        push esi
        push edi
        call public_435dd0
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x18
        push eax
        push ebx
        call dword ptr ds : [edx+0xA4]
        mov byte ptr ds : [esi+0x517], 1
        public_44ac2f : nop
        mov byte ptr ds : [esi+0x514], 1
        public_44ac36 : nop
        mov byte ptr ds : [esi+0x516], 0
        public_44ac3d : nop
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44ac86
        push 0x29
        call public_5792b0
        add esp, 4
        test eax, eax
        jle public_44ac86
        mov eax, dword ptr ds : [esi+0x101C]
        xor edi, edi
        test eax, eax
        jle public_44ac86
        lea ebx, ds:[esi+0x81C]
        nop 
        lea esp, ss:[esp]
        public_44ac70 : nop
        mov ecx, dword ptr ds : [ebx]
        push ebp
        call public_557860
        mov eax, dword ptr ds : [esi+0x101C]
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_44ac70
        public_44ac86 : nop
        push ebp
        mov ecx, esi
        call public_44d200
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x44ab70)
    }
}

#undef public_44abd4
#undef public_44abe2
#undef public_44abed
#undef public_44abf9
#undef public_44ac2f
#undef public_44ac36
#undef public_44ac3d
#undef public_44ac70
#undef public_44ac86
