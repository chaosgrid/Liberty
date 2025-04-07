#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_634d210);
CLANG_FORWARD_PROC_SYMBOL(public_634d260);
CLANG_FORWARD_PROC_SYMBOL(public_634d3e0);
CLANG_FORWARD_PROC_SYMBOL(public_634d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6378a70);
CLANG_FORWARD_PROC_SYMBOL(public_6378ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6378b00);
CLANG_FORWARD_PROC_SYMBOL(public_6378b40);
CLANG_FORWARD_PROC_SYMBOL(public_6378ea0);
CLANG_FORWARD_PROC_SYMBOL(public_63793d0);
CLANG_FORWARD_PROC_SYMBOL(public_6379400);
CLANG_FORWARD_PROC_SYMBOL(public_6379460);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398958);

#define public_63794c3 _public_63794c3
#define public_63794c7 _public_63794c7
#define public_63794d7 _public_63794d7
#define public_63794f4 _public_63794f4
#define public_6379509 _public_6379509
#define public_637952f _public_637952f
#define public_637954d _public_637954d
#define public_637958d _public_637958d
#define public_63795aa _public_63795aa
#define public_63795ac _public_63795ac
#define public_63795cc _public_63795cc
#define public_63795eb _public_63795eb
#define public_63795ed _public_63795ed
#define public_63795f8 _public_63795f8
#define public_6379619 _public_6379619
#define public_6379636 _public_6379636
#define public_637963c _public_637963c
#define public_6379647 _public_6379647
#define public_6379672 _public_6379672
#define public_637967a _public_637967a
#define public_637968e _public_637968e
#define public_6379697 _public_6379697
#define public_63796af _public_63796af
#define public_63796df _public_63796df
#define public_6379710 _public_6379710
#define public_6379712 _public_6379712
#define public_6379721 _public_6379721
#define public_6379744 _public_6379744
#define public_6379749 _public_6379749
#define public_6379755 _public_6379755
#define public_637977a _public_637977a
#define public_6379785 _public_6379785
#define public_63797a9 _public_63797a9
#define public_63797ae _public_63797ae
#define public_63797ba _public_63797ba
#define public_63797d2 _public_63797d2
#define public_63797f8 _public_63797f8
#define public_63797fd _public_63797fd
#define public_6379809 _public_6379809
#define public_637981a _public_637981a
#define public_637982a _public_637982a
#define public_6379838 _public_6379838
#define public_6379859 _public_6379859
#define public_637985b _public_637985b
#define public_637986a _public_637986a
#define public_6379877 _public_6379877
#define public_63798a0 _public_63798a0
#define public_63798a2 _public_63798a2
#define public_63798b1 _public_63798b1
#define public_63798be _public_63798be
#define public_63798e5 _public_63798e5
#define public_63798fd _public_63798fd
#define public_6379906 _public_6379906
#define public_6379920 _public_6379920
#define public_6379923 _public_6379923
#define public_6379949 _public_6379949
#define public_6379956 _public_6379956
#define public_6379984 _public_6379984

