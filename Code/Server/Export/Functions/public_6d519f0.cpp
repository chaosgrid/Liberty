#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);

#define public_6d51a0a _public_6d51a0a
#define public_6d51aa7 _public_6d51aa7
#define public_6d51ab4 _public_6d51ab4
#define public_6d51ad1 _public_6d51ad1
#define public_6d51afe _public_6d51afe
#define public_6d51b2d _public_6d51b2d
#define public_6d51b80 _public_6d51b80
#define public_6d51bb0 _public_6d51bb0
#define public_6d51be7 _public_6d51be7
#define public_6d51bf1 _public_6d51bf1
#define public_6d51c04 _public_6d51c04
#define public_6d51c20 _public_6d51c20
#define public_6d51c37 _public_6d51c37
#define public_6d51c39 _public_6d51c39
#define public_6d51c4e _public_6d51c4e
#define public_6d51c7e _public_6d51c7e
#define public_6d51ca2 _public_6d51ca2
#define public_6d51cbc _public_6d51cbc
#define public_6d51cd0 _public_6d51cd0
#define public_6d51ce6 _public_6d51ce6
#define public_6d51d06 _public_6d51d06

PROC_DECLARE(0x6d519f0, internal_6d519f0, public_6d519f0);
extern "C" NAKED register_t __cdecl internal_6d519f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        push edi
        jne public_6d51a0a
        mov esi, offset public_6d64efc
        public_6d51a0a : nop
        mov ebx, dword ptr ds : [public_6d647e8]
        call ebx
        test al, al
        mov ebp, dword ptr ds : [public_6d64c80]
        je public_6d51ad1
        push esi
        call dword ptr ds : [public_6d64c98]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64ca0]
        push esi
        call ebp
        mov ecx, dword ptr ds : [public_6d90144]
        mov edi, eax
        add esp, 0xC
        lea edx, ds:[edi+edi]
        push edx
        mov dword ptr ds : [public_6d90150], ecx
        push esi
        mov ecx, offset public_6d8fd38
        call public_6d46850
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push edi
        lea eax, ss:[esp+0x128]
/*FIXUP push offset public_6d6aec0 @0x6d51a66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push eax
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
        lea ecx, ss:[esp+0x238]
        push ecx
        call dword ptr ds : [public_6d64874]
        add esp, 0x18
        call ebx
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d51aa7
/*FIXUP push offset public_6d8d308 @0x6d51a98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea edx, ss:[esp+0x22C]
        push edx
        jmp public_6d51ab4
/*FIXUP public_6d51aa7 : nop
        push offset public_6d8d200 @0x6d51aa7*/
  FIXUP public_6d51aa7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea eax, ss:[esp+0x22C]
        push eax
        public_6d51ab4 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d51ab6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea ecx, ss:[esp+0x124]
        push ecx
