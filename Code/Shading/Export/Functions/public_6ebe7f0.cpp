#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe7f0);

#define public_6ebe808 _public_6ebe808
#define public_6ebe81e _public_6ebe81e
#define public_6ebe821 _public_6ebe821
#define public_6ebe846 _public_6ebe846
#define public_6ebe859 _public_6ebe859
#define public_6ebe85d _public_6ebe85d
#define public_6ebe866 _public_6ebe866
#define public_6ebe869 _public_6ebe869

PROC_DECLARE(0x6ebe7f0, internal_6ebe7f0, public_6ebe7f0);
extern "C" NAKED register_t __cdecl internal_6ebe7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        push esi
        jne public_6ebe821
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax+0x14]
        add eax, 0x10
        test esi, esi
        jne public_6ebe808
        xor edx, edx
        jmp public_6ebe81e
        public_6ebe808 : nop
        mov edx, dword ptr ds : [eax+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ebe81e : nop
        mov dword ptr ds : [ecx+0x14], edx
        public_6ebe821 : nop
        mov edx, dword ptr ds : [ecx+0x14]
        test edx, edx
        jne public_6ebe846
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6ebe846 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        jne public_6ebe85d
        cmp edx, 1
        jbe public_6ebe859
        mov eax, dword ptr ds : [ecx+0x10]
        jmp public_6ebe869
        public_6ebe859 : nop
        xor eax, eax
        jmp public_6ebe869
        public_6ebe85d : nop
        cmp eax, 0xFFFFFFFE
        je public_6ebe866
        cmp eax, edx
        jb public_6ebe869
        public_6ebe866 : nop
        lea eax, ds:[edx-1]
        public_6ebe869 : nop
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+0x24]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        mov esi, dword ptr ds : [eax+esi]
        mov edx, dword ptr ds : [edx+esi*4]
        mov esi, dword ptr ds : [edx+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [esi+0x14]
        mov esi, dword ptr ds : [esi+eax+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [esi+0x14]
        mov esi, dword ptr ds : [esi+eax+8]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [esi+0x14]
        mov esi, dword ptr ds : [esi+eax+0xC]
        mov dword ptr ds : [edx+0xC], esi
        mov ecx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ecx+eax+0x10]
        mov dword ptr ds : [edx+0x10], eax
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ebe7f0)
    }
}

#undef public_6ebe808
#undef public_6ebe81e
#undef public_6ebe821
#undef public_6ebe846
#undef public_6ebe859
#undef public_6ebe85d
#undef public_6ebe866
#undef public_6ebe869
