#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289c20);
CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6299b70);
CLANG_FORWARD_PROC_SYMBOL(public_629a210);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ea450);

#define public_62ea481 _public_62ea481
#define public_62ea483 _public_62ea483
#define public_62ea4a8 _public_62ea4a8
#define public_62ea4ac _public_62ea4ac
#define public_62ea4c0 _public_62ea4c0
#define public_62ea4f6 _public_62ea4f6
#define public_62ea4fd _public_62ea4fd
#define public_62ea531 _public_62ea531
#define public_62ea540 _public_62ea540
#define public_62ea542 _public_62ea542
#define public_62ea55f _public_62ea55f
#define public_62ea561 _public_62ea561
#define public_62ea698 _public_62ea698
#define public_62ea6c1 _public_62ea6c1
#define public_62ea6c7 _public_62ea6c7
#define public_62ea6df _public_62ea6df
#define public_62ea753 _public_62ea753

PROC_DECLARE(0x62ea450, internal_62ea450, public_62ea450);
extern "C" NAKED register_t __cdecl internal_62ea450()
{
    __asm
    {
        sub esp, 0x150
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x160]
        mov eax, dword ptr ds : [esi]
        mov ebp, ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        xor ebx, ebx
        cmp eax, ebx
        je public_62ea481
        lea ecx, ds:[eax-8]
        jmp public_62ea483
        public_62ea481 : nop
        xor ecx, ecx
        public_62ea483 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_62ea4a8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        mov dword ptr ss : [esp+0x28], eax
        je public_62ea4ac
        public_62ea4a8 : nop
        mov dword ptr ss : [esp+0x28], ebx
        public_62ea4ac : nop
        mov esi, dword ptr ss : [esp+0x168]
        or eax, 0xFFFFFFFF
        xor ecx, ecx
        lea edi, ss:[ebp+0x1098]
        mov edi, edi
        public_62ea4c0 : nop
        cmp byte ptr ds : [edi], bl
        je public_62ea4f6
        mov edx, dword ptr ss : [esp+0x2C]
        cmp dword ptr ds : [edi+4], edx
        jne public_62ea4fd
        cmp word ptr ds : [edi+8], si
        jne public_62ea4fd
        cmp byte ptr ds : [edi+0x14], bl
        je public_62ea753
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x15], bl
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62ea540
        lea ecx, ds:[eax-8]
        jmp public_62ea542
        public_62ea4f6 : nop
        cmp eax, 0xFFFFFFFF
        jne public_62ea4fd
        mov eax, ecx
        public_62ea4fd : nop
        inc ecx
        add edi, 0x18
        cmp ecx, 0x10
        jl public_62ea4c0
        cmp eax, 0xFFFFFFFF
        je public_62ea531
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[eax+eax*2+0x213]
        lea eax, ss:[ebp+ecx*8]
        mov byte ptr ds : [eax+0x14], 1
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov byte ptr ds : [eax], 1
        mov dword ptr ds : [eax+4], edx
        mov word ptr ds : [eax+8], si
        public_62ea531 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x150
        ret 8
        public_62ea540 : nop
        xor ecx, ecx
        public_62ea542 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_62ea55f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62ea561
        public_62ea55f : nop
        xor eax, eax
        public_62ea561 : nop
        push esi
        lea ecx, ds:[eax+0xE4]
        call public_629b6d0
        push eax
        call public_629a210
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_62ea753
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_62ea753
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        test al, al
        jne public_62ea753
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6299ac0
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        call public_6299b70
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x164]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_639e678]
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_639e678]
        mov eax, dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x38]
        push 8
        fmul dword ptr ds : [public_639e678]
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x64]
        push ecx
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        mov dword ptr ss : [esp+0x48], edx
        fadd dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], eax
        push edx
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x28]
        fadd st, st(1)
        push eax
        push esi
        fstp dword ptr ss : [esp+0x60]
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_639b21c]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_639b21c]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [public_639b21c]
        fstp dword ptr ss : [esp+0x70]
        fxch 
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x38]
        call public_6289c20
        add esp, 0x14
        xor edx, edx
        test eax, eax
        jle public_62ea753
        lea ebx, ss:[esp+0x60]
        public_62ea698 : nop
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        je public_62ea6c7
        mov ecx, dword ptr ds : [esi+0x4C]
        mov ebp, ecx
        and ebp, 0x103
        cmp ebp, 0x103
        jne public_62ea6c7
        cmp ecx, 0x303
        je public_62ea6c1
        cmp ecx, 0x503
        jne public_62ea6c7
        public_62ea6c1 : nop
        cmp esi, dword ptr ss : [esp+0x28]
        jne public_62ea6df
        public_62ea6c7 : nop
        inc edx
        add ebx, 0x20
        cmp edx, eax
        jl public_62ea698
        mov al, byte ptr ds : [edi+0x15]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x150
        ret 8
        public_62ea6df : nop
        shl edx, 5
        fld dword ptr ss : [esp+edx+0x64]
        lea eax, ss:[esp+edx+0x64]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x24]
        fld st(2)
        fmul st, st(3)
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(5)
        fmul st, st(6)
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcompp 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62ea753
        mov byte ptr ds : [edi+0x15], 1
        public_62ea753 : nop
        mov al, byte ptr ds : [edi+0x15]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x150
        ret 8
        UNREACHABLE_TRAP(0x62ea450)
    }
}

#undef public_62ea481
#undef public_62ea483
#undef public_62ea4a8
#undef public_62ea4ac
#undef public_62ea4c0
#undef public_62ea4f6
#undef public_62ea4fd
#undef public_62ea531
#undef public_62ea540
#undef public_62ea542
#undef public_62ea55f
#undef public_62ea561
#undef public_62ea698
#undef public_62ea6c1
#undef public_62ea6c7
#undef public_62ea6df
#undef public_62ea753
