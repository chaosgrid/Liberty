#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_442720);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_45b2c0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba5a0);
CLANG_FORWARD_PROC_SYMBOL(public_4bb6b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bc990);
CLANG_FORWARD_PROC_SYMBOL(public_4bd5d0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd459);

#define public_4bc9c2 _public_4bc9c2
#define public_4bc9ff _public_4bc9ff
#define public_4bca15 _public_4bca15
#define public_4bca19 _public_4bca19
#define public_4bcb3d _public_4bcb3d
#define public_4bcb91 _public_4bcb91
#define public_4bcbca _public_4bcbca
#define public_4bcbd4 _public_4bcbd4

PROC_DECLARE(0x4bc990, internal_4bc990, public_4bc990);
extern "C" NAKED register_t __cdecl internal_4bc990()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ds : [public_66d398]
        push 0xFFFFFFFF
/*FIXUP push public_5bd459 @0x4bc99e*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd459
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        je public_4bc9c2
        call public_45b2c0
        test al, al
        jne public_4bcbca
        public_4bc9c2 : nop
        cmp dword ptr ds : [public_672400], ebx
        jne public_4bcbca
        cmp dword ptr ds : [public_67232c], ebx
        jne public_4bc9ff
        cmp dword ptr ds : [public_67240c], ebx
        jne public_4bc9ff
        call public_42d680
        fadd dword ptr ds : [public_672408]
        pop ebx
        fstp dword ptr ds : [public_672408]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_4bc9ff : nop
        cmp byte ptr ds : [public_67dcc8], bl
        mov byte ptr ss : [esp+7], 1
        jne public_4bca15
        call public_42d740
        test al, al
        je public_4bca19
        public_4bca15 : nop
        mov byte ptr ss : [esp+7], bl
        public_4bca19 : nop
        call public_45a470
        test al, al
        jne public_4bcbd4
        call public_442720
        test al, al
        jne public_4bcbd4
        call public_41dd90
        test al, al
        je public_4bcbd4
        cmp byte ptr ss : [esp+7], bl
        je public_4bcbd4
/*FIXUP push offset public_5d0234 @0x4bca4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        cmp eax, ebx
        jne public_4bcbd4
/*FIXUP push offset public_5d0228 @0x4bca5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59da10
        add esp, 4
        cmp eax, ebx
        jne public_4bcbd4
/*FIXUP push offset public_5d021c @0x4bca74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        call public_59da10
        add esp, 4
        cmp eax, ebx
        jne public_4bcbd4
/*FIXUP push offset public_5d0094 @0x4bca89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0094
        call public_59da10
        add esp, 4
        cmp eax, ebx
        jne public_4bcbd4
        cmp dword ptr ds : [public_67240c], ebx
        je public_4bcb91
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        push 0x3D3
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [public_5c633c]
        mov eax, dword ptr ds : [public_67240c]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c63d4]
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c6338]
        mov eax, dword ptr ds : [public_672328]
        mov dword ptr ds : [public_67240c], ebx
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi+4]
        push 0x20
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        mov ecx, edi
        jne public_4bcb3d
        mov ecx, eax
        public_4bcb3d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_4bd5d0
        mov edi, dword ptr ds : [public_67232c]
        mov eax, dword ptr ds : [public_672328]
        inc edi
        mov dword ptr ds : [public_67232c], edi
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_4ba5a0
        push 0x27
        call public_5645c0
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        pop edi
        pop esi
        public_4bcb91 : nop
        push ebx
        push ebx
/*FIXUP push offset public_5d59fc @0x4bcb93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d59fc
/*FIXUP push offset public_5d59fc @0x4bcb98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d59fc
        call public_59db20
        add esp, 0x10
        cmp eax, ebx
        mov dword ptr ds : [public_672408], 0
        je public_4bcbd4
        mov ecx, eax
        call public_4bb6b0
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        public_4bcbca : nop
        mov dword ptr ds : [public_672408], 0
        public_4bcbd4 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4bc990)
    }
}

#undef public_4bc9c2
#undef public_4bc9ff
#undef public_4bca15
#undef public_4bca19
#undef public_4bcb3d
#undef public_4bcb91
#undef public_4bcbca
#undef public_4bcbd4
