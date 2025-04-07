#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6360);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6790);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6970);

#define public_6ef6396 _public_6ef6396
#define public_6ef639a _public_6ef639a
#define public_6ef639f _public_6ef639f
#define public_6ef63b9 _public_6ef63b9
#define public_6ef63c7 _public_6ef63c7
#define public_6ef63e0 _public_6ef63e0
#define public_6ef6402 _public_6ef6402
#define public_6ef6404 _public_6ef6404
#define public_6ef641c _public_6ef641c
#define public_6ef6439 _public_6ef6439
#define public_6ef6487 _public_6ef6487
#define public_6ef64a5 _public_6ef64a5
#define public_6ef64d5 _public_6ef64d5
#define public_6ef64f3 _public_6ef64f3
#define public_6ef650e _public_6ef650e
#define public_6ef6529 _public_6ef6529
#define public_6ef6544 _public_6ef6544
#define public_6ef655f _public_6ef655f
#define public_6ef6578 _public_6ef6578
#define public_6ef658c _public_6ef658c

PROC_DECLARE(0x6ef6360, internal_6ef6360, public_6ef6360);
extern "C" NAKED register_t __cdecl internal_6ef6360()
{
    __asm
    {
        sub esp, 0x3C
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x48]
        lea esi, ss:[ebp+0x44]
        push edi
        push eax
        push ecx
        mov ecx, esi
        call public_6ef6970
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov byte ptr ss : [esp+0xF], 0
        je public_6ef6396
        mov edx, dword ptr ds : [esi+8]
        mov ecx, edx
        sub ecx, eax
        cmp ecx, 9
        jae public_6ef63b9
        test eax, eax
        jne public_6ef639a
        public_6ef6396 : nop
        xor ecx, ecx
        jmp public_6ef639f
        public_6ef639a : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        public_6ef639f : nop
        lea edx, ss:[esp+0xF]
        push edx
        mov eax, 9
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ef6790
        jmp public_6ef63c7
        public_6ef63b9 : nop
        jbe public_6ef63c7
        push edx
        add eax, 9
        push eax
        mov ecx, esi
        call public_6ef6970
        public_6ef63c7 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        xor edi, edi
        push edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ef658c
        push ebx
        lea ecx, ds:[ecx]
        public_6ef63e0 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov eax, edi
        inc edi
        push eax
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp byte ptr ds : [esi], 0x2D
        jne public_6ef6402
        xor bl, bl
        inc esi
        test esi, esi
        je public_6ef6439
        jmp public_6ef6404
        public_6ef6402 : nop
        mov bl, 1
        public_6ef6404 : nop
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x32
        jb public_6ef641c
        mov eax, 0x31
        public_6ef641c : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+eax+0x18], 0
        public_6ef6439 : nop
        mov esi, dword ptr ds : [public_6fb3294]
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fb5ca0 @0x6ef6443*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef6487
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+1], bl
        mov edx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [edx+2], bl
        mov eax, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [eax+5], bl
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+3], bl
        mov edx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [edx+4], bl
        mov eax, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [eax+6], bl
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+7], bl
        mov edx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [edx+8], bl
        jmp public_6ef6578
        public_6ef6487 : nop
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fb7a54 @0x6ef648b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a54
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef64a5
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+1], bl
        jmp public_6ef6578
        public_6ef64a5 : nop
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6fb7a48 @0x6ef64a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a48
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef64d5
        mov eax, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [eax+5], bl
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+3], bl
        mov edx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [edx+4], bl
        mov eax, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [eax+6], bl
        jmp public_6ef6578
        public_6ef64d5 : nop
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_6fb7a34 @0x6ef64d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a34
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef64f3
        mov edx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [edx+3], bl
        jmp public_6ef6578
        public_6ef64f3 : nop
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fb7a24 @0x6ef64f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a24
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef650e
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+6], bl
        jmp public_6ef6578
        public_6ef650e : nop
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6fb7a10 @0x6ef6512*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a10
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef6529
        mov eax, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [eax+4], bl
        jmp public_6ef6578
        public_6ef6529 : nop
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_6fb7a00 @0x6ef652d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a00
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef6544
        mov edx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [edx+5], bl
        jmp public_6ef6578
        public_6ef6544 : nop
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fb79f8 @0x6ef6548*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79f8
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef655f
        mov ecx, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [ecx+7], bl
        jmp public_6ef6578
        public_6ef655f : nop
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6fb79f0 @0x6ef6563*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb79f0
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_6ef6578
        mov eax, dword ptr ss : [ebp+0x48]
        mov byte ptr ds : [eax+8], bl
        public_6ef6578 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        push edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ef63e0
        pop ebx
        public_6ef658c : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6ef6360)
    }
}

#undef public_6ef6396
#undef public_6ef639a
#undef public_6ef639f
#undef public_6ef63b9
#undef public_6ef63c7
#undef public_6ef63e0
#undef public_6ef6402
#undef public_6ef6404
#undef public_6ef641c
#undef public_6ef6439
#undef public_6ef6487
#undef public_6ef64a5
#undef public_6ef64d5
#undef public_6ef64f3
#undef public_6ef650e
#undef public_6ef6529
#undef public_6ef6544
#undef public_6ef655f
#undef public_6ef6578
#undef public_6ef658c
