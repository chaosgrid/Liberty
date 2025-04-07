#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001d60);
CLANG_FORWARD_PROC_SYMBOL(public_10002d20);

#define public_10002d4c _public_10002d4c
#define public_10002d59 _public_10002d59
#define public_10002d91 _public_10002d91
#define public_10002dc7 _public_10002dc7
#define public_10002dd4 _public_10002dd4

PROC_DECLARE(0x10002d20, internal_10002d20, public_10002d20);
extern "C" NAKED register_t __cdecl internal_10002d20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push ebp
        xor eax, eax
        test edx, edx
        push edi
        je public_10002dd4
        mov edi, dword ptr ds : [edx+0x1C]
        test edi, edi
        je public_10002dd4
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, 0xFFFFFFFF
        jne public_10002d4c
        mov ebx, 6
        jmp public_10002d59
        public_10002d4c : nop
        test ebx, ebx
        jl public_10002dd4
        cmp ebx, 9
        jg public_10002dd4
        public_10002d59 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        jl public_10002dd4
        cmp ebp, 2
        jg public_10002dd4
        mov ecx, dword ptr ds : [edi+0x7C]
        push esi
        lea esi, ds:[ebx+ebx*2]
        lea ecx, ds:[ecx+ecx*2]
        mov ecx, dword ptr ds : [ecx*4+public_1000b0c0]
        shl esi, 2
        cmp ecx, dword ptr ds : [esi+public_1000b0c0]
        je public_10002d91
        mov ecx, dword ptr ds : [edx+8]
        test ecx, ecx
        je public_10002d91
        push 1
        push edx
        call public_10001d60
        public_10002d91 : nop
        cmp dword ptr ds : [edi+0x7C], ebx
        je public_10002dc7
        mov dword ptr ds : [edi+0x7C], ebx
        movzx edx, word ptr ds : [esi+public_1000b0ba]
        mov dword ptr ds : [edi+0x78], edx
        movzx ecx, word ptr ds : [esi+public_1000b0b8]
        mov dword ptr ds : [edi+0x84], ecx
        movzx edx, word ptr ds : [esi+public_1000b0bc]
        mov dword ptr ds : [edi+0x88], edx
        movzx ecx, word ptr ds : [esi+public_1000b0be]
        mov dword ptr ds : [edi+0x74], ecx
        public_10002dc7 : nop
        pop esi
        mov dword ptr ds : [edi+0x80], ebp
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        public_10002dd4 : nop
        pop edi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10002d20)
    }
}

#undef public_10002d4c
#undef public_10002d59
#undef public_10002d91
#undef public_10002dc7
#undef public_10002dd4
