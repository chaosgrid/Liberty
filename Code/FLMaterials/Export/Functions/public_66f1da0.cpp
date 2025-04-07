#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f14c0);
CLANG_FORWARD_PROC_SYMBOL(public_6700690);
CLANG_FORWARD_PROC_SYMBOL(public_67006b0);
CLANG_FORWARD_PROC_SYMBOL(public_67008b0);

#define public_66f1dc5 _public_66f1dc5
#define public_66f1e6f _public_66f1e6f
#define public_66f1e7d _public_66f1e7d
#define public_66f1e92 _public_66f1e92
#define public_66f1ea3 _public_66f1ea3
#define public_66f1eea _public_66f1eea
#define public_66f1f0b _public_66f1f0b
#define public_66f1f22 _public_66f1f22
#define public_66f1f24 _public_66f1f24
#define public_66f1f88 _public_66f1f88
#define public_66f1f98 _public_66f1f98
#define public_66f1fb0 _public_66f1fb0
#define public_66f1fb5 _public_66f1fb5

PROC_DECLARE(0x66f1da0, internal_66f1da0, public_66f1da0);
extern "C" NAKED register_t __cdecl internal_66f1da0()
{
    __asm
    {
        mov eax, 0x2024
        call public_67008b0
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        xor eax, eax
        cmp ecx, eax
        push esi
        mov dword ptr ss : [esp+0x14], eax
        jbe public_66f1f0b
        push ebp
        push edi
        mov dword ptr ss : [esp+0x18], eax
        public_66f1dc5 : nop
        mov esi, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [ebx+8]
        add esi, edx
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[esi+4]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[esi+8]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x28], 1
        je public_66f1e92
        push eax
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_6701004]
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jl public_66f1e7d
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        cmp ecx, 1
        push edi
        sete cl
        push eax
        mov byte ptr ds : [esi+0x28], cl
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0x34]
        test eax, eax
        jl public_66f1e6f
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_66f1e6f
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push 0
        push eax
        push ebp
        call dword ptr ds : [ecx+0x70]
        public_66f1e6f : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push ebp
        call dword ptr ds : [ecx+0x38]
        jmp public_66f1e92
        public_66f1e7d : nop
        mov edi, dword ptr ds : [esi]
        mov esi, offset public_67013d4
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        sete byte ptr ss : [esp+0x13]
        public_66f1e92 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0xFFFFFFFF
        je public_66f1ea3
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [ecx+0x40]
        public_66f1ea3 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_66f1eea
        mov edx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [ebx+0x14]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_67013b4 @0x66f1ebe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013b4
        push eax
        call public_66f14c0
        push eax
        push 0x23F
/*FIXUP push offset public_670117c @0x66f1ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_670117c
        mov ecx, 0x100003
/*FIXUP push offset public_6701398 @0x66f1ed9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6701398
        push ecx
        mov ecx, dword ptr ds : [public_6701000]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_66f1eea : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        inc eax
        add edx, 0x2C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], edx
        jb public_66f1dc5
        pop edi
        pop ebp
        public_66f1f0b : nop
        fld dword ptr ds : [ebx+0x2C]
        fcomp dword ptr ds : [public_6701394]
        fnstsw ax
        test ah, 5
        jp public_66f1f22
        mov eax, 1
        jmp public_66f1f24
        public_66f1f22 : nop
        xor eax, eax
        public_66f1f24 : nop
        test al, al
        mov byte ptr ds : [ebx+0x64], al
        mov byte ptr ds : [ebx+0x65], 0
        jne public_66f1fb5
        push 0
        call public_6700690
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [edx+8]
        add esp, 4
        test ecx, ecx
        je public_66f1fb5
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0xC]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_66f1fb5
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_67006b0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ds : [ebx+0x65], cl
        jl public_66f1f88
        cmp eax, 0xE
        jle public_66f1f98
        public_66f1f88 : nop
        push eax
        call public_67006b0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_66f1fb0
        public_66f1f98 : nop
        mov al, byte ptr ds : [ebx+0x65]
        test al, al
        jne public_66f1fb0
        mov eax, 1
        pop esi
        mov byte ptr ds : [ebx+0x64], al
        pop ebx
        add esp, 0x2024
        ret 
        public_66f1fb0 : nop
        xor eax, eax
        mov byte ptr ds : [ebx+0x64], al
        public_66f1fb5 : nop
        pop esi
        pop ebx
        add esp, 0x2024
        ret 
        UNREACHABLE_TRAP(0x66f1da0)
    }
}

#undef public_66f1dc5
#undef public_66f1e6f
#undef public_66f1e7d
#undef public_66f1e92
#undef public_66f1ea3
#undef public_66f1eea
#undef public_66f1f0b
#undef public_66f1f22
#undef public_66f1f24
#undef public_66f1f88
#undef public_66f1f98
#undef public_66f1fb0
#undef public_66f1fb5
