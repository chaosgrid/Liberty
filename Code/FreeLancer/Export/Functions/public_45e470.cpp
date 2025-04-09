#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e470);
CLANG_FORWARD_PROC_SYMBOL(public_46eab0);
CLANG_FORWARD_PROC_SYMBOL(public_46ebc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba388);

#define public_45e567 _public_45e567
#define public_45e591 _public_45e591
#define public_45e608 _public_45e608
#define public_45e64f _public_45e64f
#define public_45e772 _public_45e772
#define public_45e794 _public_45e794
#define public_45e798 _public_45e798
#define public_45e7b0 _public_45e7b0
#define public_45e7e0 _public_45e7e0

PROC_DECLARE(0x45e470, internal_45e470, public_45e470);
extern "C" NAKED register_t __cdecl internal_45e470()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba388 @0x45e478*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba388
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push ebp
        mov ebp, ecx
        fld dword ptr ss : [ebp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_45e7e0
        fld dword ptr ss : [ebp+0x24]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_45e7e0
        mov al, byte ptr ss : [ebp+0x15]
        xor ebx, ebx
        cmp al, bl
        je public_45e7e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push ebx
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 6
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5cee48
        mov eax, 1
        public_45e567 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_45e567
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5cee80
        mov eax, 1
        public_45e591 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_45e591
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xD
        push ebx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push ebx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [ebp+0x1C]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        test eax, eax
        jne public_45e608
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x108]
        public_45e608 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], 0x142
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], eax
        je public_45e64f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_45e64f : nop
        mov dword ptr ss : [esp+0x40], 0x80
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], bl
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov eax, dword ptr ds : [public_611578]
        mov dl, byte ptr ds : [public_61157a]
        mov byte ptr ss : [esp+0x54], al
        mov al, byte ptr ds : [public_61157b]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x68], ebx
        mov byte ptr ss : [esp+0x55], ah
        mov byte ptr ss : [esp+0x56], dl
        mov byte ptr ss : [esp+0x57], al
        call public_46ebc0
        fld dword ptr ss : [esp+0x78]
        fdiv dword ptr ss : [ebp+0x24]
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], 4
        mov byte ptr ss : [esp+0x58], bl
        mov byte ptr ss : [esp+0x59], 1
        mov dword ptr ss : [esp+0x64], 0
        fstp dword ptr ss : [esp+0x68]
        call public_46eab0
        fld dword ptr ss : [esp+0x78]
        fdiv dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ss : [esp+0x74]
        push ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x80]
        fdiv dword ptr ss : [ebp+0x20]
        fstp dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x68]
        call public_46eab0
        fld dword ptr ss : [esp+0x74]
        push ebx
        fdiv dword ptr ss : [ebp+0x20]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], 0
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x7C]
        fchs 
        fstp dword ptr ss : [esp+0x78]
        mov edi, dword ptr ss : [esp+0x78]
        push edi
        push esi
        call public_46eab0
        push ebx
        push edi
        push ebx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        call public_46eab0
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_45e794
        cmp byte ptr ss : [esp+0x4C], bl
        je public_45e772
        mov esi, dword ptr ss : [esp+0x28]
        lea ecx, ds:[eax+eax*2]
        lea edi, ds:[esi+ecx*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [esp+0x2C]
        inc eax
        mov dword ptr ss : [esp+0x2C], eax
        public_45e772 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, ebx
        je public_45e798
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        call dword ptr ds : [edx+0x114]
        public_45e794 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        public_45e798 : nop
        cmp ecx, ebx
        pop edi
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        pop esi
        je public_45e7b0
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x34], ebx
        public_45e7b0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov dword ptr ss : [esp+0x28], ebx
        call public_5b7e1d
        add esp, 8
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 0xC
        public_45e7e0 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 0xC
        UNREACHABLE_TRAP(0x45e470)
    }
}

#undef public_45e567
#undef public_45e591
#undef public_45e608
#undef public_45e64f
#undef public_45e772
#undef public_45e794
#undef public_45e798
#undef public_45e7b0
#undef public_45e7e0
