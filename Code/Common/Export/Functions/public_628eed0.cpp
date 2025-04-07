#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628eee6 _public_628eee6
#define public_628eefb _public_628eefb
#define public_628ef12 _public_628ef12
#define public_628ef25 _public_628ef25

PROC_DECLARE(0x628eed0, internal_628eed0, public_628eed0);
extern "C" NAKED register_t __cdecl internal_628eed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_628ef25
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_628eee6 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_628eefb
        mov esi, eax
        public_628eefb : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_628ef12
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_628ef12 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_628eee6
        pop edi
        pop esi
        public_628ef25 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x628eed0)
    }
}

#undef public_628eee6
#undef public_628eefb
#undef public_628ef12
#undef public_628ef25
