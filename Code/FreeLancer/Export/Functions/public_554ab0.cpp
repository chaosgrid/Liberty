#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_509b70);
CLANG_FORWARD_PROC_SYMBOL(public_50c040);
CLANG_FORWARD_PROC_SYMBOL(public_50c6e0);
CLANG_FORWARD_PROC_SYMBOL(public_515500);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5200b0);
CLANG_FORWARD_PROC_SYMBOL(public_5382f0);
CLANG_FORWARD_PROC_SYMBOL(public_5383c0);
CLANG_FORWARD_PROC_SYMBOL(public_541210);
CLANG_FORWARD_PROC_SYMBOL(public_54be20);
CLANG_FORWARD_PROC_SYMBOL(public_554ab0);
CLANG_FORWARD_PROC_SYMBOL(public_554ce0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1498);

#define public_554b21 _public_554b21
#define public_554b5e _public_554b5e
#define public_554b62 _public_554b62
#define public_554b74 _public_554b74
#define public_554b9d _public_554b9d
#define public_554b9f _public_554b9f
#define public_554ba9 _public_554ba9
#define public_554bd7 _public_554bd7
#define public_554bd9 _public_554bd9
#define public_554c22 _public_554c22
#define public_554c39 _public_554c39
#define public_554c41 _public_554c41
#define public_554c59 _public_554c59
#define public_554c81 _public_554c81
#define public_554c97 _public_554c97
#define public_554ca0 _public_554ca0
#define public_554ca4 _public_554ca4
#define public_554cb4 _public_554cb4
#define public_554cc5 _public_554cc5

PROC_DECLARE(0x554ab0, internal_554ab0, public_554ab0);
extern "C" NAKED register_t __cdecl internal_554ab0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1498 @0x554ab8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1498
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        cmp esi, ebx
        je public_554b21
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x34], offset public_5e11c8
        call dword ptr ds : [public_5c6b9c]
        lea ecx, ss:[esp+0x34]
        push ecx
        call dword ptr ds : [public_5c6b98]
        lea edx, ss:[esp+0x38]
        push edx
        call dword ptr ds : [public_5c6b94]
        lea eax, ss:[esp+0x3C]
        push eax
        call dword ptr ds : [public_5c6b90]
        lea ecx, ss:[esp+0x40]
        push ecx
        call dword ptr ds : [public_5c6b8c]
        lea edx, ss:[esp+0x44]
        push edx
        call dword ptr ds : [public_5c6b88]
        add esp, 0x18
        public_554b21 : nop
        mov dword ptr ss : [esp+0xC], offset public_5e11c0
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x18], bl
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x28], ebx
        call public_5afe60
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        je public_554b5e
        mov dword ptr ds : [ecx], eax
        jmp public_554b62
        public_554b5e : nop
        mov dword ptr ss : [esp+0x10], eax
        public_554b62 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_554b74
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x190]
        public_554b74 : nop
        push ebp
        mov ebp, dword ptr ds : [public_5c60f8]
        push edi
        call ebp
        call public_5200b0
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_554ba9
        mov ecx, dword ptr ds : [public_679954]
        cmp ecx, ebx
        je public_554b9d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_554b9f
        public_554b9d : nop
        xor eax, eax
        public_554b9f : nop
        push eax
        call dword ptr ds : [public_5c6b84]
        add esp, 4
        public_554ba9 : nop
        call ebp
        call public_515500
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_541210
        add esp, 4
        call public_5382f0
        call public_5383c0
        mov ecx, dword ptr ds : [public_679954]
        cmp ecx, ebx
        je public_554bd7
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        jmp public_554bd9
        public_554bd7 : nop
        xor eax, eax
        public_554bd9 : nop
        push eax
        call dword ptr ds : [public_5c6b80]
        add esp, 4
        call ebp
        mov ecx, offset public_679900
        call public_420f70
        mov ecx, offset public_679914
        call public_420f70
        mov ecx, offset public_679928
        call public_420f70
        mov dword ptr ds : [public_67993c], ebx
        call ebp
        call public_54be20
        call ebp
        call public_50c6e0
        mov eax, dword ptr ds : [public_6798c8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_554c39
        public_554c22 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_509b70
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_6798c8]
        add esp, 4
        cmp esi, eax
        jne public_554c22
        public_554c39 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_554c59
        public_554c41 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6798c4
        call public_516f70
        cmp esi, edi
        jne public_554c41
        public_554c59 : nop
        call public_50c040
        mov ecx, offset public_6798ac
        call public_425a20
        call public_554ce0
        call ebp
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ebx
        pop edi
        mov dword ptr ss : [esp+0x10], offset public_5e11c0
        pop ebp
        je public_554ca4
        public_554c81 : nop
        cmp byte ptr ss : [esp+0x18], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_554c97
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_554ca0
        public_554c97 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_554ca0 : nop
        cmp esi, ebx
        jne public_554c81
        public_554ca4 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        je public_554cc5
        public_554cb4 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_554cb4
        public_554cc5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x554ab0)
    }
}

#undef public_554b21
#undef public_554b5e
#undef public_554b62
#undef public_554b74
#undef public_554b9d
#undef public_554b9f
#undef public_554ba9
#undef public_554bd7
#undef public_554bd9
#undef public_554c22
#undef public_554c39
#undef public_554c41
#undef public_554c59
#undef public_554c81
#undef public_554c97
#undef public_554ca0
#undef public_554ca4
#undef public_554cb4
#undef public_554cc5
