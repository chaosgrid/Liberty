#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7d7a);
CLANG_FORWARD_PROC_SYMBOL(public_65d8edc);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f30);
CLANG_FORWARD_PROC_SYMBOL(public_65d8fc8);
CLANG_FORWARD_PROC_SYMBOL(public_65d9a41);
CLANG_FORWARD_PROC_SYMBOL(public_65d9a7f);
CLANG_FORWARD_PROC_SYMBOL(public_65db1b4);
CLANG_FORWARD_PROC_SYMBOL(public_65db370);
CLANG_FORWARD_PROC_SYMBOL(public_65db3c4);
CLANG_FORWARD_PROC_SYMBOL(public_65db47d);
CLANG_FORWARD_PROC_SYMBOL(public_65db6ca);
CLANG_FORWARD_PROC_SYMBOL(public_65db971);
CLANG_FORWARD_PROC_SYMBOL(public_65db9ce);

#define public_65d7dda _public_65d7dda
#define public_65d7dde _public_65d7dde
#define public_65d7e0f _public_65d7e0f
#define public_65d7e30 _public_65d7e30
#define public_65d7e41 _public_65d7e41
#define public_65d7e4d _public_65d7e4d
#define public_65d7e50 _public_65d7e50

PROC_DECLARE(0x65d7d7a, internal_65d7d7a, public_65d7d7a);
extern "C" NAKED register_t __cdecl internal_65d7d7a()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 1
        jne public_65d7e0f
        call dword ptr ds : [public_65e1054]
        push 1
        mov dword ptr ds : [public_65e6138], eax
        call public_65db971
        test eax, eax
        pop ecx
        je public_65d7dda
        mov eax, dword ptr ds : [public_65e6138]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_65e6139]
        and eax, 0xFF
        shr dword ptr ds : [public_65e6138], 0x10
        mov dword ptr ds : [public_65e6140], eax
        mov dword ptr ds : [public_65e6144], ecx
        shl eax, 8
        add eax, ecx
        mov dword ptr ds : [public_65e613c], eax
        call public_65d8edc
        test eax, eax
        jne public_65d7dde
        call public_65db9ce
        public_65d7dda : nop
        xor eax, eax
        jmp public_65d7e50
        public_65d7dde : nop
        call dword ptr ds : [public_65e1050]
        mov dword ptr ds : [public_65e7a58], eax
        call public_65db6ca
        mov dword ptr ds : [public_65e6124], eax
        call public_65db1b4
        call public_65db47d
        call public_65db3c4
        call public_65d9a41
        inc dword ptr ds : [public_65e6120]
        jmp public_65d7e4d
        public_65d7e0f : nop
        xor ecx, ecx
        cmp eax, ecx
        jne public_65d7e41
        cmp dword ptr ds : [public_65e6120], ecx
        jle public_65d7dda
        dec dword ptr ds : [public_65e6120]
        cmp dword ptr ds : [public_65e6170], ecx
        jne public_65d7e30
        call public_65d9a7f
        public_65d7e30 : nop
        call public_65db370
        call public_65d8f30
        call public_65db9ce
        jmp public_65d7e4d
        public_65d7e41 : nop
        cmp eax, 3
        jne public_65d7e4d
        push ecx
        call public_65d8fc8
        pop ecx
        public_65d7e4d : nop
        push 1
        pop eax
        public_65d7e50 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65d7d7a)
    }
}

#undef public_65d7dda
#undef public_65d7dde
#undef public_65d7e0f
#undef public_65d7e30
#undef public_65d7e41
#undef public_65d7e4d
#undef public_65d7e50
