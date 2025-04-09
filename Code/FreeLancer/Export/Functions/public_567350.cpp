#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_567350);
CLANG_FORWARD_PROC_SYMBOL(public_58c370);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2e1b);

#define public_567450 _public_567450
#define public_567464 _public_567464
#define public_567468 _public_567468
#define public_56746c _public_56746c
#define public_567480 _public_567480

PROC_DECLARE(0x567350, internal_567350, public_567350);
extern "C" NAKED register_t __cdecl internal_567350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2e1b @0x567352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2e1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x8C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor bl, bl
        mov eax, dword ptr ds : [public_6143b0]
        mov esi, dword ptr ds : [public_5c6004]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push 0
        push 0x2001F
        push 0
/*FIXUP push offset public_5c865c @0x567391*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0
        push eax
        push 0x80000001
        mov dword ptr ss : [esp+0xC8], 0
        mov dword ptr ss : [esp+0x40], 0x80000001
        mov dword ptr ss : [esp+0x3C], 1
        call esi
        test eax, eax
        mov ebp, dword ptr ds : [public_5c6000]
        jne public_567464
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+eax*4+0x1C], ecx
        mov eax, dword ptr ss : [esp+0x18]
        inc eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_567468
        test eax, eax
        jle public_567480
        mov ecx, dword ptr ss : [esp+eax*4+0x18]
        test ecx, ecx
        je public_567468
        cmp eax, 0x20
        jae public_567468
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        push 0
        push 0x2001F
        push 0
/*FIXUP push offset public_5c865c @0x56740e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        push 0
/*FIXUP push offset public_5e29a4 @0x567415*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e29a4
        push ecx
        call esi
        test eax, eax
        jne public_567464
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+edx*4+0x1C], ecx
        mov eax, dword ptr ss : [esp+0x18]
        inc eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_567468
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[edi+0x5A0]
        call public_58c370
        test al, al
        je public_567450
        mov bl, 1
        public_567450 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jle public_567480
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+eax*4+0x1C]
        push eax
        call ebp
        public_567464 : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_567468 : nop
        test eax, eax
        jle public_567480
        public_56746c : nop
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+eax*4+0x1C]
        push eax
        call ebp
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jg public_56746c
        public_567480 : nop
        mov ecx, dword ptr ss : [esp+0x9C]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x567350)
    }
}

#undef public_567450
#undef public_567464
#undef public_567468
#undef public_56746c
#undef public_567480
