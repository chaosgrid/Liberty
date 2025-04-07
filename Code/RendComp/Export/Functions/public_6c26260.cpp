#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26260);

#define public_6c26272 _public_6c26272
#define public_6c26283 _public_6c26283
#define public_6c2628c _public_6c2628c
#define public_6c2628e _public_6c2628e
#define public_6c26297 _public_6c26297

PROC_DECLARE(0x6c26260, internal_6c26260, public_6c26260);
extern "C" NAKED register_t __cdecl internal_6c26260()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x10]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+0x14]
        xor bl, bl
        xor eax, eax
        cmp edx, ebp
        je public_6c26297
        push esi
        push edi
        public_6c26272 : nop
        mov ecx, dword ptr ds : [edx]
        mov edi, dword ptr ds : [ecx+0x2C]
        mov esi, dword ptr ds : [ecx+0x30]
        cmp edi, esi
        je public_6c26283
        mov ecx, dword ptr ds : [edi+0x6C]
        jmp public_6c2628c
        public_6c26283 : nop
        test bl, bl
        jne public_6c2628e
        mov ecx, dword ptr ds : [esi+0x6C]
        mov bl, 1
        public_6c2628c : nop
        add eax, ecx
        public_6c2628e : nop
        add edx, 4
        cmp edx, ebp
        jne public_6c26272
        pop edi
        pop esi
        public_6c26297 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c26260)
    }
}

#undef public_6c26272
#undef public_6c26283
#undef public_6c2628c
#undef public_6c2628e
#undef public_6c26297
