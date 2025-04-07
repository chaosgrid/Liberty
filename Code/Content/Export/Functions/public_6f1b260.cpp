#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b260);

#define public_6f1b280 _public_6f1b280
#define public_6f1b296 _public_6f1b296
#define public_6f1b2a6 _public_6f1b2a6
#define public_6f1b2b3 _public_6f1b2b3
#define public_6f1b2c8 _public_6f1b2c8
#define public_6f1b2d5 _public_6f1b2d5
#define public_6f1b2e0 _public_6f1b2e0
#define public_6f1b2ea _public_6f1b2ea
#define public_6f1b2f1 _public_6f1b2f1
#define public_6f1b2fd _public_6f1b2fd

PROC_DECLARE(0x6f1b260, internal_6f1b260, public_6f1b260);
extern "C" NAKED register_t __cdecl internal_6f1b260()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+0x40]
        push esi
        mov esi, dword ptr ds : [edx]
        xor al, al
        cmp esi, edx
        mov dword ptr ss : [esp+4], ecx
        je public_6f1b2fd
        mov cl, byte ptr ss : [esp+0x10]
        push ebx
        push ebp
        push edi
        lea esp, ss:[esp]
        public_6f1b280 : nop
        mov edx, dword ptr ds : [esi+0x10]
        test edx, edx
        je public_6f1b2b3
        mov edi, dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [edi]
        cmp edx, edi
        je public_6f1b2b3
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        public_6f1b296 : nop
        mov ebp, dword ptr ds : [edx+8]
        cmp ebx, dword ptr ss : [ebp+8]
        je public_6f1b2a6
        mov edx, dword ptr ds : [edx]
        cmp edx, edi
        jne public_6f1b296
        jmp public_6f1b2b3
        public_6f1b2a6 : nop
        mov edx, dword ptr ds : [edx+8]
        test cl, cl
        sete al
        mov byte ptr ds : [edx+4], al
        mov al, 1
        public_6f1b2b3 : nop
        mov edx, dword ptr ds : [esi+8]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f1b2d5
        mov esi, edx
        mov edx, dword ptr ds : [esi]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f1b2f1
        public_6f1b2c8 : nop
        mov esi, edx
        mov edx, dword ptr ds : [esi]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        je public_6f1b2c8
        jmp public_6f1b2f1
        public_6f1b2d5 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [edx+8]
        jne public_6f1b2ea
        lea ecx, ds:[ecx]
        public_6f1b2e0 : nop
        mov esi, edx
        mov edx, dword ptr ds : [edx+4]
        cmp esi, dword ptr ds : [edx+8]
        je public_6f1b2e0
        public_6f1b2ea : nop
        cmp dword ptr ds : [esi+8], edx
        je public_6f1b2f1
        mov esi, edx
        public_6f1b2f1 : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp esi, dword ptr ds : [edx+0x40]
        jne public_6f1b280
        pop edi
        pop ebp
        pop ebx
        public_6f1b2fd : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f1b260)
    }
}

#undef public_6f1b280
#undef public_6f1b296
#undef public_6f1b2a6
#undef public_6f1b2b3
#undef public_6f1b2c8
#undef public_6f1b2d5
#undef public_6f1b2e0
#undef public_6f1b2ea
#undef public_6f1b2f1
#undef public_6f1b2fd
