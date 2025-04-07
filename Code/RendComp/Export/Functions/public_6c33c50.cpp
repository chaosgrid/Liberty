#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c24980);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31f30);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c32000);
CLANG_FORWARD_PROC_SYMBOL(public_6c32020);
CLANG_FORWARD_PROC_SYMBOL(public_6c33c50);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c33cf6 _public_6c33cf6
#define public_6c33d15 _public_6c33d15
#define public_6c33d33 _public_6c33d33
#define public_6c33dae _public_6c33dae
#define public_6c33dbf _public_6c33dbf
#define public_6c33dce _public_6c33dce
#define public_6c33dd9 _public_6c33dd9
#define public_6c33dfc _public_6c33dfc
#define public_6c33e60 _public_6c33e60
#define public_6c33ed6 _public_6c33ed6
#define public_6c33f00 _public_6c33f00
#define public_6c33f2a _public_6c33f2a
#define public_6c33f59 _public_6c33f59
#define public_6c33f67 _public_6c33f67
#define public_6c33f76 _public_6c33f76
#define public_6c33f80 _public_6c33f80
#define public_6c33f97 _public_6c33f97
#define public_6c33fb6 _public_6c33fb6
#define public_6c33fc4 _public_6c33fc4

PROC_DECLARE(0x6c33c50, internal_6c33c50, public_6c33c50);
extern "C" NAKED register_t __cdecl internal_6c33c50()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        xor eax, eax
        mov dword ptr ss : [esp+0x70], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x74]
        rep stosd
        lea eax, ss:[esp+0xA4]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        xor esi, esi
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x84], 0x80000000
        mov dword ptr ss : [esp+0x88], 1
        mov dword ptr ss : [esp+0x90], 3
        mov dword ptr ss : [esp+0x94], 0x8000080
        mov dword ptr ss : [esp+0x80], offset public_6c37c64
        mov dword ptr ss : [esp+0x74], 0x34
        mov dword ptr ss : [esp+0xA4], 0xFFFFFFFF
        call public_6c2a270
        mov eax, dword ptr ds : [ebx+0xC]
        mov ebp, dword ptr ss : [esp+0x30]
        cmp ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        je public_6c33d15
        add ebp, 0x10
        cmp eax, esi
        je public_6c33cf6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], esi
        public_6c33cf6 : nop
        mov eax, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_6c33d33
        mov eax, dword ptr ss : [esp+0x10]
        public_6c33d15 : nop
        cmp eax, esi
        je public_6c33fc4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x90
        ret 8
/*FIXUP public_6c33d33 : nop
        push offset public_6c37310 @0x6c33d33*/
  FIXUP public_6c33d33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
        mov dword ptr ss : [esp+0x30], esi
        mov esi, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_6c37c5c @0x6c33d40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37c5c
        lea ecx, ss:[esp+0x40]
        call public_6c24980
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x38]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_6c33dce
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        push esi
        call dword ptr ds : [edx+0x28]
        mov edi, eax
        mov dword ptr ss : [esp+0x28], eax
        shr edi, 2
        lea eax, ds:[edi*4]
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6c33dae
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_6c33dbf
        public_6c33dae : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6c34ea0
        mov edi, dword ptr ss : [esp+0x30]
        add esp, 4
        public_6c33dbf : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x10]
        test edi, edi
        ja public_6c33dd9
        public_6c33dce : nop
        push 1
        mov ecx, ebp
        call public_6c31f30
        jmp public_6c33dfc
        public_6c33dd9 : nop
        lea edx, ds:[edi-1]
        push edx
        mov ecx, ebp
        call public_6c31f30
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+0x10]
        push eax
        rep movsd
        call public_6c34ea0
        add esp, 4
        public_6c33dfc : nop
        mov ebx, dword ptr ds : [ebx+0x20]
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x28], ecx
        mov al, 0x65
        mov byte ptr ss : [esp+0x21], al
        mov byte ptr ss : [esp+0x23], al
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov byte ptr ss : [esp+0x20], 0x4C
        mov byte ptr ss : [esp+0x22], 0x76
        mov byte ptr ss : [esp+0x24], 0x6C
        mov byte ptr ss : [esp+0x25], 0
        mov byte ptr ss : [esp+0x26], 0
        mov byte ptr ss : [esp+0x27], 0
        lea edi, ss:[esp+0x20]
        repne scasb
        not ecx
        dec ecx
        lea edx, ss:[esp+ecx+0x20]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x2C], edx
        call public_6c2f7d0
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jle public_6c33f59
        public_6c33e60 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push 0xA
        push eax
        push esi
        call dword ptr ds : [public_6c36068]
        xor eax, eax
        mov ecx, 0xB
        lea edi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x48], offset public_6c37310
        rep stosd
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        xor bl, bl
        test eax, eax
        mov dword ptr ss : [esp+0x48], 0x80000000
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x54], 3
        mov dword ptr ss : [esp+0x58], 0x8000080
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x38], 0x34
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        je public_6c33ed6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], 0
        public_6c33ed6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6c33f76
        mov edi, dword ptr ss : [esp+0x28]
        cmp edi, dword ptr ss : [esp+0x1C]
        je public_6c33f76
        lea esp, ss:[esp]
        public_6c33f00 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        cmp eax, 0xFFFFFFFF
        je public_6c33f2a
        push eax
        push esi
        mov ecx, ebp
        call public_6c32020
        mov eax, dword ptr ds : [edi+8]
        push eax
        push esi
        mov ecx, ebp
        call public_6c32000
        mov bl, 1
        public_6c33f2a : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x1C]
        jne public_6c33f00
        test bl, bl
        je public_6c33f76
        mov eax, dword ptr ss : [esp+0x18]
        inc esi
        cmp esi, eax
        jl public_6c33e60
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6c33f59
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], 0
        public_6c33f59 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6c33f67
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6c33f67 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x90
        ret 8
        public_6c33f76 : nop
        dec esi
        js public_6c33f97
        lea esp, ss:[esp]
        public_6c33f80 : nop
        push esi
        mov ecx, ebp
        call public_6c31ff0
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x14]
        dec esi
        jns public_6c33f80
        public_6c33f97 : nop
        push 0
        mov ecx, ebp
        call public_6c31f30
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6c33fb6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], 0
        public_6c33fb6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6c33fc4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6c33fc4 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x90
        ret 8
        UNREACHABLE_TRAP(0x6c33c50)
    }
}

#undef public_6c33cf6
#undef public_6c33d15
#undef public_6c33d33
#undef public_6c33dae
#undef public_6c33dbf
#undef public_6c33dce
#undef public_6c33dd9
#undef public_6c33dfc
#undef public_6c33e60
#undef public_6c33ed6
#undef public_6c33f00
#undef public_6c33f2a
#undef public_6c33f59
#undef public_6c33f67
#undef public_6c33f76
#undef public_6c33f80
#undef public_6c33f97
#undef public_6c33fb6
#undef public_6c33fc4
