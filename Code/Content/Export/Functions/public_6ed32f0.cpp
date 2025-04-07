#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed32f0);

#define public_6ed3304 _public_6ed3304
#define public_6ed3334 _public_6ed3334
#define public_6ed3344 _public_6ed3344
#define public_6ed334b _public_6ed334b

PROC_DECLARE(0x6ed32f0, internal_6ed32f0, public_6ed32f0);
extern "C" NAKED register_t __cdecl internal_6ed32f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, ecx
        je public_6ed334b
        push ebp
        push esi
        push edi
        public_6ed3304 : nop
        mov edx, dword ptr ds : [ecx-0x34]
        sub ecx, 0x34
        sub eax, 0x34
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        xor esi, esi
        test edx, edx
        mov dword ptr ds : [eax+0x30], edx
        jle public_6ed3344
        mov edi, ecx
        lea edx, ds:[eax+0x10]
        sub edi, eax
        public_6ed3334 : nop
        mov ebp, dword ptr ds : [edi+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc esi
        add edx, 4
        cmp esi, ebp
        jl public_6ed3334
        public_6ed3344 : nop
        cmp ecx, ebx
        jne public_6ed3304
        pop edi
        pop esi
        pop ebp
        public_6ed334b : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed32f0)
    }
}

#undef public_6ed3304
#undef public_6ed3334
#undef public_6ed3344
#undef public_6ed334b
