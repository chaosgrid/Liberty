#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bed40);
CLANG_FORWARD_PROC_SYMBOL(public_4bee70);
CLANG_FORWARD_PROC_SYMBOL(public_4bef00);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c38b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);

#define public_4bf878 _public_4bf878
#define public_4bf883 _public_4bf883
#define public_4bf88e _public_4bf88e
#define public_4bf892 _public_4bf892
#define public_4bf919 _public_4bf919
#define public_4bf927 _public_4bf927
#define public_4bf9ae _public_4bf9ae
#define public_4bf9c2 _public_4bf9c2
#define public_4bf9d0 _public_4bf9d0
#define public_4bfa27 _public_4bfa27
#define public_4bfa50 _public_4bfa50
#define public_4bfa55 _public_4bfa55
#define public_4bfa6b _public_4bfa6b
#define public_4bfa72 _public_4bfa72
#define public_4bfa9f _public_4bfa9f
#define public_4bfaa6 _public_4bfaa6
#define public_4bfb16 _public_4bfb16
#define public_4bfb29 _public_4bfb29
#define public_4bfb3b _public_4bfb3b
#define public_4bfb4c _public_4bfb4c

PROC_DECLARE(0x4bf850, internal_4bf850, public_4bf850);
extern "C" NAKED register_t __cdecl internal_4bf850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        jge public_4bfa27
        mov eax, dword ptr ss : [ebp+0x24]
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x2C]
        test eax, eax
        mov esi, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x14], ebx
        jle public_4bf883
        public_4bf878 : nop
        dec eax
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x14], ecx
        mov ebx, ecx
        jne public_4bf878
        public_4bf883 : nop
        cmp esi, dword ptr ss : [ebp+0x18]
        je public_4bfb4c
        jmp public_4bf892
        public_4bf88e : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_4bf892 : nop
        cmp ebx, dword ptr ss : [ebp+0x24]
        je public_4bf9c2
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ebx+8]
        push edx
        call public_4bef00
        mov al, byte ptr ss : [ebp+0x5D]
        test al, al
        je public_4bf927
        mov edi, dword ptr ds : [esi]
        mov ecx, edi
        call public_4bed40
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [edi+0x24]
        test eax, eax
        je public_4bf919
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_4bf919
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        public_4bf919 : nop
        push 1
        mov ecx, edi
        call public_4bee70
        jmp public_4bf9ae
        public_4bf927 : nop
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [edi+0x331]
        mov cl, byte ptr ss : [ebp+0x5E]
        mov bl, dl
        mov byte ptr ss : [esp+0x1C], cl
        shl cl, 2
        xor bl, cl
        and bl, 4
        xor bl, dl
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [edi+0x331], bl
        mov edi, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edi+0x331]
        mov byte ptr ss : [esp+0x1C], bl
        shl dl, 3
        mov bl, dl
        mov byte ptr ss : [esp+0x13], dl
        mov dl, byte ptr ss : [esp+0x1C]
        xor bl, dl
        and bl, 8
        xor bl, dl
        mov byte ptr ds : [edi+0x331], bl
        mov edi, dword ptr ds : [eax+0xC]
        mov dl, byte ptr ds : [edi+0x331]
        mov bl, dl
        xor bl, cl
        and bl, 4
        xor bl, dl
        mov byte ptr ds : [edi+0x331], bl
        mov eax, dword ptr ds : [eax+0xC]
        mov cl, byte ptr ds : [eax+0x331]
        mov bl, byte ptr ss : [esp+0x13]
        mov dl, cl
        xor dl, bl
        mov ebx, dword ptr ss : [esp+0x14]
        and dl, 8
        xor dl, cl
        mov byte ptr ds : [eax+0x331], dl
        public_4bf9ae : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x18]
        add esi, 4
        cmp esi, eax
        jne public_4bf88e
        public_4bf9c2 : nop
        cmp esi, dword ptr ss : [ebp+0x18]
        je public_4bfb4c
        nop 
        lea esp, ss:[esp]
        public_4bf9d0 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_5d6068 @0x4bf9d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6068
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, edi
        mov byte ptr ds : [edi+0x28], 0
        call public_4bed40
        mov eax, dword ptr ss : [ebp+0x18]
        add esi, 4
        cmp esi, eax
        jne public_4bf9d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_4bfa27 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov ebx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0x30]
        mov edi, eax
        sub edi, edx
        cmp edi, ecx
        jge public_4bfb4c
        test edi, edi
        jl public_4bfb4c
        test eax, eax
        jle public_4bfa55
        lea ebx, ds:[ebx]
        public_4bfa50 : nop
        dec eax
        mov ebx, dword ptr ds : [ebx]
        jne public_4bfa50
        public_4bfa55 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        lea esi, ss:[ebp+0x10]
        je public_4bfa6b
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        ja public_4bfa72
        public_4bfa6b : nop
        mov ecx, esi
        call public_4c38b0
        public_4bfa72 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+edi*4]
        add ebx, 8
        push ebx
        call public_4bef00
        mov al, byte ptr ss : [ebp+0x5D]
        test al, al
        je public_4bfb29
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_4bfa9f
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        ja public_4bfaa6
        public_4bfa9f : nop
        mov ecx, esi
        call public_4c38b0
        public_4bfaa6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [eax+edi*4]
        mov ecx, esi
        call public_4bed40
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_4bfb16
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_4bfb16
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        public_4bfb16 : nop
        push 1
        mov ecx, esi
        call public_4bee70
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_4bfb29 : nop
        mov ecx, esi
        call public_5ad970
        cmp eax, edi
        ja public_4bfb3b
        mov ecx, esi
        call public_4c38b0
        public_4bfb3b : nop
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+edi*4]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x5E]
        push eax
        call public_4bee70
        public_4bfb4c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4bf850)
    }
}

#undef public_4bf878
#undef public_4bf883
#undef public_4bf88e
#undef public_4bf892
#undef public_4bf919
#undef public_4bf927
#undef public_4bf9ae
#undef public_4bf9c2
#undef public_4bf9d0
#undef public_4bfa27
#undef public_4bfa50
#undef public_4bfa55
#undef public_4bfa6b
#undef public_4bfa72
#undef public_4bfa9f
#undef public_4bfaa6
#undef public_4bfb16
#undef public_4bfb29
#undef public_4bfb3b
#undef public_4bfb4c
