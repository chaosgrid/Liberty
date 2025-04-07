#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_63182a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639694a);

#define public_6318304 _public_6318304
#define public_631830c _public_631830c
#define public_6318312 _public_6318312
#define public_6318331 _public_6318331
#define public_6318349 _public_6318349
#define public_6318393 _public_6318393
#define public_631839b _public_631839b
#define public_63183a1 _public_63183a1
#define public_63183c0 _public_63183c0
#define public_63183d8 _public_63183d8

PROC_DECLARE(0x63182a0, internal_63182a0, public_63182a0);
extern "C" NAKED register_t __cdecl internal_63182a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639694a @0x63182a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639694a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov dl, byte ptr ds : [edi+4]
        lea eax, ds:[edi+4]
        lea ecx, ds:[esi+4]
        xor ebx, ebx
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebx
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [edi+0x14]
        mov byte ptr ds : [esi+0x14], al
        mov ecx, dword ptr ds : [edi+0x18]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6318304
        xor eax, eax
        jmp public_631830c
        public_6318304 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        sub eax, ecx
        sar eax, 4
        public_631830c : nop
        cmp eax, ebx
        jge public_6318312
        xor eax, eax
        public_6318312 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        mov ebp, dword ptr ds : [edi+0x18]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ebx, eax
        je public_6318349
        public_6318331 : nop
        push ebp
        push ebx
        call public_62baf00
        mov eax, dword ptr ss : [esp+0x2C]
        add ebp, 0x10
        add esp, 8
        add ebx, 0x10
        cmp ebp, eax
        jne public_6318331
        public_6318349 : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov cl, byte ptr ds : [edi+0x24]
        lea ebp, ds:[edi+0x24]
        lea ebx, ds:[esi+0x24]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 1
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        mov cl, byte ptr ds : [edi+0x34]
        mov byte ptr ds : [esi+0x34], cl
        mov ecx, dword ptr ds : [edi+0x38]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1C], 2
        jne public_6318393
        xor eax, eax
        jmp public_631839b
        public_6318393 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        sub eax, ecx
        sar eax, 4
        public_631839b : nop
        test eax, eax
        jge public_63183a1
        xor eax, eax
        public_63183a1 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov dword ptr ds : [esi+0x38], eax
        mov ecx, dword ptr ds : [edi+0x3C]
        mov ebp, dword ptr ds : [edi+0x38]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ebx, eax
        je public_63183d8
        public_63183c0 : nop
        push ebp
        push ebx
        call public_62baf00
        mov eax, dword ptr ss : [esp+0x2C]
        add ebp, 0x10
        add esp, 8
        add ebx, 0x10
        cmp ebp, eax
        jne public_63183c0
        public_63183d8 : nop
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dl, byte ptr ds : [edi+0x44]
        lea ebp, ds:[edi+0x44]
        lea ebx, ds:[esi+0x44]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 3
        mov byte ptr ds : [ebx], dl
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        mov dl, byte ptr ds : [edi+0x54]
        add edi, 0x54
        lea ecx, ds:[esi+0x54]
        xor eax, eax
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push eax
        push edi
        mov byte ptr ss : [esp+0x28], 4
        call dword ptr ds : [public_63991a8]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63182a0)
    }
}

#undef public_6318304
#undef public_631830c
#undef public_6318312
#undef public_6318331
#undef public_6318349
#undef public_6318393
#undef public_631839b
#undef public_63183a1
#undef public_63183c0
#undef public_63183d8
