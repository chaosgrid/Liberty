#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407600);
CLANG_FORWARD_PROC_SYMBOL(public_407ab0);
CLANG_FORWARD_PROC_SYMBOL(public_407ac0);
CLANG_FORWARD_PROC_SYMBOL(public_407cd0);
CLANG_FORWARD_PROC_SYMBOL(public_4080a0);
CLANG_FORWARD_PROC_SYMBOL(public_4080d0);
CLANG_FORWARD_PROC_SYMBOL(public_408110);
CLANG_FORWARD_PROC_SYMBOL(public_4083c0);
CLANG_FORWARD_PROC_SYMBOL(public_418530);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418c42);
CLANG_FORWARD_PROC_SYMBOL(public_418c48);
CLANG_FORWARD_PROC_SYMBOL(public_418c4e);
CLANG_FORWARD_JUMP_SYMBOL(public_419e18);

#define public_407682 _public_407682
#define public_4076d0 _public_4076d0
#define public_4076fe _public_4076fe
#define public_407706 _public_407706
#define public_407758 _public_407758
#define public_407778 _public_407778
#define public_40777c _public_40777c
#define public_407796 _public_407796
#define public_4077b3 _public_4077b3
#define public_4077f8 _public_4077f8
#define public_407800 _public_407800
#define public_407815 _public_407815
#define public_40781f _public_40781f
#define public_4078a3 _public_4078a3
#define public_4078a7 _public_4078a7
#define public_4078cd _public_4078cd
#define public_4078ec _public_4078ec

PROC_DECLARE(0x407600, internal_407600, public_407600);
extern "C" NAKED register_t __cdecl internal_407600()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_419e18 @0x407608*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419e18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        xor ebx, ebx
        cmp ebp, ebx
        push esi
        mov esi, ecx
        je public_4078ec
        mov eax, dword ptr ss : [ebp]
        push edi
        push ebp
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x4C]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push eax
        push 1
        lea ecx, ds:[esi+0x60]
        push edx
        call public_418c4e
        mov cl, byte ptr ss : [esp+0x4C]
        mov al, byte ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x29], cl
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        mov byte ptr ss : [esp+0x34], bl
        call public_408110
        mov edx, dword ptr ss : [ebp]
        push ebp
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [edx+0x14]
        test eax, eax
        mov edi, dword ptr ds : [public_41bbe8]
        jle public_407796
        public_407682 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push ebp
        call dword ptr ds : [eax+0x20]
        mov ebx, eax
        test ebx, ebx
        je public_40777c
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        push ebp
        call public_418530
        mov ecx, dword ptr ds : [esi+0x80]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        push 4
        push 0x110A
        push ecx
        call edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_407706
        lea ebx, ds:[ebx]
        public_4076d0 : nop
        push eax
        lea ecx, ds:[esi+0x60]
        call public_418c48
        cmp eax, dword ptr ss : [esp+0x1C]
        je public_4076fe
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x80]
        push edx
        push 1
        push 0x110A
        push eax
        call edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_4076d0
        jmp public_407706
        public_4076fe : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_407758
        public_407706 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        push 0xFFFF0002
        push ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        push ebp
        push 1
        lea ecx, ds:[esi+0x60]
        call public_418c42
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_407778
        push ebp
        call public_418530
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        push 0
        push 0
        push 0
        push 0
        push 0
        push 4
        push edx
        lea ecx, ds:[esi+0x60]
        call public_418c4e
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_407778
        public_407758 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_407ac0
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push edx
        mov ecx, esi
        call public_407600
        public_407778 : nop
        mov ebp, dword ptr ss : [esp+0x50]
        public_40777c : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        inc ebx
        push ebp
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [eax+0x14]
        cmp ebx, eax
        jl public_407682
        xor ebx, ebx
        public_407796 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [esi+0x80]
        push ecx
        push 4
        push 0x110A
        push edx
        call edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_40781f
        public_4077b3 : nop
        push eax
        mov eax, dword ptr ds : [esi+0x80]
        push 1
        push 0x110A
        push eax
        call edi
        mov ebp, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x30]
        mov ebx, eax
        call public_4080a0
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x18]
        je public_4077f8
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_4077f8
        lea eax, ss:[esp+0x50]
        jmp public_407800
        public_4077f8 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        public_407800 : nop
        cmp dword ptr ds : [eax], ebp
        jne public_407815
        mov eax, dword ptr ds : [esi+0x80]
        push edx
        push 0
        push 0x1101
        push eax
        call edi
        public_407815 : nop
        test ebx, ebx
        mov eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        jne public_4077b3
        public_40781f : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [esi+0x80]
        push ecx
        push ebx
        push 0x1113
        push edx
        call edi
        mov esi, dword ptr ss : [esp+0x2C]
        cmp dword ptr ss : [esp+0x38], ebx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ecx
        pop edi
        je public_4078a3
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_407ab0
        mov ecx, dword ptr ss : [esp+0x48]
        cmp ecx, dword ptr ds : [eax]
        jne public_4078a3
        mov eax, dword ptr ss : [esp+0x28]
        cmp esi, eax
        jne public_4078a3
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_4080d0
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ds : [eax+8], eax
        call public_407ab0
        jmp public_4078cd
        public_4078a3 : nop
        cmp ecx, esi
        je public_4078cd
        public_4078a7 : nop
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x50]
        call public_4083c0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_407cd0
        cmp dword ptr ss : [esp+0x48], esi
        jne public_4078a7
        public_4078cd : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_418978
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        call public_418978
        add esp, 8
        public_4078ec : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x407600)
    }
}

#undef public_407682
#undef public_4076d0
#undef public_4076fe
#undef public_407706
#undef public_407758
#undef public_407778
#undef public_40777c
#undef public_407796
#undef public_4077b3
#undef public_4077f8
#undef public_407800
#undef public_407815
#undef public_40781f
#undef public_4078a3
#undef public_4078a7
#undef public_4078cd
#undef public_4078ec
