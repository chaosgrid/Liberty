#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ee70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f040);

#define public_6f4ee9a _public_6f4ee9a
#define public_6f4eeb4 _public_6f4eeb4
#define public_6f4eec1 _public_6f4eec1
#define public_6f4eecb _public_6f4eecb
#define public_6f4eed0 _public_6f4eed0
#define public_6f4eedf _public_6f4eedf
#define public_6f4eef3 _public_6f4eef3
#define public_6f4eef6 _public_6f4eef6
#define public_6f4ef0d _public_6f4ef0d

PROC_DECLARE(0x6f4ee70, internal_6f4ee70, public_6f4ee70);
extern "C" NAKED register_t __cdecl internal_6f4ee70()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+ecx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        jl public_6f4ee9a
        push edi
        call public_6f4ef20
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        public_6f4ee9a : nop
        mov ebx, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov eax, ebx
        div ecx
        mov ebp, dword ptr ss : [esp+0x18]
        mov esi, edx
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+esi*4]
        test eax, eax
        je public_6f4eef3
        public_6f4eeb4 : nop
        cmp eax, offset public_6f608b0
        jne public_6f4eec1
        mov dword ptr ss : [esp+0x1C], esi
        jmp public_6f4eed0
        public_6f4eec1 : nop
        cmp ebp, dword ptr ds : [eax+0x10]
        je public_6f4eecb
        cmp ebp, 0xFFFFFFFF
        jne public_6f4eed0
        public_6f4eecb : nop
        cmp ebx, dword ptr ds : [eax+0x14]
        je public_6f4ef0d
        public_6f4eed0 : nop
        lea eax, ds:[ecx-2]
        and eax, ebx
        lea esi, ds:[esi+eax+1]
        cmp esi, ecx
        jl public_6f4eedf
        sub esi, ecx
        public_6f4eedf : nop
        mov eax, dword ptr ds : [edx+esi*4]
        test eax, eax
        jne public_6f4eeb4
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 0xFFFFFFFF
        je public_6f4eef3
        mov esi, eax
        jmp public_6f4eef6
        public_6f4eef3 : nop
        inc dword ptr ds : [edi+4]
        public_6f4eef6 : nop
        push ebx
        push ebp
        push ebx
        call public_6f4f040
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+esi*4], eax
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+esi*4]
        add esp, 0xC
        public_6f4ef0d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4ee70)
    }
}

#undef public_6f4ee9a
#undef public_6f4eeb4
#undef public_6f4eec1
#undef public_6f4eecb
#undef public_6f4eed0
#undef public_6f4eedf
#undef public_6f4eef3
#undef public_6f4eef6
#undef public_6f4ef0d
