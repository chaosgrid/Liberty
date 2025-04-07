#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef69a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef70c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac18a);

#define public_6ef3af0 _public_6ef3af0
#define public_6ef3b75 _public_6ef3b75
#define public_6ef3b8a _public_6ef3b8a
#define public_6ef3b9c _public_6ef3b9c
#define public_6ef3baa _public_6ef3baa
#define public_6ef3bc2 _public_6ef3bc2
#define public_6ef3bf3 _public_6ef3bf3
#define public_6ef3c14 _public_6ef3c14
#define public_6ef3c47 _public_6ef3c47
#define public_6ef3c5e _public_6ef3c5e
#define public_6ef3cc3 _public_6ef3cc3

PROC_DECLARE(0x6ef3ab0, internal_6ef3ab0, public_6ef3ab0);
extern "C" NAKED register_t __cdecl internal_6ef3ab0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac18a @0x6ef3ab8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac18a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xCC]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        xor ebx, ebx
        test al, al
        je public_6ef3b9c
        mov ebp, dword ptr ds : [public_6fb301c]
/*FIXUP public_6ef3af0 : nop
        push offset public_6fb784c @0x6ef3af0*/
  FIXUP public_6ef3af0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb784c
        mov ecx, esi
        call ebp
        test al, al
        je public_6ef3b75
        push esi
        lea ecx, ss:[esp+0x44]
        call public_6ef5b50
        mov eax, dword ptr ds : [edi+0x34]
        lea ecx, ds:[edi+0x2C]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        mov dword ptr ss : [esp+0xD0], 0
        call public_6ef69a0
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0xC8], 3
        call public_6eec8d0
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0xC8], 2
        call public_6eec8d0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0xC8], 1
        call public_6ef65a0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xC8], 0xFFFFFFFF
        call public_6eec8d0
        jmp public_6ef3b8a
/*FIXUP public_6ef3b75 : nop
        push offset public_6fb7840 @0x6ef3b75*/
  FIXUP public_6ef3b75 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7840
        mov ecx, esi
        call ebp
        test al, al
        je public_6ef3b8a
        push esi
        mov ecx, edi
        call public_6ef3ef0
        public_6ef3b8a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ef3af0
        xor ebx, ebx
        public_6ef3b9c : nop
        mov eax, dword ptr ds : [edi+0x30]
        mov edx, dword ptr ds : [eax+0x2C]
        cmp edx, ebx
        jne public_6ef3baa
        xor edx, edx
        jmp public_6ef3bc2
        public_6ef3baa : nop
        mov ecx, dword ptr ds : [eax+0x30]
        sub ecx, edx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ef3bc2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        cmp edx, ebx
        lea ebp, ds:[edi+0x18]
        setne byte ptr ss : [esp+0x13]
        cmp eax, ebx
        je public_6ef3bf3
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x24], edx
        jne public_6ef3cc3
        public_6ef3bf3 : nop
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0xC8], 4
        xor esi, esi
        public_6ef3c14 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        cmp ecx, ebx
        je public_6ef3c47
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 7
        cmp esi, eax
        jae public_6ef3c47
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x30], esi
        mov byte ptr ss : [esp+0x34], bl
        call public_6f96770
        inc esi
        jmp public_6ef3c14
        public_6ef3c47 : nop
        mov dl, byte ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x2C], dl
        call public_6eae300
        cmp eax, ebx
        jge public_6ef3c5e
        xor eax, eax
        public_6ef3c5e : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], eax
        call public_6ed2700
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x2C]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0xD4], 5
        call public_6ef70c0
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6fa8fe0
        add esp, 8
        public_6ef3cc3 : nop
        mov ecx, dword ptr ss : [esp+0xC0]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xBC
        ret 4
        UNREACHABLE_TRAP(0x6ef3ab0)
    }
}

#undef public_6ef3af0
#undef public_6ef3b75
#undef public_6ef3b8a
#undef public_6ef3b9c
#undef public_6ef3baa
#undef public_6ef3bc2
#undef public_6ef3bf3
#undef public_6ef3c14
#undef public_6ef3c47
#undef public_6ef3c5e
#undef public_6ef3cc3
