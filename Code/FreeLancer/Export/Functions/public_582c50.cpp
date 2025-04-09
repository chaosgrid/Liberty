#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d660);
CLANG_FORWARD_PROC_SYMBOL(public_580290);
CLANG_FORWARD_PROC_SYMBOL(public_580750);
CLANG_FORWARD_PROC_SYMBOL(public_580d00);
CLANG_FORWARD_PROC_SYMBOL(public_5811b0);
CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_5a1130);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_582c6f _public_582c6f
#define public_582cb7 _public_582cb7
#define public_582cf3 _public_582cf3
#define public_582d2f _public_582d2f
#define public_582d6d _public_582d6d
#define public_582dff _public_582dff
#define public_582ea8 _public_582ea8
#define public_582ef8 _public_582ef8
#define public_582f2d _public_582f2d
#define public_582f4f _public_582f4f
#define public_582f9d _public_582f9d
#define public_582fd2 _public_582fd2
#define public_582ff4 _public_582ff4
#define public_583035 _public_583035
#define public_583061 _public_583061
#define public_58308e _public_58308e

PROC_DECLARE(0x582c50, internal_582c50, public_582c50);
extern "C" NAKED register_t __cdecl internal_582c50()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x66D]
        test al, al
        push esi
        push edi
        jne public_582c6f
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x48
        ret 4
        public_582c6f : nop
        mov al, byte ptr ss : [ebp+0x674]
        test al, al
        mov ebx, 1
        je public_582cb7
        mov eax, dword ptr ss : [esp+0x5C]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_58308e
        cmp dword ptr ds : [eax+4], ebx
        jne public_58308e
        push ebp
        call public_59d960
        add esp, 4
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x674], 0
        pop ebp
        mov al, bl
        mov byte ptr ds : [public_67c4c4], 0
        pop ebx
        add esp, 0x48
        ret 4
        public_582cb7 : nop
        mov al, byte ptr ss : [ebp+0x676]
        test al, al
        je public_582cf3
        mov eax, dword ptr ss : [esp+0x5C]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_58308e
        cmp dword ptr ds : [eax+4], ebx
        jne public_58308e
        push ebp
        call public_59d960
        add esp, 4
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x676], 0
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_582cf3 : nop
        mov al, byte ptr ss : [ebp+0x677]
        test al, al
        je public_582d2f
        mov eax, dword ptr ss : [esp+0x5C]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_58308e
        cmp dword ptr ds : [eax+4], ebx
        jne public_58308e
        push ebp
        call public_59d960
        add esp, 4
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x677], 0
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_582d2f : nop
        mov al, byte ptr ss : [ebp+0x675]
        test al, al
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax]
        je public_582d6d
        cmp ecx, 0xFFFFFFFF
        jne public_58308e
        cmp dword ptr ds : [eax+4], ebx
        jne public_58308e
        push ebp
        call public_59d960
        add esp, 4
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x675], 0
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_582d6d : nop
        cmp ecx, 0xFFFFFFFF
        jne public_58308e
        cmp dword ptr ds : [eax+4], 2
        jne public_58308e
        fild dword ptr ds : [public_616840]
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x34]
        fsub dword ptr ds : [public_67dc60]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fild dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_67c4c0]
        test eax, eax
        fsub dword ptr ds : [public_67dc64]
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x2C], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x30], edx
        rep movsd
        jne public_582dff
        call public_5b73e0
        mov dword ptr ds : [public_67c4c0], eax
        public_582dff : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x66D]
        test al, al
        faddp 
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], edx
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        je public_582ea8
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[ebp+0x5B8]
        push ecx
        lea ecx, ss:[ebp+0x5E8]
        call public_5a1130
        test al, al
        je public_582ea8
        push ebp
        call public_59d8d0
        add esp, 4
        mov ebx, 1
        jmp public_583035
        public_582ea8 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[ebp+0x404]
        push edx
        lea ecx, ss:[ebp+0x434]
        call public_5a1130
        test al, al
        je public_582f4f
        push ebp
        call public_59d8d0
        mov eax, dword ptr ss : [ebp+0x664]
        mov ecx, dword ptr ss : [ebp+0x65C]
        add esp, 4
        cmp eax, ecx
        jge public_582f2d
        mov edx, dword ptr ss : [ebp+0x668]
        add eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x664], eax
        jle public_582ef8
        mov dword ptr ss : [ebp+0x664], ecx
        public_582ef8 : nop
        mov ecx, ebp
        call public_580290
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_582f2d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov esi, eax
        test esi, esi
        je public_582f2d
        mov ecx, dword ptr ss : [ebp+0x664]
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        push eax
        push 0x3E
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_582f2d : nop
        mov ebx, 1
        mov byte ptr ss : [ebp+0x676], bl
        call public_42d660
        fstp dword ptr ss : [ebp+0x670]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_582f4f : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[ebp+0x4A8]
        push ecx
        lea ecx, ss:[ebp+0x4D8]
        call public_5a1130
        test al, al
        je public_582ff4
        push ebp
        call public_59d8d0
        mov eax, dword ptr ss : [ebp+0x664]
        mov ecx, dword ptr ss : [ebp+0x658]
        add esp, 4
        cmp eax, ecx
        jle public_582fd2
        sub eax, dword ptr ss : [ebp+0x668]
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x664], eax
        jge public_582f9d
        mov dword ptr ss : [ebp+0x664], ecx
        public_582f9d : nop
        mov ecx, ebp
        call public_580290
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_582fd2
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_582fd2
        mov eax, dword ptr ss : [ebp+0x664]
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        push eax
        push 0x3E
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_582fd2 : nop
        mov ebx, 1
        mov byte ptr ss : [ebp+0x677], bl
        call public_42d660
        fstp dword ptr ss : [ebp+0x670]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_582ff4 : nop
        mov al, byte ptr ss : [ebp+0x66D]
        test al, al
        je public_58308e
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[ebp+0x360]
        push ecx
        lea ecx, ss:[ebp+0x390]
        call public_5a1130
        test al, al
        je public_58308e
        push ebp
        call public_59d8d0
        mov al, byte ptr ss : [ebp+0x66C]
        add esp, 4
        test al, al
        mov ebx, 1
        je public_583061
        public_583035 : nop
        mov byte ptr ss : [ebp+0x674], bl
        mov edx, dword ptr ds : [public_616844]
        mov eax, dword ptr ds : [public_616840]
        push edx
        push eax
        mov ecx, ebp
        mov byte ptr ds : [public_67c4c4], bl
        call public_5811b0
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        public_583061 : nop
        mov byte ptr ss : [ebp+0x675], bl
        call public_42d660
        fstp dword ptr ss : [ebp+0x670]
        mov ecx, dword ptr ds : [public_616844]
        mov edx, dword ptr ds : [public_616840]
        push ecx
        push edx
        mov ecx, ebp
        call public_580750
        mov ecx, ebp
        call public_580d00
        public_58308e : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x582c50)
    }
}

#undef public_582c6f
#undef public_582cb7
#undef public_582cf3
#undef public_582d2f
#undef public_582d6d
#undef public_582dff
#undef public_582ea8
#undef public_582ef8
#undef public_582f2d
#undef public_582f4f
#undef public_582f9d
#undef public_582fd2
#undef public_582ff4
#undef public_583035
#undef public_583061
#undef public_58308e
