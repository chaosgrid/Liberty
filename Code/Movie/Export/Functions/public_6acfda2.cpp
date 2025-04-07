#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acfda2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad12fc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1350);
CLANG_FORWARD_PROC_SYMBOL(public_6ad13e8);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1488);
CLANG_FORWARD_PROC_SYMBOL(public_6ad14c6);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad26ac);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ad27b9);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2a06);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2cad);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2d0a);

#define public_6acfe02 _public_6acfe02
#define public_6acfe06 _public_6acfe06
#define public_6acfe37 _public_6acfe37
#define public_6acfe58 _public_6acfe58
#define public_6acfe69 _public_6acfe69
#define public_6acfe75 _public_6acfe75
#define public_6acfe78 _public_6acfe78

PROC_DECLARE(0x6acfda2, internal_6acfda2, public_6acfda2);
extern "C" NAKED register_t __cdecl internal_6acfda2()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 1
        jne public_6acfe37
        call dword ptr ds : [public_6ada138]
        push 1
        mov dword ptr ds : [public_6ae0eac], eax
        call public_6ad2cad
        test eax, eax
        pop ecx
        je public_6acfe02
        mov eax, dword ptr ds : [public_6ae0eac]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_6ae0ead]
        and eax, 0xFF
        shr dword ptr ds : [public_6ae0eac], 0x10
        mov dword ptr ds : [public_6ae0eb4], eax
        mov dword ptr ds : [public_6ae0eb8], ecx
        shl eax, 8
        add eax, ecx
        mov dword ptr ds : [public_6ae0eb0], eax
        call public_6ad12fc
        test eax, eax
        jne public_6acfe06
        call public_6ad2d0a
        public_6acfe02 : nop
        xor eax, eax
        jmp public_6acfe78
        public_6acfe06 : nop
        call dword ptr ds : [public_6ada13c]
        mov dword ptr ds : [public_6ae259c], eax
        call public_6ad2a06
        mov dword ptr ds : [public_6ae0e98], eax
        call public_6ad24f0
        call public_6ad27b9
        call public_6ad2700
        call public_6ad1488
        inc dword ptr ds : [public_6ae0e94]
        jmp public_6acfe75
        public_6acfe37 : nop
        xor ecx, ecx
        cmp eax, ecx
        jne public_6acfe69
        cmp dword ptr ds : [public_6ae0e94], ecx
        jle public_6acfe02
        dec dword ptr ds : [public_6ae0e94]
        cmp dword ptr ds : [public_6ae0ee4], ecx
        jne public_6acfe58
        call public_6ad14c6
        public_6acfe58 : nop
        call public_6ad26ac
        call public_6ad1350
        call public_6ad2d0a
        jmp public_6acfe75
        public_6acfe69 : nop
        cmp eax, 3
        jne public_6acfe75
        push ecx
        call public_6ad13e8
        pop ecx
        public_6acfe75 : nop
        push 1
        pop eax
        public_6acfe78 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6acfda2)
    }
}

#undef public_6acfe02
#undef public_6acfe06
#undef public_6acfe37
#undef public_6acfe58
#undef public_6acfe69
#undef public_6acfe75
#undef public_6acfe78
