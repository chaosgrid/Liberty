#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67121e0);

#define public_6712208 _public_6712208
#define public_671221a _public_671221a
#define public_6712231 _public_6712231
#define public_6712248 _public_6712248
#define public_671225d _public_671225d
#define public_671225f _public_671225f
#define public_6712272 _public_6712272
#define public_6712277 _public_6712277
#define public_671229b _public_671229b
#define public_671229c _public_671229c

PROC_DECLARE(0x67121e0, internal_67121e0, public_67121e0);
extern "C" NAKED register_t __cdecl internal_67121e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        test edx, edx
        je public_671229c
        mov cx, word ptr ds : [edx]
        push esi
        cmp cx, 0x30
        jne public_6712272
        mov si, word ptr ds : [edx+2]
        cmp si, 0x78
        je public_6712208
        cmp si, 0x58
        jne public_6712272
        public_6712208 : nop
        mov cx, word ptr ds : [edx+4]
        add edx, 4
        xor esi, esi
        test cx, cx
        je public_671229b
        public_671221a : nop
        cmp cx, 0x30
        jb public_6712231
        cmp cx, 0x39
        ja public_6712231
        and ecx, 0xFFFF
        sub ecx, 0x30
        jmp public_671225d
        public_6712231 : nop
        cmp cx, 0x41
        jb public_6712248
        cmp cx, 0x46
        ja public_6712248
        and ecx, 0xFFFF
        sub ecx, 0x37
        jmp public_671225d
        public_6712248 : nop
        cmp cx, 0x61
        jb public_671225f
        cmp cx, 0x66
        ja public_671225f
        and ecx, 0xFFFF
        sub ecx, 0x57
        public_671225d : nop
        mov esi, ecx
        public_671225f : nop
        mov cx, word ptr ds : [edx+2]
        add edx, 2
        shl eax, 4
        add eax, esi
        test cx, cx
        jne public_671221a
        pop esi
        ret 
        public_6712272 : nop
        test cx, cx
        je public_671229b
        public_6712277 : nop
        cmp cx, 0x30
        jb public_671229b
        cmp cx, 0x39
        ja public_671229b
        lea eax, ds:[eax+eax*4]
        and ecx, 0xFFFF
        add edx, 2
        lea eax, ds:[ecx+eax*2-0x30]
        mov cx, word ptr ds : [edx]
        test cx, cx
        jne public_6712277
        public_671229b : nop
        pop esi
        public_671229c : nop
        ret 
        UNREACHABLE_TRAP(0x67121e0)
    }
}

#undef public_6712208
#undef public_671221a
#undef public_6712231
#undef public_6712248
#undef public_671225d
#undef public_671225f
#undef public_6712272
#undef public_6712277
#undef public_671229b
#undef public_671229c
