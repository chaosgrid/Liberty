#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4180);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7430);
CLANG_FORWARD_PROC_SYMBOL(public_6ef75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e490);
CLANG_FORWARD_PROC_SYMBOL(public_6f35310);
CLANG_FORWARD_PROC_SYMBOL(public_6f35540);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac218);

#define public_6ef4230 _public_6ef4230
#define public_6ef4256 _public_6ef4256
#define public_6ef4290 _public_6ef4290
#define public_6ef42ca _public_6ef42ca
#define public_6ef42db _public_6ef42db
#define public_6ef4346 _public_6ef4346
#define public_6ef434b _public_6ef434b
#define public_6ef4354 _public_6ef4354
#define public_6ef4375 _public_6ef4375
#define public_6ef437c _public_6ef437c
#define public_6ef439e _public_6ef439e
#define public_6ef43a5 _public_6ef43a5
#define public_6ef43b0 _public_6ef43b0
#define public_6ef43b8 _public_6ef43b8
#define public_6ef43cb _public_6ef43cb
#define public_6ef4420 _public_6ef4420
#define public_6ef444f _public_6ef444f
#define public_6ef4451 _public_6ef4451

PROC_DECLARE(0x6ef4180, internal_6ef4180, public_6ef4180);
extern "C" NAKED register_t __cdecl internal_6ef4180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac218 @0x6ef4182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac218
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [ebp+0x1C]
        push esi
        lea esi, ss:[ebp+0x14]
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ef6750
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6ead6a0
        lea ecx, ss:[esp+0x11]
        push ecx
        xor edi, edi
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x84], edi
        call public_6ead6a0
        lea edx, ss:[esp+0x12]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x84], 1
        call public_6ead6a0
        mov al, byte ptr ss : [esp+0x88]
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov edi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ss : [ebp+0x30]
        xor bl, bl
        cmp edi, eax
        mov byte ptr ss : [esp+0x80], 3
        mov byte ptr ss : [esp+0x88], 0
        je public_6ef4346
        nop 
        lea esp, ss:[esp]
        public_6ef4230 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        lea eax, ds:[edi+0x10]
        je public_6ef4256
        mov ecx, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x90], 1
        call public_6eae440
        jmp public_6ef42db
        public_6ef4256 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6ead6a0
        lea eax, ss:[esp+0x48]
        push eax
        push edi
        mov byte ptr ss : [esp+0x88], 4
        call public_6f35540
        add esp, 8
        test bl, bl
        jne public_6ef4290
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6eb6560
        mov bl, 1
        jmp public_6ef42ca
        public_6ef4290 : nop
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        call public_6ef7430
        add esp, 0xC
        push eax
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x84], 5
        call public_6eb6560
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x80], 4
        call public_6eec8d0
        public_6ef42ca : nop
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x80], 3
        call public_6eec8d0
        public_6ef42db : nop
        mov eax, dword ptr ss : [ebp+0x30]
        add edi, 0x38
        cmp edi, eax
        jne public_6ef4230
        mov al, byte ptr ss : [esp+0x88]
        test al, al
        je public_6ef4346
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f35310
        add esp, 8
        test bl, bl
        lea ecx, ss:[esp+0x58]
        push ecx
        je public_6ef434b
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        call public_6ef7430
        add esp, 0xC
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x84], 6
        call public_6eb6560
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x80], 3
        call public_6eec8d0
        jmp public_6ef4354
        public_6ef4346 : nop
        lea edx, ss:[esp+0x38]
        push edx
        public_6ef434b : nop
        lea ecx, ss:[esp+0x1C]
        call public_6eb6560
        public_6ef4354 : nop
        lea ecx, ss:[esp+0x18]
        call public_6fa3db0
        test eax, eax
        je public_6ef444f
        mov ebp, dword ptr ss : [esp+0x1C]
        test ebp, ebp
        mov edi, dword ptr ss : [esp+0x20]
        jne public_6ef4375
        xor ecx, ecx
        jmp public_6ef437c
        public_6ef4375 : nop
        mov ecx, edi
        sub ecx, ebp
        sar ecx, 2
        public_6ef437c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0x40]
        test edx, edx
        lea ebx, ds:[eax+0x3C]
        je public_6ef43a5
        mov eax, dword ptr ds : [ebx+8]
        sub eax, edx
        sar eax, 3
        cmp ecx, eax
        jae public_6ef43a5
        test ebp, ebp
        jne public_6ef439e
        xor edi, edi
        jmp public_6ef43b8
        public_6ef439e : nop
        sub edi, ebp
        sar edi, 2
        jmp public_6ef43b8
        public_6ef43a5 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ef43b0
        xor edi, edi
        jmp public_6ef43b8
        public_6ef43b0 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 3
        public_6ef43b8 : nop
        mov ecx, esi
        call public_6f1e490
        cmp eax, edi
        jae public_6ef4420
        test edi, edi
        mov eax, edi
        jge public_6ef43cb
        xor eax, eax
        public_6ef43cb : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edx
        push eax
        mov ecx, esi
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        lea eax, ss:[ebp+edi*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        lea ecx, ss:[ebp+eax*8]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], ebp
        public_6ef4420 : nop
        lea edx, ss:[esp+0x18]
        push edx
        sub esp, 0x10
        mov ecx, esp
        mov dword ptr ss : [esp+0x9C], esp
        push ebx
        call dword ptr ds : [public_6fb3140]
        push esi
        call public_6ef75a0
        add esp, 0x18
        mov ecx, esi
        call public_6eae300
        test eax, eax
        setne bl
        jmp public_6ef4451
        public_6ef444f : nop
        xor bl, bl
        public_6ef4451 : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x80], 2
        call public_6eec8d0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x80], 1
        call public_6eec8d0
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x80], 0
        call public_6eec8d0
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x74
        ret 4
        UNREACHABLE_TRAP(0x6ef4180)
    }
}

#undef public_6ef4230
#undef public_6ef4256
#undef public_6ef4290
#undef public_6ef42ca
#undef public_6ef42db
#undef public_6ef4346
#undef public_6ef434b
#undef public_6ef4354
#undef public_6ef4375
#undef public_6ef437c
#undef public_6ef439e
#undef public_6ef43a5
#undef public_6ef43b0
#undef public_6ef43b8
#undef public_6ef43cb
#undef public_6ef4420
#undef public_6ef444f
#undef public_6ef4451
