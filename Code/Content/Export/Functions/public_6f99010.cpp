#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1818);

#define public_6f99064 _public_6f99064
#define public_6f9907a _public_6f9907a
#define public_6f99096 _public_6f99096
#define public_6f99108 _public_6f99108
#define public_6f99156 _public_6f99156
#define public_6f99160 _public_6f99160
#define public_6f99172 _public_6f99172
#define public_6f99187 _public_6f99187
#define public_6f9919d _public_6f9919d
#define public_6f991d6 _public_6f991d6
#define public_6f991db _public_6f991db
#define public_6f991ec _public_6f991ec
#define public_6f99267 _public_6f99267
#define public_6f992a8 _public_6f992a8
#define public_6f992b7 _public_6f992b7
#define public_6f992d0 _public_6f992d0
#define public_6f992df _public_6f992df
#define public_6f992e6 _public_6f992e6
#define public_6f992f3 _public_6f992f3
#define public_6f992f9 _public_6f992f9
#define public_6f99318 _public_6f99318
#define public_6f9931c _public_6f9931c
#define public_6f9933c _public_6f9933c
#define public_6f9935a _public_6f9935a
#define public_6f9935b _public_6f9935b
#define public_6f9936c _public_6f9936c

PROC_DECLARE(0x6f99010, internal_6f99010, public_6f99010);
extern "C" NAKED register_t __cdecl internal_6f99010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1818 @0x6f99012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1818
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x18], ecx
        push 0
        mov ecx, edi
        mov ebp, 1
        call dword ptr ds : [public_6fb3048]
        mov ebx, dword ptr ds : [public_6fb3294]
        mov esi, eax
/*FIXUP push offset public_6fbcd58 @0x6f9904b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd58
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f99064
        mov eax, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [eax+4], 1
        jmp public_6f9907a
/*FIXUP public_6f99064 : nop
        push offset public_6fbcd50 @0x6f99064*/
  FIXUP public_6f99064 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd50
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f9907a
        mov ecx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx+4], al
        public_6f9907a : nop
        push 1
        mov ecx, edi
        mov bl, 1
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f9936c
        public_6f99096 : nop
        test bl, bl
        je public_6f99108
        mov dl, byte ptr ss : [esp+0x4C]
        xor esi, esi
        xor bl, bl
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], 3
        mov byte ptr ss : [esp+0x2C], dl
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x24]
        lea ecx, ds:[eax+8]
        mov eax, dword ptr ds : [ecx+8]
        push edx
        push 1
        push eax
        mov dword ptr ss : [esp+0x50], esi
        call public_6fa1eb0
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        sub eax, 0x18
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x14], eax
        public_6f99108 : nop
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6fb3344]
        add esp, 4
        test eax, eax
        je public_6f9931c
        mov eax, ebp
        inc ebp
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_6fb3020]
        mov edx, dword ptr ss : [esp+0x14]
        push ebp
        mov ecx, edi
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f99318
        jmp public_6f99160
        public_6f99156 : nop
        mov edi, dword ptr ss : [esp+0x4C]
        lea ebx, ds:[ebx]
        public_6f99160 : nop
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov ebx, eax
        mov esi, offset public_6fce868
        xor edi, edi
        public_6f99172 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f99187
        push eax
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f9919d
        public_6f99187 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x78
        jb public_6f99172
        mov edi, dword ptr ss : [esp+0x4C]
        mov bl, 1
        jmp public_6f9935b
        public_6f9919d : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+0x14]
        lea esi, ds:[ecx+8]
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        mov dword ptr ss : [esp+0x10], eax
        jae public_6f99267
        mov ecx, esi
        call public_6fa3db0
        cmp eax, 1
        jbe public_6f991d6
        mov ecx, esi
        call public_6fa3db0
        mov ebp, eax
        jmp public_6f991db
        public_6f991d6 : nop
        mov ebp, 1
        public_6f991db : nop
        mov ecx, esi
        call public_6fa3db0
        mov ebx, eax
        add ebx, ebp
        mov eax, ebx
        jns public_6f991ec
        xor eax, eax
        public_6f991ec : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebp, eax
        push ebp
        push edi
        push ecx
        mov ecx, esi
        call public_6eed270
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f38a50
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        add eax, 4
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        lea edx, ss:[ebp+ebx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6fa3db0
        lea eax, ss:[ebp+eax*4+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        jmp public_6f992f9
        public_6f99267 : nop
        mov ecx, edi
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f992b7
        lea edx, ds:[edi+4]
        push edx
        push edi
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f992f3
        public_6f992a8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f992a8
        jmp public_6f992f3
        public_6f992b7 : nop
        push edi
        push edi
        lea eax, ds:[edi-4]
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f992df
        lea esp, ss:[esp]
        public_6f992d0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f992d0
        public_6f992df : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6f992f3
        public_6f992e6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6f992e6
        public_6f992f3 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6f992f9 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        inc ebp
        push ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f99156
        mov edi, dword ptr ss : [esp+0x4C]
        public_6f99318 : nop
        mov bl, 1
        jmp public_6f9935b
/*FIXUP public_6f9931c : nop
        push offset public_6fbb7b0 @0x6f9931c*/
  FIXUP public_6f9931c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7b0
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f9933c
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], 1
        jmp public_6f9935a
/*FIXUP public_6f9933c : nop
        push offset public_6fbb7a8 @0x6f9933c*/
  FIXUP public_6f9933c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb7a8
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f9935a
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], 2
        public_6f9935a : nop
        inc ebp
        public_6f9935b : nop
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f99096
        public_6f9936c : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6f99010)
    }
}

#undef public_6f99064
#undef public_6f9907a
#undef public_6f99096
#undef public_6f99108
#undef public_6f99156
#undef public_6f99160
#undef public_6f99172
#undef public_6f99187
#undef public_6f9919d
#undef public_6f991d6
#undef public_6f991db
#undef public_6f991ec
#undef public_6f99267
#undef public_6f992a8
#undef public_6f992b7
#undef public_6f992d0
#undef public_6f992df
#undef public_6f992e6
#undef public_6f992f3
#undef public_6f992f9
#undef public_6f99318
#undef public_6f9931c
#undef public_6f9933c
#undef public_6f9935a
#undef public_6f9935b
#undef public_6f9936c
