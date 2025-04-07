#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d5e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63d70);

#define public_6d5d7e7 _public_6d5d7e7
#define public_6d5d820 _public_6d5d820
#define public_6d5d895 _public_6d5d895
#define public_6d5d8a0 _public_6d5d8a0
#define public_6d5d8d8 _public_6d5d8d8
#define public_6d5d8e1 _public_6d5d8e1
#define public_6d5d8e7 _public_6d5d8e7
#define public_6d5d930 _public_6d5d930
#define public_6d5d935 _public_6d5d935
#define public_6d5d97a _public_6d5d97a
#define public_6d5d991 _public_6d5d991
#define public_6d5d9b9 _public_6d5d9b9
#define public_6d5d9e5 _public_6d5d9e5
#define public_6d5da58 _public_6d5da58
#define public_6d5da7f _public_6d5da7f
#define public_6d5da85 _public_6d5da85
#define public_6d5daca _public_6d5daca
#define public_6d5dacf _public_6d5dacf
#define public_6d5db12 _public_6d5db12
#define public_6d5db1f _public_6d5db1f
#define public_6d5db20 _public_6d5db20

PROC_DECLARE(0x6d5d7a0, internal_6d5d7a0, public_6d5d7a0);
extern "C" NAKED register_t __cdecl internal_6d5d7a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63d70 @0x6d5d7a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63d70
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push esi
        push edi
        push eax
        call public_6d00670
        mov edi, eax
        xor esi, esi
        add esp, 4
        cmp edi, esi
        jne public_6d5d7e7
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 
        public_6d5d7e7 : nop
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], esi
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xB0]
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        call public_6d00670
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x74], ebx
        call public_6d5e1e0
        test al, al
        jne public_6d5d820
        cmp ebx, dword ptr ss : [esp+0x70]
        je public_6d5db20
        public_6d5d820 : nop
        push ebp
        call public_6d5e1e0
        test al, al
        jne public_6d5d991
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, esi
        je public_6d5d9b9
        mov dl, byte ptr ss : [esp+0x74]
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x6C], esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [ecx]
        mov ebp, eax
        push 0x10
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+0x14C]
        cmp ebp, esi
        je public_6d5d895
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6cecbd0
        public_6d5d895 : nop
        test ebp, ebp
        jle public_6d5d8e1
        lea esp, ss:[esp]
        public_6d5d8a0 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp ebx, eax
        je public_6d5d8d8
        mov ecx, dword ptr ss : [esp+esi*4+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6cecbd0
        public_6d5d8d8 : nop
        inc esi
        cmp esi, ebp
        jl public_6d5d8a0
        mov ebx, dword ptr ss : [esp+0x78]
        public_6d5d8e1 : nop
        xor esi, esi
        test ebp, ebp
        jle public_6d5d935
        public_6d5d8e7 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_6d5d930
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d5d930
        mov cl, byte ptr ds : [eax+0x2BD]
        test cl, cl
        je public_6d5d930
        mov eax, dword ptr ds : [eax+0xB4]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea ebx, ss:[esp+0x14]
        push ebx
        push eax
        call dword ptr ds : [edx+0x1E0]
        mov ebx, dword ptr ss : [esp+0x78]
        public_6d5d930 : nop
        inc esi
        cmp esi, ebp
        jl public_6d5d8e7
        public_6d5d935 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6d5d97a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d5d97a
        mov cl, byte ptr ds : [eax+0x2BD]
        test cl, cl
        je public_6d5d97a
        mov eax, dword ptr ds : [eax+0xB4]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x14]
        push esi
        push eax
        call dword ptr ds : [edx+0x1E0]
        public_6d5d97a : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_6d5ffb0
        add esp, 4
        xor esi, esi
        public_6d5d991 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        cmp ecx, esi
        je public_6d5d9b9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp esi, eax
        je public_6d5d9b9
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [ecx+4]
        add ecx, 4
        push edi
        call dword ptr ds : [edx+0x1C]
        public_6d5d9b9 : nop
        mov eax, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor ebp, ebp
        cmp ebx, ebp
        je public_6d5d9e5
        cmp ebx, edi
        je public_6d5d9e5
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[ebx+4]
        push edi
        call dword ptr ds : [edx+0x18]
        public_6d5d9e5 : nop
        call public_6d5e1e0
        test al, al
        jne public_6d5db1f
        cmp ebx, ebp
        je public_6d5db1f
        mov al, byte ptr ss : [esp+0x74]
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [esp+0x6C], 1
        call dword ptr ds : [edx+0x20]
        push 0x10
        lea ecx, ss:[esp+0x28]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x14C]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[esp+0x78]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6cecbd0
        xor esi, esi
        cmp edi, ebp
        jle public_6d5da7f
        public_6d5da58 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        lea eax, ss:[esp+0x7C]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6cecbd0
        inc esi
        cmp esi, edi
        jl public_6d5da58
        public_6d5da7f : nop
        xor esi, esi
        cmp edi, ebp
        jle public_6d5dacf
        public_6d5da85 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_6d5daca
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d5daca
        mov cl, byte ptr ds : [eax+0x2BD]
        test cl, cl
        je public_6d5daca
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [eax+0xB4]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ss:[esp+0x14]
        push ebp
        push eax
        call dword ptr ds : [edx+0x1E0]
        public_6d5daca : nop
        inc esi
        cmp esi, edi
        jl public_6d5da85
        public_6d5dacf : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_6d5db12
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d5db12
        mov cl, byte ptr ds : [eax+0x2BD]
        test cl, cl
        je public_6d5db12
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [eax+0xB4]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x14]
        push esi
        push eax
        call dword ptr ds : [edx+0x1E0]
        public_6d5db12 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_6d5ffb0
        add esp, 4
        public_6d5db1f : nop
        pop ebp
        public_6d5db20 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6d5d7a0)
    }
}

#undef public_6d5d7e7
#undef public_6d5d820
#undef public_6d5d895
#undef public_6d5d8a0
#undef public_6d5d8d8
#undef public_6d5d8e1
#undef public_6d5d8e7
#undef public_6d5d930
#undef public_6d5d935
#undef public_6d5d97a
#undef public_6d5d991
#undef public_6d5d9b9
#undef public_6d5d9e5
#undef public_6d5da58
#undef public_6d5da7f
#undef public_6d5da85
#undef public_6d5daca
#undef public_6d5dacf
#undef public_6d5db12
#undef public_6d5db1f
#undef public_6d5db20
