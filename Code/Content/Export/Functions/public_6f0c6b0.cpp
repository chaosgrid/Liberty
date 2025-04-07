#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f0c6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad3bb);

#define public_6f0c6f3 _public_6f0c6f3
#define public_6f0c754 _public_6f0c754
#define public_6f0c7e5 _public_6f0c7e5
#define public_6f0c7fa _public_6f0c7fa
#define public_6f0c830 _public_6f0c830
#define public_6f0c843 _public_6f0c843
#define public_6f0c84e _public_6f0c84e
#define public_6f0c850 _public_6f0c850
#define public_6f0c886 _public_6f0c886
#define public_6f0c894 _public_6f0c894
#define public_6f0c8a8 _public_6f0c8a8
#define public_6f0c93a _public_6f0c93a
#define public_6f0c942 _public_6f0c942
#define public_6f0c946 _public_6f0c946
#define public_6f0c9a4 _public_6f0c9a4
#define public_6f0c9c7 _public_6f0c9c7
#define public_6f0c9c9 _public_6f0c9c9
#define public_6f0c9cd _public_6f0c9cd
#define public_6f0c9ed _public_6f0c9ed

PROC_DECLARE(0x6f0c6b0, internal_6f0c6b0, public_6f0c6b0);
extern "C" NAKED register_t __cdecl internal_6f0c6b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad3bb @0x6f0c6b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad3bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ds : [public_6fd1c79]
        mov dword ptr fs : [0], esp
        sub esp, 0x9C
        push ebx
        xor ebx, ebx
        cmp al, bl
        push ebp
        mov ebp, ecx
        je public_6f0c6f3
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x9C]
        mov dword ptr fs : [0], ecx
        add esp, 0xA8
        ret 
        public_6f0c6f3 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        push edi
        mov dword ptr ss : [esp+0x34], ebx
        call public_6eea860
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [eax+0x48]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x34]
        push eax
        push 0x7F0000
        push 0x451C4000
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        call public_6eb70f0
        push eax
        push 0x10
        lea edx, ss:[esp+0x80]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x50]
        add esp, 0x1C
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        jbe public_6f0c9a4
        lea edi, ss:[ebp+0x30]
        public_6f0c754 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+ecx*4+0x6C]
        mov esi, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call public_6eb5f30
        cmp eax, esi
        jne public_6f0c9ed
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f0c9ed
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ss : [esp+0x54]
        push eax
        mov dword ptr ss : [esp+0xB8], ebx
        call public_6f73930
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f0c9c9
        mov eax, dword ptr ds : [eax+0x154]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_6f66220
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        cmp edx, ebx
        je public_6f0c7e5
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        cmp eax, ebx
        jne public_6f0c7fa
        public_6f0c7e5 : nop
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x24]
        public_6f0c7fa : nop
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], ecx
        cmp byte ptr ds : [ecx+0x11D], bl
        jne public_6f0c9cd
        call public_6f57710
        test al, al
        jne public_6f0c9c9
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], edx
        mov esi, eax
        je public_6f0c8a8
        mov edi, edi
        public_6f0c830 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], edx
        je public_6f0c84e
        public_6f0c843 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f0c850
        add eax, 4
        cmp eax, ecx
        jne public_6f0c843
        public_6f0c84e : nop
        mov eax, ecx
        public_6f0c850 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6f0c886
        lea edx, ss:[esp+0x1C]
        push edx
        push ecx
        mov ecx, edi
        call public_6eb5770
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x17], 1
        call public_6eb5f30
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x5C], eax
        push edx
        jmp public_6f0c894
        public_6f0c886 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x17], bl
        push ecx
        public_6f0c894 : nop
        lea ecx, ss:[esp+0x68]
        call public_6fa6e80
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        cmp esi, eax
        jne public_6f0c830
        public_6f0c8a8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        test eax, eax
        jne public_6f0c9c9
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x5C], eax
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        call dword ptr ds : [public_6fb365c]
        mov edx, dword ptr ds : [public_6fd0640]
        mov eax, dword ptr ds : [public_6fd063c]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x50], eax
        call public_6f49bc0
        add esp, 0x10
        test eax, eax
        je public_6f0c942
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [edx+8]
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x50], eax
        lea eax, ss:[esp+0x50]
        push eax
        call public_6f50650
        mov ecx, dword ptr ds : [eax+0x94]
        add esp, 4
        cmp ecx, 2
        jne public_6f0c93a
        fld dword ptr ds : [public_6fb80f0]
        jmp public_6f0c946
        public_6f0c93a : nop
        fld dword ptr ds : [public_6fb80f8]
        jmp public_6f0c946
        public_6f0c942 : nop
        fld dword ptr ss : [esp+0x40]
        public_6f0c946 : nop
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 1
        jne public_6f0c9c7
        fld dword ptr ss : [esp+0x38]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f0c9c9
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x4C], eax
        fild dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ss : [ebp+0x58]
        fnstsw ax
        test ah, 5
        jp public_6f0c9c9
        mov ecx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx+0x11D], 1
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx+4]
        push ecx
        mov dword ptr ss : [ebp+0x20], eax
        call public_6fa8fe0
        add esp, 4
        public_6f0c9a4 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        pop edi
        xor eax, eax
        cmp ecx, ebx
        mov ecx, dword ptr ss : [esp+0xA8]
        pop esi
        pop ebp
        setne al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA8
        ret 
        public_6f0c9c7 : nop
        fstp st(0)
        public_6f0c9c9 : nop
        mov edx, dword ptr ss : [esp+0x24]
        public_6f0c9cd : nop
        push edx
        mov dword ptr ss : [esp+0xB8], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_6f0c9ed : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        jb public_6f0c754
        jmp public_6f0c9a4
        UNREACHABLE_TRAP(0x6f0c6b0)
    }
}

#undef public_6f0c6f3
#undef public_6f0c754
#undef public_6f0c7e5
#undef public_6f0c7fa
#undef public_6f0c830
#undef public_6f0c843
#undef public_6f0c84e
#undef public_6f0c850
#undef public_6f0c886
#undef public_6f0c894
#undef public_6f0c8a8
#undef public_6f0c93a
#undef public_6f0c942
#undef public_6f0c946
#undef public_6f0c9a4
#undef public_6f0c9c7
#undef public_6f0c9c9
#undef public_6f0c9cd
#undef public_6f0c9ed
