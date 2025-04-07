#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22a20);

#define public_6f22a31 _public_6f22a31
#define public_6f22a54 _public_6f22a54
#define public_6f22af3 _public_6f22af3
#define public_6f22b60 _public_6f22b60

PROC_DECLARE(0x6f22a20, internal_6f22a20, public_6f22a20);
extern "C" NAKED register_t __cdecl internal_6f22a20()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x5D]
        test al, al
        push esi
        jne public_6f22a31
        mov eax, 0xFFFFFFF8
        pop esi
        ret 8
        public_6f22a31 : nop
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [ecx+0x10]
        lea eax, ds:[edx+1]
        jae public_6f22b60
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        je public_6f22af3
        cmp eax, dword ptr ds : [ecx+0x58]
        jne public_6f22a54
        mov eax, dword ptr ds : [ecx+0x54]
        public_6f22a54 : nop
        mov edx, dword ptr ds : [ecx+0x28]
        shl eax, 4
        add eax, edx
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [ecx+0x54]
        mov esi, dword ptr ds : [ecx+0x58]
        shl edx, 4
        add edx, eax
        shl esi, 4
        add esi, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ds : [ecx+0x58]
        inc edx
        shl edx, 4
        add edx, eax
        inc esi
        shl esi, 4
        add esi, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ds : [ecx+0x58]
        shl ecx, 4
        lea edx, ds:[ecx+eax-0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        xor eax, eax
        pop esi
        ret 8
        public_6f22af3 : nop
        mov edx, dword ptr ds : [ecx+0x28]
        shl eax, 4
        add eax, edx
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ecx+0x28]
        lea edx, ds:[eax+0x10]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ecx+0x58]
        mov ecx, dword ptr ds : [ecx+0x28]
        mov edx, eax
        shl edx, 4
        add edx, ecx
        inc eax
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        xor eax, eax
        pop esi
        ret 8
        public_6f22b60 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f22a20)
    }
}

#undef public_6f22a31
#undef public_6f22a54
#undef public_6f22af3
#undef public_6f22b60
