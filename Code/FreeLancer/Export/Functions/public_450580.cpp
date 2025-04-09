#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450580);

#define public_450588 _public_450588
#define public_4505a3 _public_4505a3
#define public_4505b1 _public_4505b1
#define public_45065c _public_45065c
#define public_45066a _public_45066a

PROC_DECLARE(0x450580, internal_450580, public_450580);
extern "C" NAKED register_t __cdecl internal_450580()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        xor ebx, ebx
        xor eax, eax
        public_450588 : nop
        cmp byte ptr ds : [ecx+eax+0x4500], bl
        je public_4505a3
        inc eax
        cmp eax, 0x100
        jl public_450588
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4505a3 : nop
        cmp eax, 0xFFFFFFFF
        jne public_4505b1
        or eax, eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_4505b1 : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov edx, eax
        shl edx, 6
        add edx, ecx
        push edi
        mov dword ptr ds : [edx], ebx
        lea esi, ds:[edx+4]
        mov dword ptr ss : [esp+0x10], 0
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], edi
        mov dword ptr ss : [esp+0x14], 0
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ss : [esp+0x18], 0
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [edx+0x2C], ebx
        mov dword ptr ds : [edx+0x28], ebx
        mov dword ptr ds : [edx+0x24], ebx
        mov dword ptr ds : [edx+0x1C], ebx
        mov dword ptr ds : [edx+0x18], ebx
        mov dword ptr ds : [edx+0x14], ebx
        mov esi, 0x3F800000
        mov dword ptr ds : [edx+0x30], esi
        mov dword ptr ds : [edx+0x20], esi
        mov dword ptr ds : [edx+0x10], esi
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0x34], 0x420C0000
        mov dword ptr ds : [edx+0x38], 0x3E800000
        mov dword ptr ds : [edx+0x3C], 0x49742400
        mov dword ptr ds : [edx], esi
        mov dl, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+eax*4+0x4000], ebp
        mov byte ptr ds : [eax+ecx+0x4400], dl
        mov byte ptr ds : [eax+ecx+0x4500], 1
        mov esi, dword ptr ds : [ecx+0x4600]
        cmp esi, 0xFFFFFFFF
        mov edi, 0xFFFFFF00
        je public_45065c
        mov edi, dword ptr ds : [ecx+esi*4+0x4000]
        public_45065c : nop
        cmp dl, bl
        je public_45066a
        cmp ebp, edi
        jle public_45066a
        mov dword ptr ds : [ecx+0x4600], eax
        public_45066a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x450580)
    }
}

#undef public_450588
#undef public_4505a3
#undef public_4505b1
#undef public_45065c
#undef public_45066a
