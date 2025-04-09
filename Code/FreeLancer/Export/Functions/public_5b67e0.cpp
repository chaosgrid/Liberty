#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5687c0);
CLANG_FORWARD_PROC_SYMBOL(public_5687e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6630);
CLANG_FORWARD_PROC_SYMBOL(public_5b67e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6b90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5a6b);

#define public_5b6921 _public_5b6921
#define public_5b69e7 _public_5b69e7
#define public_5b6a1b _public_5b6a1b
#define public_5b6a6f _public_5b6a6f
#define public_5b6a71 _public_5b6a71
#define public_5b6a9c _public_5b6a9c
#define public_5b6ab9 _public_5b6ab9
#define public_5b6ac0 _public_5b6ac0
#define public_5b6b00 _public_5b6b00
#define public_5b6b04 _public_5b6b04
#define public_5b6b20 _public_5b6b20
#define public_5b6b24 _public_5b6b24
#define public_5b6b2a _public_5b6b2a
#define public_5b6b30 _public_5b6b30
#define public_5b6b46 _public_5b6b46
#define public_5b6b4c _public_5b6b4c
#define public_5b6b60 _public_5b6b60
#define public_5b6b74 _public_5b6b74

PROC_DECLARE(0x5b67e0, internal_5b67e0, public_5b67e0);
extern "C" NAKED register_t __cdecl internal_5b67e0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c5a6b @0x5b67e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5a6b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x28A0
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebp
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28B8], ebp
        call public_5687e0
        mov eax, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [public_6143b0]
        mov dword ptr ss : [esp+eax*4+0x2C], 0x80000001
        mov esi, dword ptr ss : [esp+0x28]
        inc esi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], esi
        call public_5b6630
        cmp eax, ebp
        je public_5b6b24
        cmp esi, 0x20
        jae public_5b6b24
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        push 0x2001F
        push ebp
