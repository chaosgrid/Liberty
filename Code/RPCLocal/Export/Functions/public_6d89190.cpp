#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d8c830);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2542);

#define public_6d89306 _public_6d89306
#define public_6d89322 _public_6d89322
#define public_6d8932d _public_6d8932d
#define public_6d89335 _public_6d89335
#define public_6d89370 _public_6d89370
#define public_6d8938c _public_6d8938c
#define public_6d89397 _public_6d89397
#define public_6d8939f _public_6d8939f
#define public_6d893e1 _public_6d893e1
#define public_6d893f3 _public_6d893f3

PROC_DECLARE(0x6d89190, internal_6d89190, public_6d89190);
extern "C" NAKED register_t __cdecl internal_6d89190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2542 @0x6d89192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2542
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push edi
        lea eax, ss:[esp+4]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 0x42
        push 2
        mov dword ptr ss : [esp+0x14], edi
        call public_6d96300
        test eax, eax
        jne public_6d893f3
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        push ecx
        push esi
        call public_6d8c830
        mov dl, byte ptr ds : [esi+0xAD]
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x9C], dl
        mov cl, byte ptr ds : [esi+0xA8]
        mov edx, dword ptr ss : [esp+0x10]
        add esp, 8
        mov byte ptr ds : [edx+0x9D], cl
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d893e1
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        xor ebx, ebx
        lea ecx, ds:[eax+0xB0]
        push ebx
        push ecx
        add eax, 0x2C
        push eax
        call dword ptr ds : [public_6db30ec]
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+0xB4]
        push edx
        add esi, 0xB0
        add eax, 0x2C
        push esi
        push eax
        call dword ptr ds : [public_6db30e8]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], bl
        mov byte ptr ss : [esp+0x51], bl
        mov byte ptr ss : [esp+0x52], bl
        mov byte ptr ss : [esp+0x53], bl
        mov byte ptr ss : [esp+0x54], bl
        mov byte ptr ss : [esp+0x55], bl
        mov byte ptr ss : [esp+0x56], bl
        mov byte ptr ss : [esp+0x57], bl
        mov byte ptr ss : [esp+0x58], bl
        mov byte ptr ss : [esp+0x59], bl
        mov byte ptr ss : [esp+0x5A], bl
        mov byte ptr ss : [esp+0x5B], bl
        mov byte ptr ss : [esp+0x5C], bl
        mov byte ptr ss : [esp+0x5D], bl
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        lea eax, ss:[esp+0x74]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        add eax, 0x2C
        push eax
        mov byte ptr ss : [esp+0x78], 1
        mov dword ptr ss : [esp+0x84], ebx
        call dword ptr ds : [public_6db30e4]
        mov esi, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 0x28
        cmp esi, ebx
        lea ebp, ds:[ecx+0xA0]
        mov edi, 6
        je public_6d89335
        public_6d89306 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d89322
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6d8932d
        public_6d89322 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d8932d : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6d89306
        public_6d89335 : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6db1f8a
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6db30dc]
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ebx
        mov edx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[edx+0xA8]
        mov edi, 6
        je public_6d8939f
        lea ebx, ds:[ebx]
        public_6d89370 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8938c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d89397
        public_6d8938c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d89397 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6d89370
        public_6d8939f : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6db1f8a
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6db30dc]
        mov esi, dword ptr ds : [public_6db3094]
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x50], bl
        call esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call esi
        mov edi, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        public_6d893e1 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        pop esi
        public_6d893f3 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6d89190)
    }
}

#undef public_6d89306
#undef public_6d89322
#undef public_6d8932d
#undef public_6d89335
#undef public_6d89370
#undef public_6d8938c
#undef public_6d89397
#undef public_6d8939f
#undef public_6d893e1
#undef public_6d893f3
