#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63616e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6398426);

#define public_636171c _public_636171c
#define public_636172d _public_636172d
#define public_636173d _public_636173d
#define public_636175b _public_636175b
#define public_6361762 _public_6361762
#define public_6361785 _public_6361785
#define public_636178c _public_636178c

PROC_DECLARE(0x63616e0, internal_63616e0, public_63616e0);
extern "C" NAKED register_t __cdecl internal_63616e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398426 @0x63616e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398426
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a57ac
        mov ecx, dword ptr ds : [esi+8]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], 1
        je public_636171c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_636171c : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        mov dword ptr ds : [esi+8], ebx
        je public_636172d
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_636172d : nop
        mov ecx, dword ptr ds : [esi+0x24]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0xC], ebx
        je public_636173d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_636173d : nop
        mov dword ptr ds : [esi+0x24], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x20]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], bl
        je public_6361762
        cmp eax, ebx
        je public_636175b
        push eax
        call public_6343fb0
        add esp, 4
        public_636175b : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov word ptr ds : [esi+0x18], bx
        public_6361762 : nop
        mov word ptr ds : [esi+0x1A], bx
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ds:[esi+0x18]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_636178c
        cmp eax, ebx
        je public_6361785
        push eax
        call public_6343fb0
        add esp, 4
        public_6361785 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov word ptr ds : [esi+0x10], bx
        public_636178c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0x12], bx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63616e0)
    }
}

#undef public_636171c
#undef public_636172d
#undef public_636173d
#undef public_636175b
#undef public_6361762
#undef public_6361785
#undef public_636178c