/*FIXUP push offset public_5c865c @0x5b6865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push ebp
        push edi
        mov edi, dword ptr ds : [public_5c6004]
        push eax
        call edi
        test eax, eax
        jne public_5b6b20
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+ecx*4+0x2C], eax
        mov esi, dword ptr ss : [esp+0x28]
        inc esi
        cmp eax, ebp
        mov dword ptr ss : [esp+0x28], esi
        je public_5b6b24
        lea ecx, ss:[esp+0x28]
        call public_5b6630
        cmp eax, ebp
        je public_5b6b24
        cmp esi, 0x20
        jae public_5b6b24
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        push 0x2001F
        push ebp
/*FIXUP push offset public_5c865c @0x5b68c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push ebp
/*FIXUP push offset public_5e71a0 @0x5b68cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e71a0
        push eax
        call edi
        test eax, eax
        jne public_5b6b20
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+edx*4+0x2C], eax
        mov esi, dword ptr ss : [esp+0x28]
        inc esi
        cmp eax, ebp
        mov dword ptr ss : [esp+0x28], esi
        je public_5b6b24
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [esp+0x14], 1
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [public_5c600c]
        mov ebp, dword ptr ds : [public_5c6cf0]
        mov dword ptr ss : [esp+0x14], ecx
        public_5b6921 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edx+8]
        je public_5b6ab9
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x8B4]
/*FIXUP push offset public_5e7198 @0x5b693e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7198
        push edx
        call public_402180
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        mov esi, eax
        call public_5b6630
        test eax, eax
        je public_5b6a9c
        cmp dword ptr ss : [esp+0x28], 0x20
        jae public_5b6a9c
        lea ecx, ss:[esp+0xAC]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push 0
        push 0x2001F
        push 0
/*FIXUP push offset public_5c865c @0x5b6980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0
        push esi
        push eax
        call edi
        test eax, eax
        jne public_5b6a9c
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+ecx*4+0x2C], eax
        mov edx, dword ptr ss : [esp+0x28]
        inc edx
        test eax, eax
        mov dword ptr ss : [esp+0x28], edx
        je public_5b6a9c
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 4
        push 0
/*FIXUP push offset public_5d511c @0x5b69c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d511c
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x2C], eax
        call public_5b6630
        push eax
        call ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        test eax, eax
        jne public_5b69e7
        mov eax, dword ptr ds : [public_5c700c]
        public_5b69e7 : nop
        lea ecx, ss:[esp+0x4B0]
        push ecx
        push eax
        call ebp
        add esp, 8
        lea edx, ss:[esp+0x4B0]
        push edx
/*FIXUP push offset public_5e717c @0x5b69fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e717c
        lea ecx, ss:[esp+0x30]
        call public_5b6b90
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x24]
        test eax, eax
        jne public_5b6a1b
        mov eax, dword ptr ds : [public_5c700c]
        public_5b6a1b : nop
        lea ecx, ss:[esp+0xB0]
        push ecx
        push eax
        call ebp
        add esp, 8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0xB0]
        repne scasb
        not ecx
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        push 1
        push eax
/*FIXUP push offset public_5e7170 @0x5b6a45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7170
        lea ecx, ss:[esp+0x3C]
        call public_5b6630
        push eax
        call ebx
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        mov dword ptr ss : [esp+0x18], ecx
        jle public_5b6a6f
        mov eax, dword ptr ss : [esp+eax*4+0x28]
        jmp public_5b6a71
        public_5b6a6f : nop
        xor eax, eax
        public_5b6a71 : nop
        push 4
        lea edx, ss:[esp+0x1C]
        push edx
        push 4
        push 0
/*FIXUP push offset public_5e7168 @0x5b6a7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7168
        push eax
        call ebx
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jle public_5b6a9c
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+eax*4+0x2C]
        push eax
        call dword ptr ds : [public_5c6000]
        public_5b6a9c : nop
        lea ecx, ss:[esp+0x14]
        call public_531930
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [public_5c6004]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        jmp public_5b6921
        public_5b6ab9 : nop
        mov edi, dword ptr ds : [public_5c6014]
        nop 
        public_5b6ac0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x8B4]
/*FIXUP push offset public_5e7198 @0x5b6acc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7198
        push ecx
        call public_402180
        mov esi, dword ptr ss : [esp+0x34]
        add esp, 0xC
        test esi, esi
        jle public_5b6b46
        mov ecx, dword ptr ss : [esp+esi*4+0x28]
        test ecx, ecx
        je public_5b6b04
        push eax
        push ecx
        call edi
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x23], al
        je public_5b6b00
        inc dword ptr ss : [esp+0x10]
        jmp public_5b6ac0
        public_5b6b00 : nop
        mov esi, dword ptr ss : [esp+0x28]
        public_5b6b04 : nop
        test esi, esi
        jle public_5b6b46
        mov edi, dword ptr ds : [public_5c6000]
        dec esi
        mov dword ptr ss : [esp+0x28], esi
        mov esi, dword ptr ss : [esp+esi*4+0x2C]
        push esi
        call edi
        mov esi, dword ptr ss : [esp+0x28]
        jmp public_5b6b2a
        public_5b6b20 : nop
        mov esi, dword ptr ss : [esp+0x28]
        public_5b6b24 : nop
        mov edi, dword ptr ds : [public_5c6000]
        public_5b6b2a : nop
        test esi, esi
        jle public_5b6b4c
        mov edi, edi
        public_5b6b30 : nop
        lea ecx, ss:[esp+0x28]
        call public_5687c0
        push eax
        call edi
        mov esi, dword ptr ss : [esp+0x28]
        test esi, esi
        jg public_5b6b30
        jmp public_5b6b4c
        public_5b6b46 : nop
        mov edi, dword ptr ds : [public_5c6000]
        public_5b6b4c : nop
        test esi, esi
        mov dword ptr ss : [esp+0x28B8], 0xFFFFFFFF
        jle public_5b6b74
        nop 
        lea esp, ss:[esp]
        public_5b6b60 : nop
        lea ecx, ss:[esp+0x28]
        call public_5687c0
        push eax
        call edi
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jg public_5b6b60
        public_5b6b74 : nop
        mov ecx, dword ptr ss : [esp+0x28B0]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28AC
        ret 
        UNREACHABLE_TRAP(0x5b67e0)
    }
}

#undef public_5b6921
#undef public_5b69e7
#undef public_5b6a1b
#undef public_5b6a6f
#undef public_5b6a71
#undef public_5b6a9c
#undef public_5b6ab9
#undef public_5b6ac0
#undef public_5b6b00
#undef public_5b6b04
#undef public_5b6b20
#undef public_5b6b24
#undef public_5b6b2a
#undef public_5b6b30
#undef public_5b6b46
#undef public_5b6b4c
#undef public_5b6b60
#undef public_5b6b74
