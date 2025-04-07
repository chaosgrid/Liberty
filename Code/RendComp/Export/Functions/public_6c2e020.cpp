#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e020);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e290);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

#define public_6c2e060 _public_6c2e060
#define public_6c2e08c _public_6c2e08c
#define public_6c2e093 _public_6c2e093
#define public_6c2e09b _public_6c2e09b
#define public_6c2e0af _public_6c2e0af
#define public_6c2e170 _public_6c2e170
#define public_6c2e177 _public_6c2e177
#define public_6c2e180 _public_6c2e180
#define public_6c2e197 _public_6c2e197
#define public_6c2e1a2 _public_6c2e1a2
#define public_6c2e1d0 _public_6c2e1d0
#define public_6c2e1e2 _public_6c2e1e2
#define public_6c2e1e9 _public_6c2e1e9
#define public_6c2e20a _public_6c2e20a
#define public_6c2e21b _public_6c2e21b
#define public_6c2e22a _public_6c2e22a
#define public_6c2e235 _public_6c2e235
#define public_6c2e240 _public_6c2e240
#define public_6c2e247 _public_6c2e247
#define public_6c2e275 _public_6c2e275
#define public_6c2e277 _public_6c2e277

PROC_DECLARE(0x6c2e020, internal_6c2e020, public_6c2e020);
extern "C" NAKED register_t __cdecl internal_6c2e020()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0x34]
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        movzx edi, word ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x18]
        xor bl, bl
        xor esi, esi
        push ecx
        mov byte ptr ss : [esp+0x17], bl
        mov dword ptr ss : [esp+0x1C], esi
        call public_6c2e2f0
        add esp, 4
        cmp eax, esi
        jle public_6c2e275
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 4
        lea ebx, ds:[ebx]
        public_6c2e060 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [edx-4]
        jne public_6c2e09b
        mov ecx, dword ptr ds : [edx]
        test ch, 0xF
        je public_6c2e08c
        mov ecx, edi
        and ecx, 0xF00
        je public_6c2e093
        shr ecx, 8
        lea ebp, ds:[ebx-2]
        cmp ecx, ebp
        sbb cl, cl
        inc cl
        mov byte ptr ss : [esp+0x13], cl
        jmp public_6c2e093
        public_6c2e08c : nop
        test edi, ecx
        setne byte ptr ss : [esp+0x13]
        public_6c2e093 : nop
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        jne public_6c2e0af
        public_6c2e09b : nop
        inc esi
        add edx, 0xC
        cmp esi, eax
        jl public_6c2e060
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6c2e277
        public_6c2e0af : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x34]
        movzx ecx, word ptr ds : [eax+8]
        movzx edx, word ptr ds : [eax+0xA]
        movzx edi, word ptr ds : [eax+0xC]
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ds:[edx+ecx*2]
        lea edx, ds:[eax+ecx*2+0x10]
        push ebx
        push edi
        mov dword ptr ss : [esp+0x20], edx
        xor ebp, ebp
        call public_6c2e3f0
        add esp, 8
        test al, al
        je public_6c2e1a2
        mov cl, byte ptr ds : [public_6c37d70]
        mov eax, 1
        test al, cl
        jne public_6c2e170
        push 0xC
        or cl, al
        push 0xE
        mov byte ptr ds : [public_6c37d70], cl
        push eax
        mov ecx, offset public_6c37ce0
        call public_6c25cc0
        push 0x30
        push 0xC
        push 0x800
        mov ecx, offset public_6c37cec
        call public_6c25cc0
        push 0xC
        push 0x10
        push 8
        mov ecx, offset public_6c37cf8
        call public_6c25cc0
        push 8
        push 0x100
        push 2
        mov ecx, offset public_6c37d04
        call public_6c25cc0
        push 8
        push 0x200
        push 4
        mov ecx, offset public_6c37d10
        call public_6c25cc0
        push 4
        push 0x40
        push 0x10
        mov ecx, offset public_6c37d1c
        call public_6c25cc0
/*FIXUP push offset _public_6c2e3e0 @0x6c2e163*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c2e3e0
        call public_6c34f34
        add esp, 4
        public_6c2e170 : nop
        mov esi, offset public_6c37ce0
        jmp public_6c2e180
        public_6c2e177 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        nop 
        lea esp, ss:[esp]
        public_6c2e180 : nop
        mov eax, dword ptr ds : [esi]
        cmp ebx, eax
        je public_6c2e1a2
        push eax
        push edi
        call public_6c2e3f0
        add esp, 8
        test al, al
        je public_6c2e197
        add ebp, dword ptr ds : [esi+8]
        public_6c2e197 : nop
        add esi, 0xC
        cmp esi, offset public_6c37d28
        jl public_6c2e177
        public_6c2e1a2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x24]
        add ebp, eax
        xor esi, esi
        push ecx
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ss : [esp+0x28], esi
        call public_6c2e2f0
        add esp, 4
        xor ecx, ecx
        test eax, eax
        jle public_6c2e1e9
        mov edi, dword ptr ss : [esp+0x24]
        mov edx, edi
        lea ecx, ds:[ecx]
        public_6c2e1d0 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp ebp, dword ptr ds : [edx]
        je public_6c2e1e2
        inc ecx
        add edx, 0xC
        cmp ecx, eax
        jl public_6c2e1d0
        jmp public_6c2e1e9
        public_6c2e1e2 : nop
        lea edx, ds:[ecx+ecx*2]
        mov esi, dword ptr ds : [edi+edx*4+8]
        public_6c2e1e9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+4], esi
        mov ecx, dword ptr ds : [eax+0x34]
        movzx eax, word ptr ds : [ecx+0xC]
        mov edx, eax
        and edx, 0xC
        xor edi, edi
        cmp dl, 0xC
        jne public_6c2e20a
        mov edi, 0x1C
        jmp public_6c2e22a
        public_6c2e20a : nop
        mov ecx, eax
        and ecx, 4
        cmp cl, 4
        jne public_6c2e21b
        mov edi, 0x10
        jmp public_6c2e22a
        public_6c2e21b : nop
        mov edx, eax
        and edx, 2
        cmp dl, 2
        jne public_6c2e22a
        mov edi, 0xC
        public_6c2e22a : nop
        xor ebp, ebp
        test al, 0x10
        je public_6c2e235
        mov ebp, 0xC
        public_6c2e235 : nop
        xor esi, esi
        test al, 0x40
        je public_6c2e240
        mov esi, 4
        public_6c2e240 : nop
        test al, al
        jns public_6c2e247
        add esi, 4
        public_6c2e247 : nop
        push eax
        call public_6c2e290
        add eax, esi
        add esp, 4
        add eax, ebp
        add eax, edi
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x34]
        movzx edx, word ptr ds : [ecx+0xE]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], edx
        pop ebx
        add esp, 0xC
        ret 8
        public_6c2e275 : nop
        mov al, bl
        public_6c2e277 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6c2e020)
    }
}

#undef public_6c2e060
#undef public_6c2e08c
#undef public_6c2e093
#undef public_6c2e09b
#undef public_6c2e0af
#undef public_6c2e170
#undef public_6c2e177
#undef public_6c2e180
#undef public_6c2e197
#undef public_6c2e1a2
#undef public_6c2e1d0
#undef public_6c2e1e2
#undef public_6c2e1e9
#undef public_6c2e20a
#undef public_6c2e21b
#undef public_6c2e22a
#undef public_6c2e235
#undef public_6c2e240
#undef public_6c2e247
#undef public_6c2e275
#undef public_6c2e277