PROC_DECLARE(0x6379460, internal_6379460, public_6379460);
extern "C" NAKED register_t __cdecl internal_6379460()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6398958 @0x6379468*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398958
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+8]
        push esi
        push edi
        xor esi, esi
        push ecx
        mov dword ptr ss : [esp+0x38], esi
        call public_63793d0
        add esp, 4
        push 0x10
        lea ecx, ss:[esp+0x40]
        call public_634d210
        mov ebp, dword ptr ds : [ebx+8]
        xor eax, eax
        cmp ebp, esi
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x20], ebp
        je public_63798fd
        jmp public_63794c7
        public_63794c3 : nop
        mov eax, dword ptr ss : [esp+0x38]
        public_63794c7 : nop
        mov edx, eax
        inc eax
        cmp edx, 0x64
        mov dword ptr ss : [esp+0x38], eax
        jg public_6379949
        public_63794d7 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_63794f4
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_63794f4
        lea ecx, ss:[esp+0x3C]
        call public_634d4f0
        jmp public_63794d7
        public_63794f4 : nop
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_637952f
        public_6379509 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push edx
        push edi
        call public_6379400
        fstp dword ptr ss : [esp+8]
        add esp, 8
        push esi
        lea ecx, ss:[esp+0x44]
        call public_634d3e0
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6379509
        public_637952f : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_63798be
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x30], eax
        je public_63798be
        public_637954d : nop
        cmp eax, ebp
        je public_63796af
        mov edi, dword ptr ds : [eax+8]
        cmp edi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], edi
        je public_63796af
        push edi
        mov ecx, ebp
        call public_6378b00
        test eax, eax
        je public_63796af
        mov esi, dword ptr ss : [esp+0x28]
        test esi, esi
        je public_637958d
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_637958d : nop
        push 0x18
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63795aa
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        mov ecx, eax
        call public_6378ac0
        jmp public_63795ac
        public_63795aa : nop
        xor eax, eax
        public_63795ac : nop
        mov esi, dword ptr ss : [esp+0x2C]
        test esi, esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        je public_63795cc
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_63795cc : nop
        push 0x18
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63795eb
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push edx
        mov ecx, eax
        call public_6378ac0
        mov ebp, eax
        jmp public_63795ed
        public_63795eb : nop
        xor ebp, ebp
        public_63795ed : nop
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        mov dword ptr ss : [esp+0x2C], ebp
        je public_637963c
        public_63795f8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edi
        mov ecx, esi
        call public_6378b40
        test eax, eax
        jne public_6379619
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        call public_6378ea0
        test eax, eax
        jne public_637967a
        public_6379619 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push edx
        mov ecx, esi
        call public_6378b40
        test eax, eax
        jne public_6379636
        push ebp
        mov ecx, esi
        call public_6378ea0
        test eax, eax
        jne public_637967a
        public_6379636 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_63795f8
        public_637963c : nop
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        je public_63796df
        public_6379647 : nop
        mov edi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        call public_6378b00
        test eax, eax
        je public_6379672
        push edi
        mov ecx, ebp
        call public_6378b00
        test eax, eax
        je public_6379672
        mov ecx, dword ptr ss : [esp+0x24]
        push edi
        call public_6378b00
        test eax, eax
        jne public_637968e
        public_6379672 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_63796df
        jmp public_6379647
        public_637967a : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6379697
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_63796af
        jmp public_6379697
        public_637968e : nop
        mov ecx, dword ptr ss : [esp+0x30]
        cmp dword ptr ds : [ecx], 0
        jne public_63796af