/*FIXUP push offset public_6d90158 @0x6d51aca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        jmp public_6d51afe
        public_6d51ad1 : nop
        push 0x104
        lea eax, ss:[esp+0x124]
        push esi
        push eax
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        lea ecx, ss:[esp+0x120]
        push 0
        push ecx
        call public_6d460f0
        mov esi, dword ptr ds : [public_6d64bc0]
        push eax
        public_6d51afe : nop
        lea edx, ss:[esp+0x28]
        push 0
        push edx
        call esi
        add esp, 0x14
        lea eax, ss:[esp+0x1C]
        push 6
        push eax
        call dword ptr ds : [public_6d64c00]
        add esp, 8
        test eax, eax
        je public_6d51b2d
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC1C
        ret 8
        public_6d51b2d : nop
        push 0
/*FIXUP push offset public_6d6b8a4 @0x6d51b2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8a4
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x334]
        push 0
        push edx
        call esi
        lea eax, ss:[esp+0x33C]
/*FIXUP push offset public_6d6b4e4 @0x6d51b4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call dword ptr ds : [public_6d64bd8]
        add esp, 0x1C
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d51d06
        mov ecx, dword ptr ss : [esp+0xC34]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        mov esi, offset public_6d64efc
        je public_6d51be7
        mov esi, eax
        mov dword ptr ss : [esp+0x10], eax
        public_6d51b80 : nop
        push esi
        lea ebx, ss:[esp+0x430]
        call ebp
        mov edx, dword ptr ds : [public_6d90144]
        mov edi, dword ptr ds : [public_6d9013c]
        shl eax, 1
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_6d90150], edx
        jle public_6d51c4e
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ds:[ecx]
        public_6d51bb0 : nop
        mov al, byte ptr ds : [esi]
        mov cl, byte ptr ds : [public_6d9014c]
        inc esi
        test cl, cl
        mov cl, byte ptr ds : [public_6d9014d]
        movzx eax, al
        jne public_6d51c04
        mov ebp, edx
        shl edx, 8
        test cl, cl
        lea ecx, ds:[edi-8]
        je public_6d51bf1
        shr ebp, cl
        and ebp, 0xFF
        xor ebp, eax
        mov ecx, dword ptr ds : [ebp*4+public_6d8fd38]
        xor edx, ecx
        jmp public_6d51c39
        public_6d51be7 : nop
        mov dword ptr ss : [esp+0x10], offset public_6d64efc
        jmp public_6d51b80
        public_6d51bf1 : nop
        shr ebp, cl
        and ebp, 0xFF
        mov ecx, dword ptr ds : [ebp*4+public_6d8fd38]
        xor edx, ecx
        jmp public_6d51c37
        public_6d51c04 : nop
        test cl, cl
        mov ecx, edx
        je public_6d51c20
        and ecx, 0xFF
        xor ecx, eax
        mov ecx, dword ptr ds : [ecx*4+public_6d8fd38]
        shr edx, 8
        xor edx, ecx
        jmp public_6d51c39
        public_6d51c20 : nop
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_6d8fd38]
        shr edx, 8
        xor edx, ecx
        lea ecx, ds:[edi-8]
        shl eax, cl
        public_6d51c37 : nop
        xor edx, eax
        public_6d51c39 : nop
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ds : [public_6d90150], edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d51bb0
        public_6d51c4e : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        lea ecx, ds:[edi-1]
        mov eax, 1
        jne public_6d51c7e
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edx
        lea esi, ds:[eax+eax-1]
        or esi, 1
        and esi, ecx
        mov ecx, dword ptr ds : [public_6d90138]
        sub ecx, edi
        shl esi, cl
        jmp public_6d51cbc
        public_6d51c7e : nop
        mov edi, dword ptr ds : [public_6d90138]
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edx
        mov edx, 8
        lea eax, ds:[eax+eax-1]
        or eax, 1
        xor esi, esi
        and eax, ecx
        cmp edi, edx
        jb public_6d51cbc
        public_6d51ca2 : nop
        mov ebp, eax
        mov ecx, edi
        sub ecx, edx
        and ebp, 0xFF
        shl ebp, cl
        add edx, 8
        shr eax, 8
        or esi, ebp
        cmp edx, edi
        jbe public_6d51ca2
        public_6d51cbc : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov ax, word ptr ds : [edx]
        xor ecx, ecx
        test ax, ax
        je public_6d51ce6
        lea esp, ss:[esp]
        public_6d51cd0 : nop
        xor eax, esi
        mov word ptr ds : [ebx], ax
        add edx, 2
        xor eax, eax
        mov ax, word ptr ds : [edx]
        add ebx, 2
        inc ecx
        test ax, ax
        jne public_6d51cd0
        public_6d51ce6 : nop
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        push ecx
        lea edx, ss:[esp+0x434]
        push 2
        push edx
        call dword ptr ds : [public_6d64c04]
        push esi
        call dword ptr ds : [public_6d64bd0]
        add esp, 0x14
        public_6d51d06 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC1C
        ret 8
        UNREACHABLE_TRAP(0x6d519f0)
    }
}

#undef public_6d51a0a
#undef public_6d51aa7
#undef public_6d51ab4
#undef public_6d51ad1
#undef public_6d51afe
#undef public_6d51b2d
#undef public_6d51b80
#undef public_6d51bb0
#undef public_6d51be7
#undef public_6d51bf1
#undef public_6d51c04
#undef public_6d51c20
#undef public_6d51c37
#undef public_6d51c39
#undef public_6d51c4e
#undef public_6d51c7e
#undef public_6d51ca2
#undef public_6d51cbc
#undef public_6d51cd0
#undef public_6d51ce6
#undef public_6d51d06
