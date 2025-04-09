#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5765b0);

#define public_5765df _public_5765df
#define public_5765fe _public_5765fe
#define public_576607 _public_576607
#define public_576620 _public_576620
#define public_576641 _public_576641
#define public_576643 _public_576643
#define public_576660 _public_576660
#define public_57668c _public_57668c
#define public_5766a6 _public_5766a6
#define public_5766c2 _public_5766c2
#define public_5766d2 _public_5766d2

PROC_DECLARE(0x5765b0, internal_5765b0, public_5765b0);
extern "C" NAKED register_t __cdecl internal_5765b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+4], 0
        call dword ptr ds : [public_5c6024]
        mov esi, eax
        mov al, byte ptr ds : [esi]
        cmp al, 0x22
        jne public_5765df
        movsx eax, byte ptr ds : [esi+1]
        mov dword ptr ds : [edi], eax
        jmp public_576643
        public_5765df : nop
        cmp al, 0x30
        jne public_576607
        push edi
/*FIXUP push offset public_5e42fc @0x5765e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e42fc
        push esi
        call dword ptr ds : [public_5c7148]
        add esp, 0xC
        cmp eax, 1
        je public_576643
        mov dword ptr ds : [edi], 0
        public_5765fe : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_576607 : nop
        push esi
        call dword ptr ds : [public_5c70c4]
        mov ebp, eax
        add esp, 4
        cmp ebp, 0xFFFFFFF7
        jle public_576620
        cmp ebp, 0x100
        jl public_576641
        public_576620 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x1E6
/*FIXUP push offset public_5e42c8 @0x57662c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e42c8
        mov eax, 0x100001
/*FIXUP push offset public_5e4294 @0x576636*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4294
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_576641 : nop
        mov dword ptr ds : [edi], ebp
        public_576643 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, 1
        push ebx
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_5766d2
        mov ebp, dword ptr ds : [public_5c70e8]
        lea ecx, ds:[ecx]
        public_576660 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        call dword ptr ds : [public_5c6024]
        mov esi, eax
        cmp byte ptr ds : [esi], 0
        je public_5766d2
        push 5
/*FIXUP push offset public_5e428c @0x576674*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e428c
        push esi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_57668c
        mov dword ptr ds : [edi+4], 1
        jmp public_5766c2
        public_57668c : nop
        push 7
/*FIXUP push offset public_5e4284 @0x57668e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4284
        push esi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_5766a6
        mov dword ptr ds : [edi+4], 4
        jmp public_5766c2
        public_5766a6 : nop
        push 3
/*FIXUP push offset public_5e4280 @0x5766a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4280
        push esi
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_5765fe
        mov dword ptr ds : [edi+4], 0x10
        public_5766c2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebx
        push ebx
        call dword ptr ds : [public_5c6cf8]
        test al, al
        je public_576660
        public_5766d2 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5765b0)
    }
}

#undef public_5765df
#undef public_5765fe
#undef public_576607
#undef public_576620
#undef public_576641
#undef public_576643
#undef public_576660
#undef public_57668c
#undef public_5766a6
#undef public_5766c2
#undef public_5766d2
