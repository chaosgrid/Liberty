#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6d48d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d536d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63106);

#define public_6d48ef9 _public_6d48ef9
#define public_6d48f26 _public_6d48f26
#define public_6d48f28 _public_6d48f28
#define public_6d48f5c _public_6d48f5c
#define public_6d48f6a _public_6d48f6a
#define public_6d48f7e _public_6d48f7e
#define public_6d49005 _public_6d49005
#define public_6d4903f _public_6d4903f
#define public_6d49056 _public_6d49056
#define public_6d490a8 _public_6d490a8
#define public_6d490d6 _public_6d490d6
#define public_6d4911e _public_6d4911e
#define public_6d49120 _public_6d49120
#define public_6d491a8 _public_6d491a8
#define public_6d491d8 _public_6d491d8
#define public_6d491da _public_6d491da
#define public_6d491fb _public_6d491fb
#define public_6d49207 _public_6d49207
#define public_6d49211 _public_6d49211

PROC_DECLARE(0x6d48e80, internal_6d48e80, public_6d48e80);
extern "C" NAKED register_t __cdecl internal_6d48e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63106 @0x6d48e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63106
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34C
        mov al, byte ptr ss : [esp+3]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        call public_6ce3b20
        mov ecx, dword ptr ss : [esp+0x36C]
        push ecx
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x2C]
        call public_6ce4520
        test al, al
        je public_6d48ef9
        mov edx, dword ptr ss : [esp+0x36C]
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        push edx
        push eax
        call public_6ce1960
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], esi
        add esp, 0xC
        mov word ptr ds : [ecx+esi*2], di
        public_6d48ef9 : nop
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6d902a4
        mov dword ptr ss : [esp+0x368], edi
        call public_6d583b0
        mov eax, dword ptr ds : [public_6d902a8]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6d48f26
        mov eax, dword ptr ds : [ecx+0x1C]
        jmp public_6d48f28
        public_6d48f26 : nop
        xor eax, eax
        public_6d48f28 : nop
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [ebp+0x400], eax
        mov dword ptr ss : [esp+0x364], 0xFFFFFFFF
        call public_6ce3b20
        mov eax, dword ptr ss : [ebp+0x400]
        cmp eax, edi
        je public_6d48f6a
        mov cl, byte ptr ds : [eax+0x30]
        test cl, cl
        je public_6d48f5c
        mov al, 7
        jmp public_6d49211
        public_6d48f5c : nop
        mov cl, byte ptr ds : [eax+0x31]
        test cl, cl
        jne public_6d48f6a
        xor al, al
        jmp public_6d49211
        public_6d48f6a : nop
        cmp eax, edi
        mov ecx, dword ptr ss : [esp+0x370]
        mov dword ptr ss : [ebp+0x348], ecx
        je public_6d48f7e
        mov dword ptr ds : [eax+0x34], ecx
        public_6d48f7e : nop
        mov ecx, dword ptr ss : [esp+0x36C]
        push ebx
        push ecx
        push ebp
        call dword ptr ds : [public_6d64bcc]
        mov esi, dword ptr ss : [esp+0x374]
        push 6
        push esi
        mov byte ptr ss : [esp+0x23], 6
        call dword ptr ds : [public_6d64c00]
        add esp, 0x10
        test eax, eax
        jne public_6d49120
