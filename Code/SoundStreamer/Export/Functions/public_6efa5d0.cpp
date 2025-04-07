#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa5d0);

#define public_6efa5f4 _public_6efa5f4
#define public_6efa610 _public_6efa610
#define public_6efa615 _public_6efa615
#define public_6efa622 _public_6efa622
#define public_6efa62a _public_6efa62a
#define public_6efa632 _public_6efa632
#define public_6efa644 _public_6efa644
#define public_6efa64b _public_6efa64b
#define public_6efa64e _public_6efa64e
#define public_6efa653 _public_6efa653
#define public_6efa659 _public_6efa659
#define public_6efa661 _public_6efa661
#define public_6efa697 _public_6efa697
#define public_6efa6a1 _public_6efa6a1
#define public_6efa6ab _public_6efa6ab
#define public_6efa6af _public_6efa6af
#define public_6efa6b7 _public_6efa6b7
#define public_6efa6b9 _public_6efa6b9
#define public_6efa6c1 _public_6efa6c1
#define public_6efa6c6 _public_6efa6c6

PROC_DECLARE(0x6efa5d0, internal_6efa5d0, public_6efa5d0);
extern "C" NAKED register_t __cdecl internal_6efa5d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        test ecx, ecx
        je public_6efa653
        push esi
        push ebx
        mov ebx, ecx
        mov esi, dword ptr ss : [esp+0x14]
        test esi, 3
        mov edi, dword ptr ss : [esp+0x10]
        jne public_6efa5f4
        shr ecx, 2
        jne public_6efa661
        jmp public_6efa615
        public_6efa5f4 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        je public_6efa622
        test al, al
        je public_6efa62a
        test esi, 3
        jne public_6efa5f4
        mov ebx, ecx
        shr ecx, 2
        jne public_6efa661
        public_6efa610 : nop
        and ebx, 3
        je public_6efa622
        public_6efa615 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [edi], al
        inc edi
        test al, al
        je public_6efa64e
        dec ebx
        jne public_6efa615
        public_6efa622 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret 
        public_6efa62a : nop
        test edi, 3
        je public_6efa644
        public_6efa632 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        je public_6efa6c6
        test edi, 3
        jne public_6efa632
        public_6efa644 : nop
        mov ebx, ecx
        shr ecx, 2
        jne public_6efa6b7
        public_6efa64b : nop
        mov byte ptr ds : [edi], al
        inc edi
        public_6efa64e : nop
        dec ebx
        jne public_6efa64b
        pop ebx
        pop esi
        public_6efa653 : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6efa659 : nop
        mov dword ptr ds : [edi], edx
        add edi, 4
        dec ecx
        je public_6efa610
        public_6efa661 : nop
        mov edx, 0x7EFEFEFF
        mov eax, dword ptr ds : [esi]
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        mov edx, dword ptr ds : [esi]
        add esi, 4
        test eax, 0x81010100
        je public_6efa659
        test dl, dl
        je public_6efa6ab
        test dh, dh
        je public_6efa6a1
        test edx, 0xFF0000
        je public_6efa697
        test edx, 0xFF000000
        jne public_6efa659
        mov dword ptr ds : [edi], edx
        jmp public_6efa6af
        public_6efa697 : nop
        and edx, 0xFFFF
        mov dword ptr ds : [edi], edx
        jmp public_6efa6af
        public_6efa6a1 : nop
        and edx, 0xFF
        mov dword ptr ds : [edi], edx
        jmp public_6efa6af
        public_6efa6ab : nop
        xor edx, edx
        mov dword ptr ds : [edi], edx
        public_6efa6af : nop
        add edi, 4
        xor eax, eax
        dec ecx
        je public_6efa6c1
        public_6efa6b7 : nop
        xor eax, eax
        public_6efa6b9 : nop
        mov dword ptr ds : [edi], eax
        add edi, 4
        dec ecx
        jne public_6efa6b9
        public_6efa6c1 : nop
        and ebx, 3
        jne public_6efa64b
        public_6efa6c6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6efa5d0)
    }
}

#undef public_6efa5f4
#undef public_6efa610
#undef public_6efa615
#undef public_6efa622
#undef public_6efa62a
#undef public_6efa632
#undef public_6efa644
#undef public_6efa64b
#undef public_6efa64e
#undef public_6efa653
#undef public_6efa659
#undef public_6efa661
#undef public_6efa697
#undef public_6efa6a1
#undef public_6efa6ab
#undef public_6efa6af
#undef public_6efa6b7
#undef public_6efa6b9
#undef public_6efa6c1
#undef public_6efa6c6