/*FIXUP public_6379697 : nop
        push offset public_63f350c @0x6379697*/
  FIXUP public_6379697 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f350c
        call dword ptr ds : [public_6399284]
        add esp, 4
        mov dword ptr ds : [0], 0
        public_63796af : nop
        lea ecx, ss:[esp+0x3C]
        call public_634d4f0
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        je public_63798be
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x30], eax
        je public_63798be
        mov ebp, dword ptr ss : [esp+0x20]
        jmp public_637954d
        public_63796df : nop
        push 0x14
        call public_6391d9c
        xor edi, edi
        add esp, 4
        cmp eax, edi
        je public_6379710
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ds : [ecx+0x10]
        push edx
        mov ecx, eax
        call public_6378a70
        jmp public_6379712
        public_6379710 : nop
        xor eax, eax
        public_6379712 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp ecx, edi
        je public_6379721
        mov dword ptr ds : [ecx+4], eax
        public_6379721 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+4], edi
        inc dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        inc edx
        cmp eax, edi
        mov dword ptr ss : [esp+0x34], edx
        je public_6379744
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        jmp public_6379749
        public_6379744 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx+8], eax
        public_6379749 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6379755
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_6379755 : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov ecx, dword ptr ds : [ebx+0xC]
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ss : [esp+0x30], edi
        je public_637977a
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_637977a : nop
        mov esi, dword ptr ds : [ebx+8]
        cmp esi, edi
        je public_6379838
        public_6379785 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [esi]
        push edx
        push eax
        mov ecx, esi
        call public_6378b40
        test eax, eax
        je public_63797d2
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_63797a9
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        jmp public_63797ae
        public_63797a9 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ebx+8], edx
        public_63797ae : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_63797ba
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_63797ba : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov ecx, dword ptr ds : [ebx+0xC]
        dec ecx
        test esi, esi
        mov dword ptr ds : [ebx+0xC], ecx
        mov edi, 1
        je public_637982a
        jmp public_637981a
        public_63797d2 : nop
        test esi, esi
        je public_637982a
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov ecx, esi
        call public_6378b40
        test eax, eax
        je public_637982a
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_63797f8
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        jmp public_63797fd
        public_63797f8 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ebx+8], edx
        public_63797fd : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6379809
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_6379809 : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        dec dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x30], 1
        public_637981a : nop
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_637982a : nop
        test ebp, ebp
        mov esi, ebp
        jne public_6379785
        test edi, edi
        jne public_6379877
        public_6379838 : nop
        push 0x18
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6379859
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push ecx
        mov ecx, eax
        call public_6378ac0
        jmp public_637985b
        public_6379859 : nop
        xor eax, eax
        public_637985b : nop
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        je public_637986a
        mov dword ptr ds : [ecx+4], eax
        public_637986a : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ebx+8], eax
        inc dword ptr ds : [ebx+0xC]
        public_6379877 : nop
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        jne public_63798be
        push 0x18
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63798a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        mov ecx, eax
        call public_6378ac0
        jmp public_63798a2
        public_63798a0 : nop
        xor eax, eax
        public_63798a2 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        je public_63798b1
        mov dword ptr ds : [ecx+4], eax
        public_63798b1 : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ebx+8], eax
        inc dword ptr ds : [ebx+0xC]
        public_63798be : nop
        mov ebp, dword ptr ds : [ebx+8]
        test ebp, ebp
        mov dword ptr ss : [esp+0x20], ebp
        jne public_63794c3
        mov esi, dword ptr ss : [esp+0x28]
        test esi, esi
        je public_63798e5
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_63798e5 : nop
        mov esi, dword ptr ss : [esp+0x2C]
        test esi, esi
        je public_63798fd
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_63798fd : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [edx+0x14]
        dec edi
        js public_6379923
        public_6379906 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        mov esi, dword ptr ds : [eax+edi*4]
        test esi, esi
        je public_6379920
        mov ecx, esi
        call public_62a8920
        push esi
        call public_6391d5a
        add esp, 4
        public_6379920 : nop
        dec edi
        jns public_6379906
        public_6379923 : nop
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_634d260
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6379949 : nop
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        je public_6379984
        mov edi, dword ptr ds : [public_6399284]
        public_6379956 : nop
        mov eax, dword ptr ds : [esi+8]
        fld dword ptr ds : [eax+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        sub esp, 8
        fld dword ptr ds : [eax+4]
        sub esp, 8
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63f3500 @0x6379974*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3500
        call edi
        mov esi, dword ptr ds : [esi]
        add esp, 0x1C
        test esi, esi
        jne public_6379956
        public_6379984 : nop
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_634d260
        mov ecx, dword ptr ss : [esp+0x50]
        pop edi
        mov eax, offset public_63f34f0
        mov dword ptr fs : [0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6379460)
    }
}

#undef public_63794c3
#undef public_63794c7
#undef public_63794d7
#undef public_63794f4
#undef public_6379509
#undef public_637952f
#undef public_637954d
#undef public_637958d
#undef public_63795aa
#undef public_63795ac
#undef public_63795cc
#undef public_63795eb
#undef public_63795ed
#undef public_63795f8
#undef public_6379619
#undef public_6379636
#undef public_637963c
#undef public_6379647
#undef public_6379672
#undef public_637967a
#undef public_637968e
#undef public_6379697
#undef public_63796af
#undef public_63796df
#undef public_6379710
#undef public_6379712
#undef public_6379721
#undef public_6379744
#undef public_6379749
#undef public_6379755
#undef public_637977a
#undef public_6379785
#undef public_63797a9
#undef public_63797ae
#undef public_63797ba
#undef public_63797d2
#undef public_63797f8
#undef public_63797fd
#undef public_6379809
#undef public_637981a
#undef public_637982a
#undef public_6379838
#undef public_6379859
#undef public_637985b
#undef public_637986a
#undef public_6379877
#undef public_63798a0
#undef public_63798a2
#undef public_63798b1
#undef public_63798be
#undef public_63798e5
#undef public_63798fd
#undef public_6379906
#undef public_6379920
#undef public_6379923
#undef public_6379949
#undef public_6379956
#undef public_6379984
