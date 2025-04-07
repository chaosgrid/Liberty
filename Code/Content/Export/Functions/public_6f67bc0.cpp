#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc88);

#define public_6f67c2a _public_6f67c2a
#define public_6f67c3f _public_6f67c3f
#define public_6f67c59 _public_6f67c59
#define public_6f67c61 _public_6f67c61
#define public_6f67c84 _public_6f67c84
#define public_6f67c90 _public_6f67c90
#define public_6f67cb2 _public_6f67cb2

PROC_DECLARE(0x6f67bc0, internal_6f67bc0, public_6f67bc0);
extern "C" NAKED register_t __cdecl internal_6f67bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafc88 @0x6f67bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_6fbbb74 @0x6f67bf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb74
        mov dword ptr ss : [esp+0x30], ebp
        call public_6f6d2b0
        mov esi, dword ptr ds : [public_6fd1cc0]
        mov edi, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ds : [public_6fb3380]
        add esp, 8
        cmp esi, ebp
        je public_6f67c2a
        mov eax, dword ptr ds : [public_6fd1cc4]
        sub eax, esi
        sar eax, 2
        cmp eax, ebp
        jne public_6f67c3f
        public_6f67c2a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebp
        je public_6f67c59
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebp
        je public_6f67c59
/*FIXUP public_6f67c3f : nop
        push offset public_6fbbbdc @0x6f67c3f*/
  FIXUP public_6f67c3f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbbdc
/*FIXUP push offset public_6fb4370 @0x6f67c44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4370
        push edi
        call ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [public_6fd1cc0]
        add esp, 0xC
        public_6f67c59 : nop
        cmp esi, dword ptr ds : [public_6fd1cc4]
        je public_6f67c84
        public_6f67c61 : nop
        mov edx, dword ptr ds : [esi]
        push edx
/*FIXUP push offset public_6fbbbf8 @0x6f67c64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbbf8
/*FIXUP push offset public_6fbb094 @0x6f67c69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb094
        push edi
        call ebx
        mov eax, dword ptr ds : [public_6fd1cc4]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        jne public_6f67c61
        mov ecx, dword ptr ss : [esp+0x14]
        public_6f67c84 : nop
        cmp ecx, dword ptr ss : [esp+0x18]
        mov esi, ecx
        je public_6f67cb2
        lea esp, ss:[esp]
        public_6f67c90 : nop
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fbbbec @0x6f67c93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbbec
/*FIXUP push offset public_6fbb094 @0x6f67c98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb094
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        jne public_6f67c90
        mov ecx, dword ptr ss : [esp+0x14]
        public_6f67cb2 : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f67bc0)
    }
}

#undef public_6f67c2a
#undef public_6f67c3f
#undef public_6f67c59
#undef public_6f67c61
#undef public_6f67c84
#undef public_6f67c90
#undef public_6f67cb2
