#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3290);

#define public_6ed32a8 _public_6ed32a8
#define public_6ed32d0 _public_6ed32d0
#define public_6ed32e0 _public_6ed32e0
#define public_6ed32ed _public_6ed32ed

PROC_DECLARE(0x6ed3290, internal_6ed3290, public_6ed3290);
extern "C" NAKED register_t __cdecl internal_6ed3290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6ed32ed
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, esi
        sub edi, eax
        public_6ed32a8 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [esi+0x30]
        xor edx, edx
        test ecx, ecx
        mov dword ptr ds : [eax+0x30], ecx
        jle public_6ed32e0
        lea ecx, ds:[eax+0x10]
        lea ecx, ds:[ecx]
        public_6ed32d0 : nop
        mov ebp, dword ptr ds : [edi+ecx]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc edx
        add ecx, 4
        cmp edx, ebp
        jl public_6ed32d0
        public_6ed32e0 : nop
        add eax, 0x34
        sub edi, 0x34
        cmp eax, ebx
        jne public_6ed32a8
        pop edi
        pop esi
        pop ebp
        public_6ed32ed : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed3290)
    }
}

#undef public_6ed32a8
#undef public_6ed32d0
#undef public_6ed32e0
#undef public_6ed32ed
