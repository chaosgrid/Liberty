#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c6b0);
CLANG_FORWARD_PROC_SYMBOL(public_627ca90);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_630e450);
CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312970);
CLANG_FORWARD_PROC_SYMBOL(public_6313330);
CLANG_FORWARD_JUMP_SYMBOL(public_6392c80);

#define public_627c392 _public_627c392
#define public_627c39e _public_627c39e
#define public_627c3a0 _public_627c3a0
#define public_627c3b5 _public_627c3b5
#define public_627c3c0 _public_627c3c0
#define public_627c3d2 _public_627c3d2
#define public_627c3f2 _public_627c3f2
#define public_627c401 _public_627c401
#define public_627c430 _public_627c430
#define public_627c43c _public_627c43c
#define public_627c43e _public_627c43e
#define public_627c453 _public_627c453
#define public_627c460 _public_627c460
#define public_627c472 _public_627c472
#define public_627c492 _public_627c492
#define public_627c4a1 _public_627c4a1

PROC_DECLARE(0x627c310, internal_627c310, public_627c310);
extern "C" NAKED register_t __cdecl internal_627c310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392c80 @0x627c312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392c80
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        push ebp
        push esi
        push edi
        push 4
        lea eax, ss:[esp+0x4C]
        mov edi, ecx
        push eax
        mov ecx, ebx
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x48]
        push 4
        lea edx, ss:[esp+0x4C]
        mov dword ptr ds : [edi], ecx
        push edx
        mov ecx, ebx
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, ebx
        mov dword ptr ds : [edi+4], eax
        call public_6312970
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebx
        mov byte ptr ds : [edi+8], al
        call public_6313330
        xor ebp, ebp
        push eax
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x44], ebp
        call public_630e450
        mov dword ptr ss : [esp+0x10], offset public_639b5a4
        mov dword ptr ss : [esp+0x40], 1
        xor esi, esi
        public_627c392 : nop
        cmp esi, ebp
        mov eax, dword ptr ss : [esp+0x14]
        jne public_627c39e
        mov esi, eax
        jmp public_627c3a0
        public_627c39e : nop
        mov esi, dword ptr ds : [esi]
        public_627c3a0 : nop
        cmp esi, ebp
        je public_627c3b5
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        jmp public_627c392
        public_627c3b5 : nop
        cmp eax, ebp
        mov esi, eax
        je public_627c3d2
        nop 
        lea esp, ss:[esp]
        public_627c3c0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_627c6b0
        cmp esi, ebp
        jne public_627c3c0
        public_627c3d2 : nop
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], offset public_639b59c
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_627c401
        public_627c3f2 : nop
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        push 1
        call public_627ca90
        cmp esi, ebp
        jne public_627c3f2
        public_627c401 : nop
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        call public_6313330
        push eax
        lea ecx, ds:[edi+0x20]
        mov dword ptr ss : [esp+0x44], 2
        call public_630e450
        mov dword ptr ss : [esp+0x24], offset public_639b5a4
        mov dword ptr ss : [esp+0x40], 3
        xor esi, esi
        public_627c430 : nop
        cmp esi, ebp
        mov eax, dword ptr ss : [esp+0x28]
        jne public_627c43c
        mov esi, eax
        jmp public_627c43e
        public_627c43c : nop
        mov esi, dword ptr ds : [esi]
        public_627c43e : nop
        cmp esi, ebp
        je public_627c453
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_62fd570
        add esp, 4
        mov dword ptr ds : [esi+8], ebp
        jmp public_627c430
        public_627c453 : nop
        cmp eax, ebp
        mov esi, eax
        je public_627c472
        lea esp, ss:[esp]
        public_627c460 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_627c6b0
        cmp esi, ebp
        jne public_627c460
        public_627c472 : nop
        mov esi, dword ptr ss : [esp+0x34]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], offset public_639b59c
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_627c4a1
        public_627c492 : nop
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        push 1
        call public_627ca90
        cmp esi, ebp
        jne public_627c492
        public_627c4a1 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x627c310)
    }
}

#undef public_627c392
#undef public_627c39e
#undef public_627c3a0
#undef public_627c3b5
#undef public_627c3c0
#undef public_627c3d2
#undef public_627c3f2
#undef public_627c401
#undef public_627c430
#undef public_627c43c
#undef public_627c43e
#undef public_627c453
#undef public_627c460
#undef public_627c472
#undef public_627c492
#undef public_627c4a1