/*FIXUP push offset public_6d6aea4 @0x6d48fae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
/*FIXUP push offset public_6d6b440 @0x6d48fb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b440
        push esi
        lea edx, ss:[esp+0x264]
        push edi
        push edx
        call dword ptr ds : [public_6d64bc0]
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x270]
        push ecx
        call dword ptr ds : [public_6d64bfc]
/*FIXUP push offset public_6d6ae30 @0x6d48fdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae30
        lea edx, ss:[esp+0x174]
/*FIXUP push offset public_6d6b438 @0x6d48fe7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b438
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        xor bl, bl
        call dword ptr ds : [public_6d64c74]
        mov eax, dword ptr ss : [esp+0x3C]
        add esp, 0x28
        cmp eax, 0xFFFFFFFF
        je public_6d49056
        public_6d49005 : nop
        test edi, edi
        jne public_6d49056
        lea eax, ss:[esp+0x50]
        push eax
        push esi
        mov ecx, ebp
        call public_6d48d50
        test al, al
        je public_6d4903f
        test bl, bl
        mov byte ptr ss : [esp+0x13], 3
        jne public_6d4903f
        lea ecx, ss:[esp+0x154]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6d4903f
        mov bl, 1
        public_6d4903f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        call dword ptr ds : [public_6d64bf8]
        add esp, 8
        mov edi, eax
        jmp public_6d49005
        public_6d49056 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [public_6d64bf4]
        add esp, 4
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d490a8
        test bl, bl
        jne public_6d4911e
        push esi
        mov ecx, offset public_6d90260
        call public_6d536d0
        test al, al
        je public_6d4911e
        lea eax, ss:[esp+0x154]
        push eax
        push esi
        mov ecx, ebp
        call public_6d48d50
        test al, al
        je public_6d4911e
        mov byte ptr ss : [esp+0x13], 3
        jmp public_6d4911e
        public_6d490a8 : nop
        mov byte ptr ss : [esp+0x13], 3
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d490d6
        mov ecx, dword ptr ss : [esp+0x370]
        mov edx, dword ptr ds : [public_6d64a44]
        push esi
        push ecx
        mov eax, 0x100003
/*FIXUP push offset public_6d6b414 @0x6d490cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b414
        push eax
        call dword ptr ds : [edx]
        add esp, 0x10
        public_6d490d6 : nop
        mov ebx, dword ptr ss : [ebp+0x400]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add ebx, 0x14
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        mov dword ptr ss : [esp+0x18], ecx
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d4911e
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov dword ptr ds : [ebx+8], eax
        mov ebx, dword ptr ds : [ebx+4]
        add ebx, eax
        mov byte ptr ds : [ebx], 0
        public_6d4911e : nop
        xor edi, edi
        public_6d49120 : nop
        mov edx, dword ptr ss : [esp+0x370]
        mov cl, byte ptr ss : [esp+0x13]
        push edx
        mov dword ptr ss : [ebp+0x3E0], edi
        mov dword ptr ss : [ebp+0x3E4], edi
        mov dword ptr ss : [ebp+0x3E8], edi
        mov dword ptr ss : [ebp+0x3EC], edi
        mov dword ptr ss : [ebp+0x3F4], edi
        mov dword ptr ss : [ebp+0x3F0], edi
        mov dword ptr ss : [ebp+0x3F8], edi
        mov dword ptr ss : [ebp+0x3FC], edi
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x20]
        call public_6ce4520
        test al, al
        pop ebx
        je public_6d491a8
        mov eax, dword ptr ss : [esp+0x36C]
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ecx
        call public_6ce1960
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x18]
        call public_6ce4500
        public_6d491a8 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, offset public_6d902a4
        mov dword ptr ss : [esp+0x368], 1
        call public_6d583b0
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, dword ptr ds : [public_6d902a8]
        je public_6d491d8
        mov eax, dword ptr ds : [eax+0x1C]
        jmp public_6d491da
        public_6d491d8 : nop
        xor eax, eax
        public_6d491da : nop
        mov dword ptr ss : [ebp+0x400], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        je public_6d49207
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d491fb
        cmp cl, 0xFF
        je public_6d491fb
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d49207
        public_6d491fb : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d49207 : nop
        mov al, byte ptr ss : [esp+0xF]
        mov dword ptr ss : [ebp+0x410], edi
        public_6d49211 : nop
        mov ecx, dword ptr ss : [esp+0x358]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x358
        ret 0xC
        UNREACHABLE_TRAP(0x6d48e80)
    }
}

#undef public_6d48ef9
#undef public_6d48f26
#undef public_6d48f28
#undef public_6d48f5c
#undef public_6d48f6a
#undef public_6d48f7e
#undef public_6d49005
#undef public_6d4903f
#undef public_6d49056
#undef public_6d490a8
#undef public_6d490d6
#undef public_6d4911e
#undef public_6d49120
#undef public_6d491a8
#undef public_6d491d8
#undef public_6d491da
#undef public_6d491fb
#undef public_6d49207
#undef public_6d49211
